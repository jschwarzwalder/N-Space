using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;

public class WindowsMrMenu : MonoBehaviour
{
    public static string XboxControllerInputFileName = @"WindowsMR\Editor\WindowsMR_XboxController_InputManager.asset.txt";
    public static string MotionControllerInputFileName = @"WindowsMR\Editor\WindowsMR_MotionController_InputManager.asset.txt";
    public static string XboxControllerEntriesStartMarker = "WindowsMR_XboxController_Start";
    public static string MotionControllerEntriesStartMarker = "WindowsMR_MotionController_Start";

    /// <summary>
    /// Adds the WindowsMR input support for the Xbox controller
    /// This method doesn't parse the existing YAML, 
    /// it just naively appends our input section if it doesn't already exist.
    /// an improved version would parse the YAML doc and insert list members.
    /// </summary>
    [MenuItem("WindowsMR/Add Xbox controller input manager entries", false, 50)]
    public static void AddXboxControllerEntries()
    {
        if (!EditorUtility.DisplayDialog("Update InputManager?",
            "This will back up your current InputManager.asset file and create a new version with Xbox controller support. Continue?",
            "Yes", "No"))
        {
            Debug.Log("AddXboxControllerEntries canceled");
            return;
        }

        var windowsMrInputManagerPath = Path.Combine(Application.dataPath, XboxControllerInputFileName);
        var windowsMrInputManagerFileInfo = new FileInfo(windowsMrInputManagerPath);
        if (!windowsMrInputManagerFileInfo.Exists)
        {
            Debug.LogErrorFormat("Unable to read Windows MR InputManager.asset file. {0} doesn't exist ", windowsMrInputManagerPath);
            return;
        }

        var windowsMrInputText = File.ReadAllText(windowsMrInputManagerPath);
        UpdateInputManagerFile(XboxControllerEntriesStartMarker, windowsMrInputText);
    }


    /// <summary>
    /// Adds the WindowsMR input support for the 6DOF motion controllers.
    /// This method doesn't parse the existing YAML,
    /// it just naively appends our input section if it doesn't already exist.
    /// an improved version would parse the YAML doc and insert list members.
    /// </summary>
    [MenuItem("WindowsMR/Add motion controller input manager entries", false, 50)]
    public static void AddMotionControllerEntries()
    {
        if (!EditorUtility.DisplayDialog("Update InputManager?",
            "This will back up your current InputManager.asset file and create a new version with WindowsMR motion controller support. Continue?",
            "Yes", "No"))
        {
            Debug.Log("AddMotionControllerEntries canceled");
            return;
        }

        var windowsMrInputManagerPath = Path.Combine(Application.dataPath, MotionControllerInputFileName);
        var windowsMrInputManagerFileInfo = new FileInfo(windowsMrInputManagerPath);
        if (!windowsMrInputManagerFileInfo.Exists)
        {
            Debug.LogErrorFormat("Unable to read Windows MR InputManager.asset file. {0} doesn't exist ", windowsMrInputManagerPath);
            return;
        }

        var windowsMrInputText = File.ReadAllText(windowsMrInputManagerPath);
        UpdateInputManagerFile(MotionControllerEntriesStartMarker, windowsMrInputText);
    }

    private static void UpdateInputManagerFile(string startMarker, string inputEntries)
    {
        var applicationDirInfo = new DirectoryInfo(Application.dataPath);
        if (applicationDirInfo.Parent == null)
        {
            Debug.LogError("Unable to access ProjectSettings folder");
            return;
        }

        var projectSettingsDirectory = Path.Combine(applicationDirInfo.Parent.FullName, "ProjectSettings");
        var psDirInfo = new DirectoryInfo(projectSettingsDirectory);

        var imFilePath = Path.Combine(psDirInfo.FullName, "InputManager.asset");
        if (File.Exists(imFilePath))
        {
            // Found existing InputManager.asset file, see if we already modified it.
            using (var imTextReader = File.OpenText(imFilePath))
            {
                while (!imTextReader.EndOfStream)
                {
                    var textLine = imTextReader.ReadLine();
                    if (textLine != null && textLine.Contains(startMarker))
                    {
                        // found our start marker, we've already modified this file.
                        Debug.LogWarning("controller input section already found in InputManager.asset.  Aborting.");
                        return;
                    }
                }
            }

            // if we made it this far, we need to modify the file.  Create a backup first.
            Debug.Log("Found IM File, creating backup.");
            FileUtil.ReplaceFile(imFilePath, imFilePath + ".bak");
            // append our input lines to the end
            File.AppendAllText(imFilePath, inputEntries);
            AssetDatabase.Refresh();
            Debug.Log("controller input section added to InputManager.asset");
            return;
        }

        Debug.LogError("IM File not found, aborting.");
    }
}

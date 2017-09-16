
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.WSA;
using UnityEngine.Experimental.XR;

namespace HoloToolkit.Unity.Playspace
{
    /// <summary>
    /// Uses the StageRoot component to ensure we the coordinate system grounded at 0,0,0 for occluded devices.
    /// Places a floor quad as a child of the stage root at 0,0,0.
    /// Will also draw the bounds of your placespace if you set it during the Mixed Reality Portal first run experience.
    /// </summary>
    public class PlayspaceManager : MonoBehaviour
    {
        [Tooltip("Quad prefab to display as the floor.")]
        public GameObject FloorQuad;
        private GameObject floorQuadInstance;
        public Transform FloorRoot;

        [Tooltip("Material used to draw bounds for play space. Leave empty if you have not setup your play space or don't want to render bounds.")]
        public Material PlayspaceBoundsMaterial;
        public Transform PlayspaceBoundsRoot;

        bool updatePlayspaceBounds = true;

        List<GameObject> boundingBoxLines = new List<GameObject>();

        private void Awake()
        {
            // Set the unity coordinate system to defualt to the persitant, room relative 
            UnityEngine.XR.XRDevice.SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType.RoomScale);
        }
        private void Start()
        {
            // Render the floor as a child of the StageRoot component.
            if (FloorQuad != null && 
                UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque)
            {
                floorQuadInstance = GameObject.Instantiate(FloorQuad);
                floorQuadInstance.SetActive(true);
                
                if (this.FloorRoot == null)
                {
                    this.FloorRoot = this.transform;
                }
                // Parent this to the FloorRoot
                floorQuadInstance.transform.SetParent(FloorRoot);

#if UNITY_EDITOR
                // So the floor quad does not occlude in editor testing, draw it lower.
                floorQuadInstance.transform.localPosition = new Vector3(0, -3, 0);
#else
                // Draw the floor at 0,0,0 under stage root.
                floorQuadInstance.transform.localPosition = Vector3.zero;
#endif
            }
        }

        private void Update()
        {
            // This is simply showing how to draw the bounds.
            // Applications don't *need* to draw bounds. 
            // Bounds are more useful for placing objects.
            if (updatePlayspaceBounds && UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque)
            {
                //UpdatePlayspaceBounds();
            }
        }

        private void UpdatePlayspaceBounds()
        {
            RemoveBoundingBox();

            List<Vector3> bounds = null;
            bool tryGetBoundsSuccess = Boundary.TryGetGeometry(bounds, Boundary.Type.TrackedArea);

            if (tryGetBoundsSuccess && bounds != null)
            {
                if (PlayspaceBoundsMaterial != null)
                {
                    Vector3 start;
                    Vector3 end;
                    for (int i = 1; i < bounds.Count; i++)
                    {
                        start = bounds[i - 1];
                        end = bounds[i];
                        DrawLine(start, end);
                    }
                    DrawLine(bounds[0], bounds[bounds.Count - 1]);
                    updatePlayspaceBounds = false;
                }
            }
        }

        private void DrawLine(Vector3 start, Vector3 end)
        {
            GameObject boundingBox = new GameObject("BoundaryLine");

            boundingBox.transform.SetParent(PlayspaceBoundsRoot);

            boundingBoxLines.Add(boundingBox);

            LineRenderer lr = boundingBox.AddComponent<LineRenderer>();
            lr.sharedMaterial = PlayspaceBoundsMaterial;
            lr.startWidth = 0.05f;
            lr.endWidth = 0.05f;
            lr.SetPosition(0, start);
            lr.SetPosition(1, end);
            lr.useWorldSpace = false;
        }

        //ToDo, Add this event back
        private void StageRoot_OnTrackingChanged(bool located)
        {
            // Hide the floor if tracking is lost or if StageRoot can't be located.
            if (floorQuadInstance != null &&
                UnityEngine.XR.WSA.HolographicSettings.IsDisplayOpaque)
            {
                floorQuadInstance.SetActive(located);
                updatePlayspaceBounds = located;
            }
        }


        private void RemoveBoundingBox()
        {
            if (boundingBoxLines != null)
            {
                foreach (GameObject boundingBoxLine in boundingBoxLines)
                {
                    DestroyImmediate(boundingBoxLine);
                }
            }
        }
    }
}
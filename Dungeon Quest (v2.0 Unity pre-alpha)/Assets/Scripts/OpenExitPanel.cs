using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OpenExitPanel : MonoBehaviour
{
    public GameObject ExitPanel;
    public void OpenExit()
    {
        if (ExitPanel != null)
        {
            bool isActive = ExitPanel.activeSelf;
            ExitPanel.SetActive(!isActive);
        }
    }

}

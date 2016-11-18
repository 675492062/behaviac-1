﻿using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Diagnostics;

namespace tutorial_0
{
    class Program
    {
        static FirstAgent g_FirstAgent;

        static bool InitBehavic()
        {
            Console.WriteLine("InitBehavic");

            behaviac.Agent.RegisterInstanceName<FirstAgent>();

            behaviac.Config.IsLogging = false;
            behaviac.Config.IsSocketing = false;

            behaviac.Workspace.Instance.FilePath = "../../../workspace/exported";
            behaviac.Workspace.Instance.FileFormat = behaviac.Workspace.EFileFormat.EFF_xml;

            return true;
        }

        static bool InitPlayer(string pszTreeName)
        {
            Console.WriteLine("InitPlayer");

            g_FirstAgent = new FirstAgent();

            bool bRet = g_FirstAgent.btload(pszTreeName);
            Debug.Assert(bRet);

            g_FirstAgent.btsetcurrent(pszTreeName);

            return bRet;
        }

        static void UpdateLoop()
        {
            Console.WriteLine("UpdateLoop");

            int frames = 0;
            behaviac.EBTStatus status = behaviac.EBTStatus.BT_RUNNING;

            while (status == behaviac.EBTStatus.BT_RUNNING)
            {
                Console.WriteLine("frame {0}", ++frames);

                status = g_FirstAgent.btexec();
            }
        }

        static void CleanupPlayer()
        {
            Console.WriteLine("CleanupPlayer");

            g_FirstAgent = null;
        }

        static void CleanupBehaviac()
        {
            Console.WriteLine("CleanupBehaviac");

            behaviac.Workspace.Instance.Cleanup();
        }

        static void Main(string[] args)
        {
            InitBehavic();

            InitPlayer("FirstBT");

            UpdateLoop();

            CleanupPlayer();

            CleanupBehaviac();

            Console.Read();
        }
    }
}

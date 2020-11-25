Installation instructions for the Fujitsu Windows 2000 Utilities and driver
---------------------------------------------------------------------------

1. Copy SAS.EXE and LCDETCT.EXE to the c:\winnt directory
2. Follow the steps below to install the driver:

   a. Double-click the Add/Remove Hardware Wizard applet in Control Panel. 
   b. Select Add/Troubleshoot a Device. 
   c. Select Add a new device. 
   d. Select No, I Want to Select the Hardware from a list. 
   e. Select Other Devices and then click Next. 
   f. Click Have Disk and point to the directory that contains the fujdrv.inf 
      file. 

This will install the Fujitsu Windows 2000 driver. There is no need to reboot 
the machine after the installation is complete.

3. Now, open a DOS box and run the command "regedit lcddetct.reg". This will 
   set the RunOnce key in the registry to load lcddetct.exe.
4. To automatically launch SAS.EXE every time the machine boots, create a 
   shortcut to SAS.EXE in the Windows 2000 Startup group.

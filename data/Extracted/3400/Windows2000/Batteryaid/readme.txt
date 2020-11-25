************************************************************************
**                                                                    **
**                       Software Instructions                        **
**                                                                    **
**                     Fujitsu BatteryAid V1.21                       **
**                                                                    **
************************************************************************


    These instructions describe the requirements for, and reference
    information on the BatteryAid installation and operation, etc.

========================================================================
Contents of this file (README.TXT)
========================================================================

 1. Summary of BatteryAid
 2. Installing BatteryAid
 3. Uninstalling BatteryAid (Removing the installed software)
 4. Precautions
 5. Copyrights

========================================================================
1. Summary of BatteryAid
========================================================================

 - BatteryAid is a utility intended to save the power on your machine by
   adjusting some settings.
   The feature of displaying the brightness of the screen is supported
   on the machines that satisfy both two conditions :
   (A) Brightness of the screen is adjusted by the keyboard operations.
   (B) Three or more states of the brightness are available.

 - BatteryAid only works with Fujitsu LifeBook series and Fujitsu
   Stylistic LT.

 - BatteryAid is available both the Microsoft Windows 98 Second Edition
   and the Windows Me and the Microsoft Windows 2000 Professional.
   This program cannot be run on MS-DOS, Microsoft Windows 3.1,
   Microsoft Windows 95, Microsoft Windows 98, Microsoft Windows NT, or
   any other operating system.

========================================================================
2. Installing BatteryAid
========================================================================

 - Before install, close all of current applications.

 - To install BatteryAid, run the Setup.exe file.
   Then follow instructions that appear on BatteryAid Setup window. 

 - If you want to re-install BatteryAid, you will need to uninstall your
   current BatteryAid first. 

 - If you want to use BatteryAid in the ACPI mode, install the device
   driver (FUJ02B1) separately.

========================================================================
3. Uninstalling BatteryAid (Removing the installed software)
========================================================================

 - Before uninstall, close all applications and Power Management(or Power
   Option on Windows2000) in Control Panel if it opened.

 - Windows 98 Second Edition or Windows Me:
   Double-click Add/Remove Programs in Windows Control Panel, and
   choose "BatteryAid" from the displayed list. Click the Add/Remove
   button, and then BatteryAid will be removed.

 - Windows 2000 Professional:
   Double-click Add/Remove Programs in Windows Control Panel, and
   choose "BatteryAid" from the displayed list. Click the Change/Remove
   button, and then BatteryAid will be removed.

========================================================================
4. Precautions
========================================================================

 - When ACPI mode with Microsoft Windows 98 Second Edition or Windows Me,
   Sometime the setting of [Turn off hard disks] in [Power Schemes] on
   [Power Management] turn to blank.

   This issue comes form power saving function of BatteryAid change a
   value of [Turn off hard disks]. But you can change the value of
   [Turn off hard disks] without problem.

   If you do not want to change the value of [Turn off hard disks],
   uninstall BatteryAid.

 - If Microsoft Windows 98 Second Edition or Windows Me works with
   "Disable all 32-bit protected-mode disk drives" setting, [CPU Clock
   Control] and [Power saving when turn on hard disks] are unavailable.

 - For users with Microsoft Windows 2000 Professional.
   [Power saving when turn on hard disks] is unavailable on Windows
     2000.
   [CPU Clock Control] is unavailable with Restricted user(Users Group)
     on Windows 2000.

 - BatteryAid supports both the APM and ACPI modes.
   [Resume the computer when the phone rings] are available with APM
     mode only.
   [CPU Clock Control] and [Power saving when turn on hard disks]
     are available with ACPI mode only. Except for LonRun Technology
     support machine.

 - The system will be prevented to go to the hibernation (Save To Disk)
   even when Standby is performed.
         * "Hibernation" means the state in which the power supply is
           suspended after memory contents have been saved in the
           hard disk.
   If you want to go the system to the hibernation, clear the "Resume
   the computer when the phone rings" checkbox in Properties : Other
   of BatteryAid.

   If the system fails to go to hibernation even if the above checkbox
   is cleared, please confirm the BIOS Settings in the BIOS Setup screen
   to refer over the document that is bundled with your machine.

 - Even after making the LCD Backlighting or CPU Clock setting in the
   BIOS Setup screen, if you start BatteryAid, the same setting made on
   BatteryAid will prevail.

========================================================================
5. Copyrights
========================================================================

 Microsoft, MS-DOS, Windows and Windows NT are registered trademarks of
 the Microsoft Corporation of the United States in the United States and
 other countries.

 LongRun(TM) is trademark of Transmeta Corporation in the United States
 and other countries.

 Fujitsu BatteryAid is manufactured by FUJITSU LIMITED.

 All Rights Reserved. Copyright (C) FUJITSU LIMITED 2000.

                                                                    END

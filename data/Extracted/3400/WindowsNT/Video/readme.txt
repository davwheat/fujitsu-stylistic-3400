***********************************************************************

                WINDOWS NT DRIVER SETUP INFORMATION
                               for
                  Trident Cyber9525/9520/9297DVD


***********************************************************************
Windows NT Device Drivers ver V4.xxx.xx                    Oct 15, 1998
***********************************************************************

Contents

1.0     Introduction
2.0     Installation Notes for Windows NT Version 4.0

*****************************

1.0     Introduction

This Accelerate Driver runs on the following products:

     Trident Cyber9525/9520/9297DVD AGP adapter

The Graphics Device Drivers supplied here are for the Microsoft
Windows NT operating system version 4.0.

*****************************

2.0     Installation Notes for Windows NT

This driver package containing:

  - TRIDENT.INF         (setup files used by Windows NT Setup program)
  - SGIULNT.SYS         (Trident linear addressing video miniport driver)
  - SGIUL40.DLL         (Trident 256/64K/16M colors accelerated video display  driver)
  - README              (This README file for Windows NT Version 4.0)
  - TDISPLUS.DLL        (Trident Utility program for device change)
  - TDISPLUS.HLP        (Trident Utility program help file)
  - TDISPLUS.CNT        (Trident Utility program help context)
  - TRISERV.EXE         (Trident service program)
  - INSTALL.EXE         (Trident service's one time installation program)
  - DTV.SYS             (Digital TV support)
  - COMMBIOS.SYS        (Common BIOS DLL)
  - BIOSDL32.SYS	(BIOS DLL)
  - 95XX.SYS            (9525/9520 BIOS DLL)

Procedure:

1. Run the Windows NT display Setup program located in the Control Panel,
   Select Display Icon.  Double click it to bring up Display Property page.
   Select "Settings" Tab on the Display Property page.

2. Click "Display Type..." button from the Display Settings options.

3. Select "Change..." button from the Display Type options.

4. Select "Have Disk..." button from the Select Device options.

5. Windows NT will prompt you for the correct path where the driver is loaded.

6. Choose "Trident Video Accelerator 3D Adapter" from the
   list of drivers.

7. Then follow the procedures provide by Windows NT to complete installation.

8. Restart Windows NT.  Windows NT will start up with default mode 
   using the Trident drivers.

9. Choose desired resulotion, color depth and refresh rate from the
   Display Setting applet, and restart Windows NT.



FJ-IDE Drive Initializer Utility Ver. 1.00
Copyright (c) 1997-98 Fujitsu Limited. All Rights Reserved.

November 24, 1998

This file contains immediate information for use with the 
FJ-IDE Drive Initializer Utility Ver. 1.00.

DISCLAIMER
----------
The FJ-IDE Drive Initializer Utility is provided "as is" without any 
warranty of any kind, either expressed or implied, including, but not 
limited to, the implied warranties of merchantibility and fitness for 
a particular purpose. The entire risk as to the quality and performance 
of the program is with you. In no event will FUJITSU LIMITED or any of 
its subsidiaries be liable to you for any damages, including any general,
special, incidental or consequential damages arising out of the use or 
inability to use this program ( including but not limited to any loss of
profit or savings, loss of data or a failure of the program to operate 
with any other programs), even if FUJITSU LIMITED or any of its 
subsidiaries has been advised of the possibility of such damages.


_________________________________________________________


Version History  
----------------
Version 1.00 - Date: Nov. 21, 1998				
	- extracted Erase Feature from Low Level Format Utility 
	  and made it as a separate tool 
	  (hence, this program version)

_________________________________________________________


CONTENTS:
--------

1) Introduction
2) File size and build time
3) When do you need this program
-
4) User's Guide	 ( Pls. read this part before using the program ) 	
-


			- o - o - o -

1. INTRODUCTION
---------------

This program version only with any FUJITSU IDE drive model
( 2.5" and 3.5" drives).


2. FILE SIZE and BUILD TIME
---------------------------

To ensure correct operations, please check if your copy of the 
program conforms with the ff. specifications:
	File Size  : 87,298     bytes
	Build Time : 11-21-98  11:45 pm		


3. WHEN DO YOU NEED THIS PROGRAM
--------------------------------


-- Erase --

This procedure performs a pseudo-formatting to the drive. It erases all
of your previous hard disk data and reinitializes it to '00' pattern.
By performing this task, you will be able to erase the whole user area
including your Master Boot Record, Partition Table, FAT
(File Allocation Table), and all the files and data it refers to.
If you have verified that your FUJITSU drive has no errors and doesn't 
require a low level factory format, and you want to reinitialize
your drive (i.e. you want to migrate from one OS to another or
you want to re-install your OS but wants to be sure your drive
is clean), then you may want to perform the 'ERASE' function.

WARNING!!!
All the previous data will be lost when performing the 'Erase' task. 
PLEASE BACKUP ALL YOUR IMPORTANT FILES BEFORE RUNNING THIS PROGRAM!!!


4. USER'S GUIDE
---------------

4.1. Requirement
	a) Operating System : DOS 
           * This version has only been tested from DOS 5.0 above
	b) CPU: IBM-PC compatibles -> 80x86 CPU-Based motherboards 

4.2. Running the program
	4.2.1. Boot from a clean DOS disk.
	4.2.2. Change to the drive/directory where FJERASE.EXE is located.
	4.2.3. At the DOS prompt, type FJERASE to execute the program.

	Program Switches:	
       	----------------
        The program has some switches for certain operating 
        conditions. In normal conditions, default settings
        are recommended to be used.
           	/?	- displays the help screen
           	/A=C|L 	- /A=C implements CHS addressing mode during 
           		   verify routine. 
           		- /A=L implements LBA addressing mode during
           		   verify routine (default).
        	* Unless you are an IDE technical person, please refrain
        	  from using the /A=C|L switch. 
        	/R=1|0	- /R=1 performs a software reset during program
        		   initialization process (default)
			- /R=0 no software reset
		* Some drive combinations may cause the system to hang or
		  stop responding for a while when the default /R=1 
		  switch is used. In this case, use /R=0 switch.
	
	*Note: 	You cannot run this program under WINDOWS environment. 
		If you are running Windows 95, restart your system in 
		MS-DOS mode.	

4.3. Inside the program
	At the startup routine, the program tries to identify all IDE drives
	connected in your system (Primary and Secondary Port). This procees
	may take some time.
	Afterwhich, all the drives found will be displayed in the Main Menu 
	window with the corresponding valid product ID. Port with no drive(s) 
	connected will also be displayed with 'NONE' as its product ID.
	Hotkeys are indicated in the taskbar. Use the up and down arrow keys 
	to move the current highlighted drive.
	    Hotkeys Definition:
	    F1 - Displays the Help Window
	    F4 - Reinitializes the whole hard disk user area to '00' data 
                 pattern effectively erasing all its previous contents.
	         
		 **  Once this task is started, and even if you abort the 
		     procedure, your hard disk data may already be lost and
		     irretrievable. Please remember that MBR, Partition 
		     Tables and FAT are located in the first few cylinders 
		     of your hard disk and this ERASE functions starts writing
		     from this area of your hard disk. 
		 **  The completion time for this task depends on the capacity
		     of your drive and the clock speed of your host processor.
		     (e.g. For a Pentium 133Mhz processor, it takes 
		     approximately 10 minutes to erase the whole drive with
                     1 GB capacity.
		     This completion time doubles as your CPU clock speed
		     reduces to half. --- 66Mhz -> 20 minutes for 1Gb cap.)

		 ------------------------------------------------------------
		  		      WARNING!!!
		 ALL DATA ON THE DRIVE WILL BE LOST. PLEASE BACKUP ALL YOUR 
		 IMPORTANT DATA BEFORE PERFORMING THIS TASK.
		 ------------------------------------------------------------
		 
	    Enter - Displays basic information about the drive
	    Esc - Prompts to quit the program.


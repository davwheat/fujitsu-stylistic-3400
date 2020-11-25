Stylistic 3400 SAS for Windows NT

15 June 2000

This archive contains the Secure Attention Sequence (SAS) utility for
Windows NT on the Stylistic 3400.

If a previous version of SAS is installed on your pen tablet, make sure
that you have terminated the SAS utility before isntalling this version.
This can be done by "right-clicking" on the SAS icon in the toolbar and
selecting the "Close SAS applicaton" menu command.

The SAS utility is comprised of two files, SAS.EXE and FUJDRV.SYS.
SAS.EXE is the file that creates an icon in the Windows toolbar and
responds to the tap of the pen.  SAS.EXE then calls FUJDRV.SYS to
simulate the secure attention sequence.

To install the SAS utility on your pen tablet, copy the files in this
archive to a floppy disk or a subdirectory on the hard drive of your pen
tablet.  Then right-click on the file FPSIDRV.INF and select "install".
This will copy the file FUJDRV.SYS onto your hard drive and modify the
Windows NT Registry.   Next, copy the file SAS.EXE to a suitable
directory such as C:\PROGRAM FILES\SAS\.  Finally, if the SAS utility
was not previously installed on your pen tablet you may want to add a
shortcut to the SAS.EXE file to the Startup folder in the common section
of the Windows Start Menu, so that SAS gets executed each time Windows
NT boots.

For additional information on how to install these drivers, please
contact your local help desk or reseller.  You can also contact your
assigned FPSI Systems Engineer or call FPSI Customer Support at one of
the numbers listed in our Web site at
<http://www.fpsi.fujitsu.com/support/>.
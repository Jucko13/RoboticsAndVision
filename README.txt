DEMO PROJECT MADE BY Ricardo de Roode

This will only work on a 64-bit machine!


What do you need?

Visual studio 2015 (does not matter if its pro or community). If you want pro, come see me.
- OR -
Visual studio (any version, but you need to do one thing extra to make it work).

The opencv.rar and upack it to your C:\ drive.



The folder structure will look something like this:


C:\
	opencv\
		bin\
		include\
		lib\
		staticlib\

Now we are going to add a few rules to your system PATH variable.

type in: Win+R and enter the following in the textbox without the quotes: "sysdm.cpl ,3"

Click on the button "Environment Variables"

Select "Path" and click "Edit..."

Add the following rows without the quotes: "C:\opencv\bin" AND "C:\opencv\lib"

Press "OK" 3 times.

Restart pc.


Now you can open the demo project an you should be able to compile.

PRO TIP: Make sure the compile properties are set to x64. Release mode and Debug mode should both be working.


FOR USERS WITH A DIFFERENT VERSION OF VISUAL STUDIO OR IF YOU GET LIKE 680 ERRORS:
Load the project that you downloaded from this github page and right click on the project (not the solution) and select "Retarget SDK" OR "Retarget Project". A window apears with the settings of the SDK compiler version. In the dropdown make sure one is selected and click ok. This should make it work.



FOR THE USERS THAT WANT THE "opencv" FOLDER ON A DIFFERENT DRIVE:
Change the path variables to the path of your likings (restart pc after changing them).
Open the project and right click on the project in the solution explorer and select "Properties".
(MAKE SURE YOU DO THE FOLLOWING FOR BOTH "DEBUG" AND "RELEASE" MODE!
Go to "C++ -> General -> Additional Include Directories" and change the paths there.
Go to "Linker -> General -> Additional Library Directories" and change the path there.
Click OK and clean the build and click the play button. It should work now. If not, feel free to contact me.
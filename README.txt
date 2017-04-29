DEMO PROJECT MADE BY Ricardo de Roode

This will only work on a 64-bit machine!


What do you need?

Visual studio 2015 (does not matter if its pro or community). If you want pro, come see me.

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

PRO TIP: Make sure the compile properties are set to x64 and on Release mode. Else the program will not start!
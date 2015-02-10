# WordClock_v2.0

This is a **work-in-progress** build of a word clock as part [Fab Academy 2015](http://www.fabacademy.org/) at [Fab Lab Strathclyde](http://www.strath.ac.uk/fablab/). You can follow the process on [my class website](http://fabacademy.org/archives/2015/eu/students/chalmers.iain/index.html). The content is also mirrored to [my GitHub Pages site](http://icchalmers.github.io/).

This clock is an evolution of [WordClock_v1.0](https://github.com/icchalmers/WordClock_v1.0).

The file `Model/wordClock.ipt` is VERY customisable, but has no mounting holes for electronics or any mechanism to support the LED strips.

![WordClockModel](/Model/wordClock.png)

# SolidifiedClockToMake

The 'Model/SolidifiedClockToMake' contains a locked down version of the clock i.e. it uses a grid of 11x11. Some parameters may or may not still be adjustable. It has additional holes added to the middle plate for mounting control electronics, and an untested mechanism for holding the LED strips in place. 

![WordClockNonParametricModel](/Model/SolidifiedClockToMake/wordClock_NonParametric.png)

A trial version of this clock has been cut from two sheets of 600x300x2.5mm cardboard. The layout of these sheets is supplied in CorelDRAW X7 format as `Clock2.0_cardboard_sheet1.cdr` and `Clock2.0_cardboard_sheet2.cdr`. I didn't have quite enough cardboard to cut all the interior grid parts, but here is the result:

![WordClock_cardboard](/Model/SolidifiedClockToMake/cardboardClock.jpg)
![WordClock_cardboard](/Model/SolidifiedClockToMake/cardboardClockInterior.jpg)

The main file for the clock is `wordClock_NonParametric.ipt`. The other .ipt files are the individual pieces and are derived from `wordClock_NonParametric.ipt`. They have been compensated for laser kerf using the "kerf" parameter in the master model.

The file `PartsForExport.dwg` has a layout of each of the individual parts. If you change a parameter in the master model, update the individual parts and then update the .dwg. I have found the easiest method is to export the .dwg file as a PDF. It can then be brought directly into your laser cutting software of choice. This is the point to add the lettering - Inventor is a bit rubbish at handling text! I used a modified version of [Source Sans Pro](https://www.google.com/fonts/specimen/Source+Sans+Pro) i.e. I added little structures to support the internal parts of letters.
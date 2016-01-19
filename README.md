# WordClock_v2.0

This is a **work-in-progress** build of a word clock. It was originally my final project as part [Fab Academy 2015](http://www.fabacademy.org/) at [Fab Lab Strathclyde](http://www.strath.ac.uk/fablab/).
You can follow the inital evolution of the clock [on my class website](http://fabacademy.org/archives/2015/eu/students/chalmers.iain/final-project-summary-wordclock20.html). The content is also mirrored to [my GitHub Pages site](http://icchalmers.github.io/final-project-summary-wordclock20.html).

This clock is an evolution of [WordClock_v1.0](https://github.com/icchalmers/WordClock_v1.0).

# Project Parts

## Model
The 'Model' folder contains all the Autodesk Inventor 2015 CAD files for the clock. 

The file `Model/wordClock.ipt` is VERY customisable, but has no mounting holes for electronics or any mechanism to support the LED strips.


The 'Model/SolidifiedClockToMake' folder contains a locked down version of the clock i.e. it uses a grid of 11x11. Some parameters may or may not still be adjustable. It has additional holes added to the middle plate for mounting control electronics and holding the LED strips in place.

The main file for the clock is `wordClock_NonParametric.ipt`. The other .ipt files are the individual pieces and are derived from `wordClock_NonParametric.ipt`. They have been compensated for laser kerf using the "kerf" parameter in the master model.

The file `PartsForExport.dwg` has a layout of each of the individual parts. If you change a parameter in the master model, update the individual parts and then update the .dwg.

The lettering is added in CorelDraw - Inventor is a bit rubbish at handling text. I used a modified version of [Source Sans Pro](https://www.google.com/fonts/specimen/Source+Sans+Pro) i.e. I added little structures to support the internal parts of letters.

## hw
The 'hw' folder has the KiCAD files for the two PCB designs: the main control board and the power distribution boards. The power distribution boards also help hold the LED strips in place.

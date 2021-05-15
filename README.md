# Train-velocity-finder
An Arduino-based project to build a device capable of determining the velocity of trains with no visual required, but only the sound of it.


DETECTION OF VELOCITY OF TRAIN USING IT’S SOUND
-----------------------------------------------
The essence of this project is to devise a small sized handheld gadget to report the speed of train, which can be concealed underground, under the tracks (ideally under fish plate) and still give accurate readings of the speed without any exposure to the environment.

Advantages of this method are like:
-----------------------------------
1)	Avoid theft of crucial railway properties.
2)	Damage done by environmental factors is minimised.

Theory:
------
The characteristic sound produced from wheels when they pass over the joint of two tracks, joined by fish plate is utilised in this project.
The device shall be programmed to begin a timer when sound from a wheel is heard and stop it when the next sound that is from next wheel is heard, and then it divides the distance (D) fed beforehand i.e. the distance between the wheels by the respective time. That will be the instantaneous speed of the train, and the device repeats this process to obtain the speed of the train every moment it hears the sound.

Items used: 
----------
1)	UNO R3 Development Board ATmega328P ATmega16U2 (Arduino Board).
2)	Sound Detection Sensor Module.
3)	Breadboard (for Solder-less joining).
4)	16 x 2 LCD Alphanumeric display.
5)	Jumper wires.
6)	Potentiometer (10 kΩ) and resistors (220 Ω).
          
Assembly:
--------
  The following connections were made and the coding was done in Arduino’s own IDE (The code is written in another file attached below this pdf). The casing was made and all joins were done on breadboard. The Arduino was temporarily powered by USB power using a power bank. The final project was having a modular form factor cuboid in shape, with two holes at one side for sound sensor input and potentiometer knob and a display at the top. The following images are of the original device in different stages of assembly.    

                                  


Venue: Science Fiesta (Annual Science Fest), Don Bosco Liluah.  
Dated: 3rd October (2019)

Report and exhibit by: Arjun Ghosh (XII C), Tanmay Datta (XII C)
---------------------------------------------------------------

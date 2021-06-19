# Controlling-Servos-using-Potentiometers

In the previous project (see https://github.com/Roba-Osylan/Controlling-5-Servo-Motors ), the circuit and the code were created to control five servos (joints of the robotic arm) automatically. However, in this project five potentiometers will be added to control the servos manually. 


# Circuit and Connection
The components used are:
-Arduino Uno R3.
-x5 Micro Servo.
-x5 250k ohm potentiometer.
-5V power supply.
-Breadboard.

The circuit is shown in the figure below.
![Copy of Servo Motor](https://user-images.githubusercontent.com/85955049/122625108-15957200-d0ac-11eb-9059-845443dc7309.png)

# Programming - Arduino Code

In this project a useful function called map() will be used. Simply, the map() function maps a number from one range to another. For instant, an analog input (the potentiometer in this case), which ranges from 0-1023, can control a PWM output (which is connected to the servo) that has a different range (from 0-90 in this case) using the map function by changing the value from a range to its corresponding value in another range. The code is provided in the file "Controlling_Servos_with_Potentiometer".


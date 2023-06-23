STM32Duino interface ROS

The following procedure is with respect to platformio. The procedure is similar in Arduino IDE 

To use STM32 Boards(by using USB and stlink) with conventional rosserial as you do with Arduino:

- Change your current directory of the Terminal to the library folder of the project
- Run the following commands<br>

  rm -rf ros\_lib

rosrun rosserial\_arduino make\_libraries.py .

- Now go to the project/workspace and then use the code given
- Now in ros\_lib, go to ArduinoHardware.h
- And change the line 62 to<br>
#define SERIAL\_CLASS USBSerial
- Similarly change line 75 of the same header file to<br>
#define SERIAL\_CLASS USBSerial
- Now compile and upload the code to stm32 
- And go to the terminal and type the command<br>
rosrun rosserial\_arduino serial\_node.py /dev/ttyACM0


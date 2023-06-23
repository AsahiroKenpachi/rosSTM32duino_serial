//Simple talker STM32f103C8T6(Blue Pill) 
#include <Arduino.h> 
#include<ros.h>
#include<std_msgs/String.h>
ros::NodeHandle nh;
//The access point is initialised
std_msgs::String msg;
//Publisher object is initialise and publishing Topic is "arduino"
ros::Publisher arduino("arduino",&msg);
char hello[5]="cat1";
void setup()
{
//Node is initialised
  nh.initNode();
  nh.advertise(arduino);
}
void loop()
{
//Publishing messages to the topic arduino from this node
  msg.data=hello;
  arduino.publish(&msg);
  nh.spinOnce();
  delay(1000);
}

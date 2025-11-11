#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

//this section defines the devices and what ports thy are in

brain Brain;
//left side of drivetrain
motor leftfrontmotor = motor(PORT6, ratio6_1, false);
motor leftmiddlemotor = motor(PORT5, ratio6_1, true); 
motor leftbackmotor = motor(PORT4, ratio6_1, true);   
motor_group LeftDriveSmart = motor_group(leftfrontmotor, leftmiddlemotor, leftbackmotor);//for grouping the motors

// right side of drivetrain
motor rightfrontmotor = motor(PORT3, ratio6_1, true);
motor rigtmiddlemotor = motor(PORT2, ratio6_1, false); 
motor rightbackmotor = motor(PORT1, ratio6_1, false);
motor_group RightDriveSmart = motor_group(rightfrontmotor, rigtmiddlemotor, rightbackmotor);//this is to group the motors

//sensors
inertial inertialsensor = inertial(PORT12);
optical opticalsensor = optical(PORT11);

//intake motors
motor Intake1 = motor(PORT20, ratio6_1, true);//bottom front
motor Intake2 = motor(PORT19, ratio18_1, false);//bottom back
motor Intake3 = motor(PORT18, ratio18_1, false);//top front

//pnumatics
digital_out scooper = digital_out(digital_out(Brain.ThreeWirePort.G));
digital_out parker = digital_out(digital_out(Brain.ThreeWirePort.H));

controller Controller1 = controller(primary);

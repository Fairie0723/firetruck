
/**********************************
 This is the derived class from the
 base class. It is the settings for
 the helicopter's information.
**********************************/

#ifndef FFHELICOPTER_H
#define FFHELICOPTER_H

#include <iostream>
#include "fftruck.h"


//Class must be named FFHelicopter // derived
class FFHelicopter : public FFVehicle {
private:
    std::string airport;

public:

//A two-parameter constructor that takes a string for the helicopter’s vehicle name, and a string
// representing the staging airport (in this order). This constructor passes the vehicle name parameter
// to the base class constructor and uses the second parameter to set its staging site data member.
FFHelicopter(std::string helicopter, std::string airport);

//A void function, gotoFire, that overrides the virtual function in the base class, and: 1) sets the fire location name; and 2) outputs:
//<vehicle name> staging in <stage site> for <fire location> fire.
void goToFire(std::string)override;

//A function, getWater, that overrides/ implements the pure virtual function in the base class and
//outputs: <vehicle name> scooping water from lake.
void getWater() override;
};

#endif //FFHELICOPTER_H


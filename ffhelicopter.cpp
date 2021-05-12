
/**********************************
 This is the derived class implementation
 It is the settings for the helicopter's information.
**********************************/

#include "ffhelicopter.h"
//This constructor passes the vehicle name parameter to the base class constructor
//and uses the second parameter to set its staging site data member.
FFHelicopter::FFHelicopter(const std::string helicopter, const std::string air) : FFVehicle(helicopter){
airport = air;
}
//A void function, gotoFire, that overrides the virtual function
// in the base class, and: 1) sets the fire location name
void FFHelicopter::goToFire(std::string loc) {
    location = loc;
    std::cout << vehicleName << " staging in " << airport << " for " << loc << " fire." << std::endl;
}
//A function, getWater, that overrides/ implements the pure virtual function in the base class
void FFHelicopter::getWater() {
    std::cout << vehicleName << " scooping water from lake." << std::endl;
}

/**********************************
 This is the base class implementation
 of the abstract class.
**********************************/


#include "ffvehicle.h"

#include <utility>

//A one parameter constructor that takes the vehicle’s name.
FFVehicle::FFVehicle(std::string vehicle){
vehicleName = std::move(vehicle);
}

//A one parameter virtual void function, gotoFire, with a string parameter representing the fire location.
void FFVehicle::goToFire(std::string locate){
    location = locate;
    std::cout << vehicleName << " responding to " << locate << " fire." << std::endl;
}

//A virtual void function, douseFire
void FFVehicle::douseFire() {
    std::cout << location << " fire extinguished." << std::endl;
}



/**********************************
 This is the derived class implementation
 It is the settings for the truck's information.
**********************************/


#include "fftruck.h"
#include "ffvehicle.h"

//A one parameter constructor that takes a string (the truck’s vehicle name) – This constructor must
//pass this parameter to the base class constructor.
FFTruck::FFTruck(const std::string& truck) : FFVehicle (truck){
vehicleName = truck;
}

//A function, getWater, that overrides/ implements the pure virtual function in the base class
void FFTruck::getWater(){
    std::cout << vehicleName << " hydrants connected." << std::endl;
}

//A void function, douseFire, that overrides the virtual function in the base class
void FFTruck::douseFire(){
    std::cout << vehicleName << " pump pressure OK." << std::endl;

//this functions calls the douseFire function in the base class
FFVehicle::douseFire();
std::cout << std::endl;
}

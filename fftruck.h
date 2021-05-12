
/**********************************
 This is the derived class from the
 base class. It is the settings for
 the truck's information.
**********************************/

#ifndef FFTRUCK_H
#define FFTRUCK_H

#include <iostream>
#include "ffvehicle.h"

//Class must be named FFTruck //derived
class FFTruck : public FFVehicle {
public:
//A one parameter constructor that takes a string (the truck’s vehicle name) –
explicit FFTruck(const std::string&);

//A function, getWater, that overrides/ implements the pure virtual function in the base class and
//outputs: <vehicle name> hydrants connected.
void getWater() override;

//A void function, douseFire, that overrides the virtual function in the base class, and outputs:
//<vehicle name> pump pressure OK.
void douseFire() override;

};


#endif //FFTRUCK_H

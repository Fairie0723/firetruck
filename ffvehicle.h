
/**********************************
 This is the base class the
 abstract class. It is the
 default back to.
**********************************/

#ifndef FFVEHICLE_H
#define FFVEHICLE_H

#include <iostream>
//Class must be named FFVehicle //abstract
class FFVehicle{
        protected:
    //A string containing the vehicle’s name
        std::string vehicleName;
   // A string containing the name of the fire’s location
        std::string location;

        public:

    //A one parameter constructor that takes the vehicle’s name.
        explicit FFVehicle(std::string);
    //A one parameter virtual void function, gotoFire, with a string parameter representing the fire location.
        virtual void goToFire(std::string);
        // A virtual void function, douseFire, that outputs:
        virtual void douseFire();
        //A parameterless pure-virtual void function, getWater that captures how each type of vehicle gets
        //water to fight the fire.
        virtual void getWater() = 0;
};


#endif //FFVEHICLE_H


/**********************************
 This is the driver file. It is
 the execution of all the programs
 and functions.
**********************************/

#include <iostream>
#include <fstream>
#include "ffhelicopter.h"


void fightFire(FFVehicle &, std::string);

/**************************************
 Function: main()
 Input: None
 Output: Reads in the files from the text
         and instantiates the objects.
***************************************/
int main() {

std::string truck; //Name of the truck firefighting vehicle
std::string fLocation; //Location name of fire to be fought by the truck
std::string heli; //Name of the helicopter firefighting vehicle
std::string hLocation; // Location name of fire to be fought by the helicopter
std::string port; // Name of the staging airport for the helicopter

//Opens and reads an input file named fires.txt
std::ifstream inFile;
inFile.open("fires.txt");

//if files does not open
if(inFile.fail()) {
std::cout << "Error opening file!" << std::endl;
}

//reads in files to variables
inFile >> truck >> fLocation >> heli >> hLocation >> port;

//Instantiates a FFTruck object with the information from the input file,
// and invokes the fightFire function
FFTruck T(truck);
fightFire(T, fLocation);

//Instantiates a FFHelicopter object with the information from the input file,
//and invokes the fightFire function (with the FFHelicopter object as an argument)
FFHelicopter H(heli, port);
fightFire(H, hLocation);


inFile.close(); //close file
    return 0;
}
/**********************************
 Function: fightFire()
 Return: None
 Input: FFVehicle& v, std::string location
 Output: Invokes the 3 functions.
**********************************/
void fightFire(FFVehicle& v, std::string location) {

v.goToFire(location); //calls goToFire function
v.getWater();         //calls goToWater function
v.douseFire();        //calls douseFire function

}
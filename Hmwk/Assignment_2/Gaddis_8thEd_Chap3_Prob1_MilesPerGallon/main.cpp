

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 10:45 PM
 * Purpose: Miles Per Gallon
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <math.h>  //Math Operator Library
#include <iomanip> //To use fixed precision

using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float nGallon, nMiles; //# of gallons of gas, # of miles it can be driven
    float total; //# number of miles it can be driven with a full tank
 
    //Input data values 
    cout<<"This program calculates the number of miles your car can drive";
    cout<<" per gallon of gas."<<endl;
    cout<<endl;
    cout<<"Please input the number of gallons of gas your car can drive: ";
    cin>>nGallon;
    cout<<"Please input the number of miles your car can drive with a full tank: ";
    cin>>nMiles;
 
    //Process the inputs
    total = nMiles / nGallon;
    
    //Output the results
    cout<<"Your car can drive "<<fixed<<setprecision(1)<<total;
    cout<<" miles per gallon of gas."<<endl;
    
    //Exit stage right

    return 0;
}


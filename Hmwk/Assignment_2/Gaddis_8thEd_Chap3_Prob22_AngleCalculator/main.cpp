

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 4:42 PM
 * Purpose: Angle Calculator
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
    float angle; //angle in radians
    float sine, cosine, tangent;
    
    //Input data values
    cout<<"Please input the angle in radians: ";
    cin>>angle;
 
    //Process the inputs
    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);
    
    //Output the results
    cout<<endl;
    cout<<"The angle ";
    cout<<fixed<<setprecision(4)<<angle<<" in radians is equal to: "<<endl;
    cout<<"Sine    : "<<fixed<<setprecision(4)<<sine<<endl;
    cout<<"Cosine  : "<<fixed<<setprecision(4)<<cosine<<endl;
    cout<<"Tangent : "<<fixed<<setprecision(4)<<tangent<<endl;
    cout<<endl;   
    
    //Exit stage right

    return 0;
}


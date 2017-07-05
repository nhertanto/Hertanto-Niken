

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 10:22 PM
 * Purpose: Spectral Analysis
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib>
#include <ctime>
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
    float wlength; //input - wavelength in meters
    
    //Input data values 
    cout<<"This program determines what type of radiation the ";
    cout<<"wavelength of an electromagnetic wave is."<<endl;
    cout<<"Please input the wavelength in meters and in decimals";
    cout<<" (ex. 0.0005): ";
    cin>>wlength;
    
    //Output the results
    if (wlength >= 0.01)
    {
        cout<<endl;
        cout<<wlength<<" meters is a radio wave."<<endl;
        cout<<endl;           
    }
    else if ((wlength < 0.01) && (wlength >= 0.001))
    {
        cout<<endl;
        cout<<wlength<<" meters is a microwave."<<endl;
        cout<<endl;           
    }
    else if ((wlength < 0.001) && (wlength >= 0.0000007))
    {
        cout<<endl;
        cout<<wlength<<" meters is infrared."<<endl;
        cout<<endl;           
    }
    else if ((wlength < 0.0000007) && (wlength >= 0.0000004))
    {
        cout<<endl;
        cout<<wlength<<" meters is a visible light."<<endl;
        cout<<endl;           
    }
    else if ((wlength < 0.0000004) && (wlength >= 0.00000001))
    {
        cout<<endl;
        cout<<wlength<<" meters is an ultraviolet."<<endl;
        cout<<endl;           
    }
    else if ((wlength < 0.00000001) && (wlength >= 0.00000000001))
    {
        cout<<endl;
        cout<<wlength<<" meters is an x-ray."<<endl;
        cout<<endl;           
    }
    else 
    {
        cout<<endl;
        cout<<wlength<<" meters is a gamma ray."<<endl;
        cout<<endl;           
    }
    
    //Exit stage right

    return 0;
}




/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 10, 2017, 1:03 PM
 * Purpose: Falling Distance
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions
float g = 9.8f; //gravity 

//Function Prototypes
float fallingDistance(float);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float flTime = 1.0f; //falling time (seconds)

    //Input data values
    cout << "This program calculates the distance the object falls after a "
            "period of time" << endl;
    
    cout << "Time(sec)     Distance(m)" << endl;

    //Output the results
    for (int i = 1; i <= 10; i++){
        cout << flTime << setw(22) << fallingDistance(flTime) << endl;
        flTime++; 
    }

    //Exit stage right

    return 0;
}

float fallingDistance(float t) {
    float d = pow((0.5 * g * t), 2);
    return d;

}

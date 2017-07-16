

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 10, 2017, 1:23 PM
 * Purpose: Celsius Temperature Table
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib> //Random number seed
#include <ctime> //Time for random number
#include <iomanip> //Format Library
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
float celsius(float);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float fahrenheit = 1.0f; //fahrenheit to celsius conversion

    //Creating the Table
    cout << "-CELSIUS TEMPERATURE TABLE-" << endl;
    cout << "  Fahrenheit     Celsius" << endl;

    for (int i = 1; i <= 20; i++){
        cout << fixed << setprecision(1) << setw(8) << fahrenheit << 
                setw(15) << celsius(fahrenheit) << endl;
        fahrenheit++; 
    }

    //Exit stage right

    return 0;
}

float celsius(float f) {
    float c = (f - 32) * 5 / 9;
    return c;
}

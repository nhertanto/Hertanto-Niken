

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 10, 2017, 7:55 PM
 * Purpose: Population
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
float newPopulation(float, float, float);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float pop, bRate, dRate, nYear; //population, birth rate, death rate, 
    //# of years
    bool cont = true; //if true, program continues to run

    //Output the results
    while (cont == true) {
        //Input data values
        cout << "This program calculates the future population over a number "
                "of years" << endl;
        cout << "Please input the following:" << endl;
        cout << "That starting size of a population : ";
        cin >> pop;
        cout << "The annual birth rate              : ";
        cin >> bRate;
        cout << "The annual death rate              : ";
        cin >> dRate;
        cout << "The number of years to display     : ";
        cin >> nYear;
        cout << endl;
        if (pop >= 2 && bRate >= 0 && dRate >= 0 && nYear >= 1) {
            for (int x = 1; x <= nYear; x++) {
                cout << "For year " << x << ", the new population is " <<
                        x * newPopulation (pop, bRate, dRate) << endl;
            }
            cont = false;
            }
        else {
            cout << "One or more inputs are incorrect. Please make sure that: "
                    << endl;
                    cout << "1. Starting size of population is over 2" << endl;
                    cout << "2. Birth and death rate are over 0" << endl;
                    cout << "3. Number of years is over 1" << endl;
                    cout << endl;
                    cont = true;
        }
    }
    //Exit stage right

    return 0;
}

float newPopulation(float p, float b, float d) {
        float n = p + (b * p) - (d * p); 
        return n; 
}

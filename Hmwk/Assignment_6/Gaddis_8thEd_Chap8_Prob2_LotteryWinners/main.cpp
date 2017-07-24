

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 24, 2017, 5:35 PM
 * Purpose: Lottery Winners 
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
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
    int SIZE = 10; //input - size of array
    int lottery[SIZE] = {13579, 26791, 26972, 33445, 55555, 62483, 
        77777, 79422, 85647, 93121}; //check if a lottery winner
    int input; //input - Lottery winner
    int index = 0; //Keep count through array
    bool found = false; //while not found

    //Input data values
    cout << "Problem 2: Lottery Winners" << endl;
    cout << endl;
    cout << "This program determines if the winning ticket number is the "
            "same as any of the 10 tickets" << endl; 
    cout << "Please input the winning ticket number: ";
    cin >> input;
    
    //Check to see if the input is similar to any number in the array
    while (index < SIZE && !found){
        //If input = a number in the array
        if (lottery[index] == input){
            found = true;
            cout << endl;
            cout << "Your ticket is a winner! Congratulations! :) " << endl;
            cout << endl;
        }
        //If until the end of the array, none matched
        if (index == SIZE-1 && lottery[SIZE-1] != input){
            cout << endl;
            cout << "Sorry, none of your tickets are winners" << endl;              
        }
        index++;
    }
    //Exit stage right
    return 0;
}
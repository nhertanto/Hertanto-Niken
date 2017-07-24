

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 23, 2017, 10:15 PM
 * Purpose: Charge Account Validation
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
#include <cstdlib>
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
    int SIZE = 20; //input - size of array
    int check[SIZE] = {5658845, 4520125, 7895122, 8777541, 8454277, 
        1302850, 8080152, 4562555, 5552012, 5050552, 7825877,
        1250255, 1005231, 6545231, 3852085, 7576651, 7881200,
        4581002}; //check if input is valid
    int input; //input
    bool notFnd = true; //while not found

    //Input data values
    cout << "Problem 1: Charge Account Validation" << endl;
    cout << endl;
    cout << "This program determines if your input is a valid account" << endl; 
    cout << "Please input the account number: ";
    cin >> input;
    
    while (notFnd){
        for (int i = 0; i < SIZE; i++){
            if (check[i] == input){
                notFnd = false;
                cout << "That account is valid!" << endl;
            }         
        }
        if (notFnd == true){
            cout << "Sorry, that account is not valid" << endl;
        }
        notFnd = false;
    }
    //Exit stage right

    return 0;
}

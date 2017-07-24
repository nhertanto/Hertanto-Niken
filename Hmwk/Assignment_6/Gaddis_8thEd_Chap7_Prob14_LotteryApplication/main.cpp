

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 23, 2017, 5:15 PM
 * Purpose: Lottery Application
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
#include <cstdlib> 
#include <ctime>
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Setting the random number generator
    srand(static_cast<unsigned int> (time(0)));
    
    //Declare Variables
    const int SIZE = 5;
    int lottery[SIZE]; //Lottery numbers
    int user[SIZE];
    bool cont = true; //Continue the check
   
    //Input data values
    cout << "Problem 4: Lottery Application" << endl;
    cout << endl;
    cout << "-----LOTTERY-----" << endl;
    cout << "Please input your lottery numbers one integer at a time: " << endl;
    for(int i = 0; i < SIZE; i++){
        cin >> user[i];
    }
    
    //Output the tickets to compare
    cout << endl;
    cout << "Your ticket    : ";
    for (int x = 0; x < SIZE; x++){
        cout << user[x];
    }
    cout << endl;
    cout << "Lottery Ticket : ";
    
    //Creating the random lottery ticket
    for (int j = 0; j < SIZE; j++){
        lottery[j] = rand() % 9; //[0,9] for each number
        cout << lottery[j];
    }
    cout << endl;
    
    //Comparing the lottery with your ticket
    if (    lottery[0] == user[0] && lottery[1] == user[1] &&
            lottery[2] == user[2] && lottery[3] == user[3] &&
            lottery[4] == user[4] ){
        cout << "YOU WIN!!! CONGRATULATIONS!!!!!" << endl;
    }
    else {
        cout << "Sorry you did not win!" << endl;
        cout << "Maybe next time!" << endl;
    }

    //Exit stage right

    return 0;
}
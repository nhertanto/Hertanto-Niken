

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 17, 2017, 4:25 PM
 * Purpose: is Prime function
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
#include <string> //String Library
#include <sstream>
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
void isPrime(int);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int input; //input - to choose from menu

        //Input an integer
        cout << "This program determines whether a number is a prime or not" << endl;
        cout << "Please input a number: " << endl;
        
        cin >> input;
        
        //Determines and outputs if the input is prime or not
        isPrime(input);
    
    //Exit stage right

    return 0;
}

void isPrime(int inp){
   
    if (inp == 1 || inp == 2 || inp == 3){
            cout << "This number is a prime number" << endl;
        }
    else if(inp % inp == 0 && inp % 2 == 1 && inp % 5 > 0 && inp % 9 > 0){
        cout << "This number is a prime number" << endl;
    }
    else{
        
        cout << "This number is not a prime number" << endl;
    }
}
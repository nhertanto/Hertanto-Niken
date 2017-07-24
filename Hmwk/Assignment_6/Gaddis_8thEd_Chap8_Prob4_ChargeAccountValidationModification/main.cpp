

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 23, 2017, 10:15 PM
 * Purpose: Charge Account Validation Modification
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
    int SIZE = 18; //input - size of array
    int check[SIZE] = {5658845, 4520125, 7895122, 8777541, 8454277, 
        1302850, 8080152, 4562555, 5552012, 5050552, 7825877,
        1250255, 1005231, 6545231, 3852085, 7576651, 7881200,
        4581002}; //check if input is valid
    int input; //input
    bool swap; //To determine if a swap occurred
    int temp; //Holds number temporarily
    int     first = 0,          //First array
            last = SIZE - 1,    //Last array
            middle,             //Middle of the array
            position = -1;      //Position for the search 
    bool found = false;         //Not found

    //Input data values
    cout << "Problem 4: Charge Account Validation Modification" << endl;
    cout << endl;
    cout << "This program determines if your input is a valid account" << endl; 
    cout << "Please input the account number: ";
    cin >> input;
    
    //Sort the check array first
    do{
        swap = false;
        for (int i = 0; i < SIZE-1; i++){
            if(check[i] > check[i+1]){
                temp = check[i];
                check[i] = check[i+1];
                check[i+1] = temp;
                swap = true;
            }
        }
    }while(swap);
    
    //Check to see if the input is similar to any number in the array
    while (first <= last && !found){
        //Calculates the midpoint
        middle = (first + last) / 2;
        
        //If the input is a valid number in the check[]
        if (check[middle] == input){
            cout << endl;
            cout << "That account is valid" << endl;
            cout << endl;
            found = true;
        }
        //If in the end of the check none are valid
        else if ((middle == 0 || middle == SIZE - 1) &&
                (check[0] != input || check[SIZE-1] != input)) {
            cout << endl;
            cout << "Sorry, that account is not valid" << endl;
            cout << endl;
            found = true;
        }
        //checks the top half
        else if (check[middle] > input){
            last = middle - 1;
        }
        //checks the bottom half
        else {
            first = middle + 1;
        }
    }
    //Exit stage right

    return 0;
}

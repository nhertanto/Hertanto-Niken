

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 23, 2017, 8:25 PM
 * Purpose: Larger Than N
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
void ary (int, int[], int);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int SIZE; //input - size of array
    int array[1000]; //input - array
    int n; //input - number the array must be larger than

    //Input data values
    cout << "Problem 4: Larger Than n" << endl;
    cout << endl;
    cout << "This program displays all numbers in an array that is larger than "
            "n" << endl; 
    cout << "Please input integer values for the following: " << endl;
    cout << "Size of array      : ";
    cin >> SIZE;
    cout << "Value of 'n'       : ";
    cin >> n;
    cout << "Values in the array: " << endl;
    for (int x = 0; x < SIZE; x++){
        cout << "#" << x + 1 << " ";
        cin >> array[x];
    }
    
    ary (SIZE, array, n);
  
   
    //Exit stage right

    return 0;
}
void ary (int SIZE, int array[], int n){
    //Determine if any number in array is larger than n
    cout << "In the array, the values larger than " << n << 
            " is/are: ";
    for (int i = 0; i < SIZE; i++){
        if(array[i] > n){
            cout << array[i] << " ";
        }
        
    }
    
}
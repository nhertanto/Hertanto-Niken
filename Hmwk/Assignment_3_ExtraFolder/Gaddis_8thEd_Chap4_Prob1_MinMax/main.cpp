

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June , 2017, 11:21 AM
 * Purpose: Minimum/Maximum
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    int num1, num2;
    
    //Input data values
    cout<<"Which number is larger and which is smaller?"<<endl;
    cout<<endl;
    cout<<"Please enter 2 numbers: "<<endl;
    cout<<"Number 1: ";
    cin>>num1;
    cout<<"Number 2: ";
    cin>>num2;
    cout<<endl;
    
    //Process the inputs
        
    //Output the results
     if (num1 > num2)
    {
        cout<<num1<<" is larger than "<<num2<<endl;
    }
    else
    {
        cout<<num2<<" is larger than "<<num1<<endl;
    }
    
    //Exit stage right

    return 0;
}




/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 4:24 PM
 * Purpose: Currency Exchange
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <math.h>  //Math Operator Library
#include <iomanip> //To use fixed precision

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
    float rYen = 112.20f; //exchange rate for yen
    float rEuro = 0.88f; //exchange rate for euro
    float dollar, yen, euro;   
    
    //Input data values
    cout<<"In this program we will convert dollars into yen and euro."<<endl;
    cout<<"How many dollars would you like to exchange? ";
    cin>>dollar;
 
    //Process the inputs
    yen = dollar * rYen;
    euro = dollar * rEuro;
    
    //Output the results
    cout<<endl;
    cout<<fixed<<setprecision(2)<<dollar<<" dollars = ";
    cout<<fixed<<setprecision(2)<<yen<<" yen and ";
    cout<<fixed<<setprecision(2)<<euro;
    cout<<" euro.";
    cout<<endl;   
    
    //Exit stage right

    return 0;
}


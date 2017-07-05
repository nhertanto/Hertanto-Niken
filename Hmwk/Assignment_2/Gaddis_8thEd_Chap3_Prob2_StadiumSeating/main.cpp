

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 5:24 PM
 * Purpose: Stadium Seating
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string>
#include <sstream>
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
    float classA = 15; //$15 for Class A seats
    float classB = 12; //$12 for Class B seats
    float classC = 9; //$9 for Class C seats
    float nA, nB, nC; //number of Class A, B, C seats 
    float totA, totB, totC; //total costs for each seats
    float total; //total amount for all classes
    
    //Input data values 
    cout<<"This program calculates the amount of income generated "
            <<"for each class seats.";
    cout<<"Input the number of seats sold per class: "<<endl;
    cout<<"Class A: ";
    cin>>nA;
    cout<<"Class B: ";
    cin>>nB;
    cout<<"Class C: ";
    cin>>nC;
 
    //Process the inputs
    totA = classA * nA;
    totB = classB * nB;
    totC = classC * nC;
    total = totA + totB + totC;
    
    //Output the results
    cout<<endl;
    cout<<"For each class, the total amount of sales are: "<<endl;
    cout<<"Class A: $"<<fixed<<setprecision(2)<<totA<<endl;
    cout<<"Class B: $"<<fixed<<setprecision(2)<<totB<<endl;
    cout<<"Class C: $"<<fixed<<setprecision(2)<<totC<<endl;
    cout<<"Total  : $"<<fixed<<setprecision(2)<<total;
    cout<<endl;
    //Exit stage right

    return 0;
}


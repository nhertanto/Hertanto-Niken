

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 5:57 PM
 * Purpose: Automobile Costs
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
    float mCosts, aCosts; //monthly costs, annual costs
    float lnPay, insur, gas, oil, tires, maint; //loan payment, insurance
    //oil, tires, maintenance 
    
    //Input data values 
    cout<<"This program calculates the monthly and annual costs for automobiles";
    cout<<"Input your monthly costs for the following: "<<endl;
    cout<<"Loan Payment : ";
    cin>>lnPay;
    cout<<"Insurance    : ";
    cin>>insur;
    cout<<"Gas          : ";
    cin>>gas;
    cout<<"Oil          : ";
    cin>>oil;
    cout<<"Tires        : ";
    cin>>tires;
    cout<<"Maintenance  : ";
    cin>>maint;
 
    //Process the inputs
    mCosts = lnPay + insur + oil + tires + maint;
    aCosts = mCosts * 12;
    
    //Output the results
    cout<<endl;
    cout<<"Your total monthly costs is : $"<<fixed<<setprecision(2)<<mCosts<<endl;
    cout<<"Your total annual  costs is : $"<<fixed<<setprecision(2)<<aCosts<<endl;
    cout<<endl;
    
    //Exit stage right

    return 0;
}




/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 10, 2017, 7:06 PM
 * Purpose: Future Value
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
float futureValue(float, float, float);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float pValue, mRate, nMonth; //present value, monthly interest rate
            //number of months

    //Input data values
    cout << "This program calculates your future value of your account"
            " after a specified amount of time" << endl;
    cout << "Please input the present value, the monthly interest rate,"
            " and the number of months for your account." << endl;
    cout << "Present value             : $";
    cin >> pValue;
    cout << "Monthly Interest Rate (%) : ";
    cin >> mRate;
    cout << "Number of months          : ";
    cin >> nMonth;        

    //Output the results
    cout << "Your future value is      : $" << futureValue(pValue, mRate, nMonth) 
            << endl;

    //Exit stage right

    return 0;
}

float futureValue(float pV, float mR, float nM){
    mR = mR / 100;
    float fV = pow((1 + mR), nM) * pV;
    return fV;
}

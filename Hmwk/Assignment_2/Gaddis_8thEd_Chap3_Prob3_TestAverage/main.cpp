

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 3:56 AM
 * Purpose: Test Average
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
    float test1, test2, test3, test4, test5; //test scores
    float average; //the average of the test scores
    
    //Input data values
    cout<<"Please input 5 test scores:"<<endl;
    cout<<"Test 1: ";
    cin>>test1;
    
    cout<<"Test 2: ";
    cin>>test2;
    
    cout<<"Test 3: ";
    cin>>test3;
 
    cout<<"Test 4: ";
    cin>>test4;
   
    cout<<"Test 5: ";
    cin>>test5;
   
   
    //Process the inputs
    average = (test1 + test2 + test3 + test4 + test5) / 5;
    
    //Output the results
    cout<<"The average of the test scores is : ";
    cout<<fixed<<setprecision(1)<<average<<endl;
    
    //Exit stage right

    return 0;
}


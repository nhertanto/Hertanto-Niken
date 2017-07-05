

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 4:10 PM
 * Purpose: Male and Female Percentages
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
    float male, female; //number of males and females
    float nStudent; //number of students in class
    float fPerc; //percent of females in the class
    float mPerc; //percent of males in the class
    
    //Input data values
    cout<<"How many students are in your class? ";
    cin>>nStudent;
    cout<<"How many female students are in your class? ";
    cin>>female;
    cout<<"How many male students are in your class? ";
    cin>>male;
 
    //Process the inputs
    fPerc = (female / nStudent) * 100;
    mPerc = (male / nStudent) * 100;
    
    //Output the results
    cout<<endl;
    cout<<fixed<<setprecision(0)<<fPerc;
    cout<<"% are females and ";
    cout<<fixed<<setprecision(0)<<mPerc;
    cout<<"% are male students.";
    cout<<endl;
    
    
    //Exit stage right

    return 0;
}


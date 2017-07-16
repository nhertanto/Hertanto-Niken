

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 29, 2017, 5:32 PM
 * Purpose: Area of Rectangles
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib>
#include <ctime>
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
    float length1, width1, length2, width2, area1, area2;

    //Input data values 
    cout<<"This program compares the areas of 2 rectangles using "
            "the length and width you input for each rectangle."<<endl;
    cout<<"Please input the values for each rectangle: "<<endl;
    
    cout<<"Rectangle 1: "<<endl;
    cout<<"Length : ";
    cin>>length1;
    cout<<"Width  : ";
    cin>>width1;
    
    cout<<"Rectangle 2: "<<endl;
    cout<<"Length : ";
    cin>>length2;
    cout<<"Width  : ";
    cin>>width2;
    
    //Calculate the variables
    area1 = length1 * width1;
    area2 = length2 * width2;
    
    //Output
    cout<<"Rectangle 1 has an area of "<<area1<<" and Rectangle 2"
            " has an area of "<<area2<<endl;
    
    if (area1 > area2)
    {
        cout<<"Thus Rectangle 1 has a larger area."<<endl;
    }
    if (area1 == area2)
    {
        cout<<"Both rectangles has the same area."<<endl;
    }
    else
    {
        cout<<"Thus Rectangle 2 has a larger area."<<endl;
    }
    //Exit stage right

    return 0;
}


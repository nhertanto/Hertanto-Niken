

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 28, 2017, 1:38 PM
 * Purpose: Software Sales
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
    float book; //number of books purchased
    float point0 = 0; //0 points
    float point1 = 5; //5 points
    float point2 = 15; //15 points
    float point3 = 30; //30 points
    float point4 = 60; //60 points

    //Input data values 
    cout<<"This program calculates the number of points you earned this month."<<endl;
    cout<<"Please input the number of books purchased: ";
    cin>>book;
    
 if(book > -1) //Ensures that the number inputed is larger than 0
 {
    if(book == 0) 
    {
        cout<<"You earned 0 points this month!"<<endl;
        cout<<endl;
    }
    if(book == 1) 
    {
        cout<<"You earned 5 points this month!"<<endl;
        cout<<endl;
    }
 
    if (book == 2) 
    {
        cout<<"You earned 15 points this month!"<<endl;
        cout<<endl;
    }
     if (book == 3) 
    {
        cout<<"You earned 30 points this month!"<<endl;
        cout<<endl;
    }
     if (book > 3)
    {
        cout<<"You earned 60 points this month!"<<endl;
        cout<<endl;
    }
 }
 else
 {
     cout<<"The number must be 0 or higher."<<endl;
 }
    
    //Exit stage right

    return 0;
}


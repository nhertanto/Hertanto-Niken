

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 29, 2017, 6:24 PM
 * Purpose: Geometry Calculator
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
    int choice;
    float area, radius, length, width, base, height;
    float pi = 3.1415926535897f;

    //Menu
    cout<<"Geometry Calculator"<<endl;
            cout<<endl;
    cout<<"   1. Calculate the Area of a Circle"<<endl;
     cout<<"   2. Calculate the Area of a Rectangle"<<endl;
      cout<<"   3. Calculate the Area of a Triangle"<<endl;
       cout<<"   4. Quit"<<endl;
       
    cout<<"Enter your choice (1-4): ";
            cin>>choice;
            cout<<endl;
    
    if(!(choice<1 && choice>4))
    {
        if (choice == 1)
        {
            cout<<"Area of a circle"<<endl;
            cout<<"Please input the radius of the circle : "<<endl;
                cin>>radius;
            area = pi*radius*radius;
            cout<<"Area = pi*r^2 = "<<fixed<<setprecision(2)<<area<<endl;
            cout<<endl;
            
        }
        else if (choice == 2)
        {
            cout<<"Area of a rectangle"<<endl;
            cout<<"Please input the length and width of the rectangle: "<<endl;
            cout<<"Length : ";
                cin>>length;
            cout<<"Width  : ";
                cin>>width;
            area = length * width;
            cout<<"Area = length * width = "<<fixed<<setprecision(2)<<area<<endl;
            cout<<endl;
        }
        else if (choice == 3)
        {
            cout<<"Area of a triangle"<<endl;
            cout<<"Please input the base and height of the triangle: "<<endl;
            cout<<"Base   : ";
                cin>>base;
            cout<<"Height : ";
                cin>>height;
            area = base * height * .5;
            cout<<"Area = base * height * 0.5 =  "<<fixed<<setprecision(2)<<
                    area<<endl;
            cout<<endl;
        }
        else if (choice == 4)
        {
            cout<<"Thank you for using Geometry Calculator."<<endl;
            cout<<endl;
            return 1;
        }
    else 
        {
            cout<<"ERROR"<<endl;
            cout<<"Please only input a number between 1-4"<<endl;
            cout<<endl;
            return 1;
        }
    
    }
    //Exit stage right

    return 0;
}


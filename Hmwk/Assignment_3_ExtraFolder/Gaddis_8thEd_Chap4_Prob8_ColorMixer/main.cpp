

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 29, 2017, 5:01 PM
 * Purpose: Color Mixer
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string>
#include <sstream>
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
    string color1, color2; 
    std::string red ("red");
    std::string blue ("blue");
    std::string yellow ("yellow");
    
    //Input data values
    cout<<"This program determines what 2 colors mix into."<<endl;

    cout<<"Please enter 2 primary colors : "<<endl;
    cout<<"Color 1 : ";
    cin>>color1;
    cout<<"Color 2 : ";
    cin>>color2;
    cout<<endl;
 
    //Process the inputs
        
    //Ensuring color 1 and color 2 are primary colors
     if (   (color1.compare(red)    == 0 || 
             color1.compare(blue)   == 0 ||
             color1.compare(yellow) == 0 ) &&
             color2.compare(red)    == 0 ||
             color2.compare(blue)   == 0 ||
             color2.compare(yellow) == 0 )
        {
         if (   (color1.compare(red) == 0 ||
                 color2.compare(red) == 0) &&
                (color1.compare(blue) == 0 ||
                 color2.compare(blue) ==0) )
            {
            cout<<"When you mix "<<color1<<" and "<<color2<<
                    ", you get purple.";
            cout<<endl;
            }
         if (   (color1.compare(red) == 0 ||
                 color2.compare(red) == 0) &&
                (color1.compare(yellow) == 0 ||
                 color2.compare(yellow) ==0) )
            {
            cout<<"When you mix "<<color1<<" and "<<color2<<
                    ", you get orange.";
            cout<<endl;
            }
         if (   (color1.compare(yellow) == 0 ||
                 color2.compare(yellow) == 0) &&
                (color1.compare(blue) == 0 ||
                 color2.compare(blue) ==0) )
            {
            cout<<"When you mix "<<color1<<" and "<<color2<<
                    ", you get green.";
            cout<<endl;
            }
            
        }
     else
        {
         cout<<"One or both colors chosen are not primary colors.";
         cout<<endl;
        }
    
    
    //Exit stage right

    return 0;
}




/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June , 2017, 11:21 AM
 * Purpose: Minimum/Maximum
 */

//System Libraries
#include <iostream> //Input/Output Library
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
    int month, day, year;
    int total; //the total of month * day to compare to year
    
    //Input data values
    cout<<"This program determines if the date is a 'Magic Date'"<<endl;

    cout<<"Please enter the month, day, and year : "<<endl;
    cout<<"Month (number) : ";
    cin>>month;
    cout<<"Day            : ";
    cin>>day;
    cout<<"Year (2 digits): ";
    cin>>year;
    cout<<endl;
    
    //Process the inputs
    total = month * day;
        
    //Output the results
     if (total == year)
    {
        cout<<"The date, "<<month<<"/"<<day<<"/"<<year<<" is magic"<<endl;
    }
    else
    {
        cout<<"The date, "<<month<<"/"<<day<<"/"<<year<<" is not magic"<<endl;
    }
    
    //Exit stage right

    return 0;
}


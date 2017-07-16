

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 28, 2017, 1:15 PM
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
    float package = 99; //$99 per package sold
    float nPack; //number of packages sold
    float disc1 = .2; //20% discount (10-19)
    float disc2 = .3; //30% discount (20-49)
    float disc3 = .4; //40% discount (50-99)
    float disc4 = .5; //50% discount (100+)
    float total; //totals regarding each discounts

    //Input data values 
    cout<<"This program calculates the total cost of purchase."<<endl;
    cout<<"Please input the number of units sold: ";
    cin>>nPack;
    
 if(nPack > 1) //Ensures that the number inputed is larger than 0
 {
    if(nPack<10) //less than 10 packages, no discount
    {
        total = nPack * package;
        cout<<"The total cost of purchase is $"<<
                fixed<<setprecision(2)<<total<<" considering no discount."
                <<endl;
        cout<<endl;
    }
 
    if (nPack>9 && nPack<20) //10-19 packages
    {
        total = nPack * package * (1 - disc1);
        cout<<"The total cost of purchase is $"<<
                fixed<<setprecision(2)<<total<<" considering a "
                <<fixed<<setprecision(0)<<disc1*100<<"% discount."<<endl;
        cout<<endl;
    }
     if (nPack>19 && nPack<50) //20-49 packages
    {
        total = nPack * package * (1 - disc2);
        cout<<"The total cost of purchase is $"<<
                fixed<<setprecision(2)<<total<<" considering a "
                <<fixed<<setprecision(0)<<disc2*100<<"% discount."<<endl;
        cout<<endl;
    }
     if (nPack>49 && nPack<100) //50-99 packages
    {
        total = nPack * package * (1 - disc3);
        cout<<"The total cost of purchase is $"<<
                fixed<<setprecision(2)<<total<<" considering a "
                <<fixed<<setprecision(0)<<disc3*100<<"% discount."<<endl;
        cout<<endl;
    }
     if (nPack>99) //100+ packages
    {
        total = nPack * package * (1 - disc4);
        cout<<"The total cost of purchase is $"<<
                fixed<<setprecision(2)<<total<<" considering a "
                <<fixed<<setprecision(0)<<disc4*100<<"% discount."<<endl;
        cout<<endl;
    }
 }
 else
 {
     cout<<"The number must be 1 or higher."<<endl;
 }
    
    //Exit stage right

    return 0;
}


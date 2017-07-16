/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 28, 2016, 12:50 PM
 * Purpose: Change for a Dollar Game
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int dollar = 100; //$1.00 dollar
    int quarter = 25; //25 cents
    int dime = 10;
    int nickel = 5;
    int penny = 1;
    int nQuart, nDime, nNick, nPen; //number inputted of each
    int sum, difference;   
    
    //Input By User
    cout<<"Let's play a game!"<<endl;
    cout<<"If you can make exactly $1.00, then you win!"<<endl;
    cout<<endl;
    cout<<"Input the number of quarters, dimes, nickels, and pennies to make"
            " a dollar."<<endl;
    cout<<"Quarters: ";
    cin>>nQuart;
    cout<<"Dimes   : ";
    cin>>nDime;
    cout<<"Nickels : ";
    cin>>nNick;
    cout<<"Pennies : ";
    cin>>nPen;
    
    //Process/Calculations Here
    sum = (nQuart * quarter) + (nDime * dime) + (nNick * nickel) +
            (nPen * penny);
    
    //Output Located Here
    if (sum == 100)
    {
        cout<<endl;
        cout<<"Congratulations! You have won!"<<endl;
        cout<<endl;
    }
    else
    {
        if(sum > 100)
        {
            difference = sum - 100;
            cout<<endl;
            cout<<"Sorry you lost!"<<endl;
            cout<<"You were off by "<<difference<<" cents to make a dollar.";
            cout<<endl;
        }
        if(sum < 100)
        {
            difference = 100 - sum;
            cout<<endl;
            cout<<"Sorry you lost!"<<endl;
            cout<<"You were off by "<<difference<<" cents to make a dollar.";
            cout<<endl;
        }
    }
        
    

    //Exit
    return 0;
}


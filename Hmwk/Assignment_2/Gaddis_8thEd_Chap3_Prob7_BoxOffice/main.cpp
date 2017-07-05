

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 6:22 PM
 * Purpose: Box Office
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string>
#include <sstream>
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
    string name; //Movie name
    float aTicket; //$10.00 adult ticket (#)
    float cTicket; //$6.00 child ticket (#)
    float aTickAmt, cTickAmt; //total price of each type of ticket
    float grossProf, netProf, amtPaid; 
    //gross box office profit, net box office profit, amount paid to distributor
    
    //Input data values 
    cout<<"Type in the name of the movie: ";
    getline (cin, name);
    cout<<"How many adults tickets were sold? ";
    cin>>aTicket;
    cout<<"How many child tickets were sold? ";
    cin>>cTicket;
 
    //Process the inputs
    aTickAmt = aTicket * 10;
    cTickAmt = cTicket * 6;
    grossProf = aTickAmt + cTickAmt; 
    netProf = grossProf * 0.2;
    amtPaid = grossProf - netProf;
    
    //Output the results
    cout<<endl;
    cout<<"Movie Name                 : '"<<name<<"'"<<endl;
    cout<<"Adult Tickets Sold         : "<<aTicket<<endl;
    cout<<"Child Tickets Sold         : "<<cTicket<<endl;
    cout<<"Gross Box Office Profit    : $";
    cout<<fixed<<setprecision(2)<<grossProf<<endl;
    cout<<"Net Box Office Profit      : $";
    cout<<fixed<<setprecision(2)<<netProf<<endl;
    cout<<"Amount Paid to Distributor : $";
    cout<<fixed<<setprecision(2)<<amtPaid<<endl;
    cout<<endl;
    
    //Exit stage right

    return 0;
}


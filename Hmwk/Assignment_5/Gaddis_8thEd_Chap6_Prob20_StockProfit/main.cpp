

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 11, 2017, 7:26 PM
 * Purpose: Stock Profit
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
float stockProfit(float, float, float, float, float);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float nShares, //Number of Shares
            sPrice, //Sale Price per Share
            sComm, // Sale Commission paid
            pPrice, //Purchase Price per Share
            pComm; //Purchase Commission paid
    
    //Input data values
    cout << "This program calculates the profit/loss from the sale"
            " of stock" << endl;
    cout << "Please input the following:" << endl;
    cout << "Number of Shares          : ";
    cin >> nShares;
    cout << "Sale Price per Share      : $";
    cin >> sPrice;
    cout << "Sale Commission Paid      : $";
    cin >> sComm;
    cout << "Purchase Price per Share  : $";
    cin >> pPrice;
    cout << "Purchase Commission Paid  : $";
    cin >> pComm;
    cout << endl;
    
    //Output
    float sale = stockProfit(nShares, sPrice, sComm, pPrice, pComm);
    //If profit
    if (sale > 0){
        cout << "Your profit from the sale of stock is : $" << sale << endl;
        cout << endl;
    }
    //If loss
    else if (sale < 0){
        cout << "Your loss from the sale of stock is : $" << sale << endl;
        cout << endl;
    }
    //If no profit/loss
    else{
        cout << "Your sale of stock has no profit or loss" << endl;
    }

    //Exit stage right

    return 0;
}

float stockProfit(float ns, float sp, float sc, float pp, float pc) {
    float profit = ((ns * sp) - sc) - ((ns * pp) + pc);
    return profit;
}



/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 10, 2017, 3:08 PM
 * Purpose: Markup
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
float calculateRetail(float, float);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    float cost, markup; //user's input for item's wholesale cost & markup %

    //Input data values
    cout << "This program calculates the item's cost after markup percentage"
            << endl;
    cout << "Please input the cost of the item and it's markup percentage" << endl;
    cout << "Item's cost: ";
    cin>>cost;
    cout << "Markup %   : ";
    cin>>markup;

    //Output the results
    cout << "If an item's wholesale cost is $" << fixed << setprecision(2) <<
            cost << " and its markup percentage is " << markup << "%, " << endl;
    cout << "then the item's retail price is $" << fixed << setprecision(2) <<
            calculateRetail(cost, markup) << endl;

    //Exit stage right

    return 0;
}

float calculateRetail(float cost1, float markup1) {
    float add = cost1 * (markup1 / 100);
    float sum = cost1 + add;
    return sum;

}

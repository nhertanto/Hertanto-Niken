

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 10, 2017, 1:34 PM
 * Purpose: Coin Toss
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
string coinToss (int inp);

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int input; //input - # of times the coin is flipped

    //Input 
    cout << "This program tosses a coin! Have fun!" << endl;
    cout << "How many times would you like to toss the coin? " << endl;
    cin >> input;

    //Output
    coinToss(input);

    //Exit stage right

    return 0;
}

string coinToss (int inp){
    //Set the random number generator
    srand(static_cast<unsigned int> (time(0)));

    //Variables
    unsigned short toss; //coin toss [0,1]
    int heads = 0; //counts # of heads
    int tails = 0; //counts # of tails
    string empty = " "; //Empty space - helps program run successfully

    //Randomly Generate a number to be used 
    for (int i = 1; i <= inp; i++) {
        toss = rand() % 2 + 1; //[1,2] 1 = heads, 2 = tails
        if (toss == 2) {
            cout << "#" << i << " Heads";
            cout << endl;
            heads++;
        } else {
            cout << "#" << i << " Tails";
            cout << endl;
            tails++;
        }
    }
    cout << "You have tossed " << heads << " heads and " << tails <<
            " tails" << endl;
    return empty;
}
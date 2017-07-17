

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 22, 2017, 11:21 AM
 * Purpose: Menu - ASSIGNMENT 5
 *              Selected problems are from Gaddis 8th Edition, Chapter 6
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib>  //Random number generator
#include <ctime>    //Time for random number generator
#include <string>   //String library
#include <sstream>  //String Stream
#include <math.h>   //Math Operator Library
#include <iomanip>  //To use fixed precision
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions
float g = 9.8f; //gravity 

//Function Prototypes
float calculateRetail(float, float); //PROB 1: Calculates the retail price with markup
float fallingDistance(float); //PROB 2: Calculates the distance an item fell
float celsius(float); //PROB 3: Converts Fahrenheit to Celsius
string coinToss(int inp); //PROB 4: Flips a coin
float futureValue(float, float, float); //PROB 5: Finds the future value
void getScore(); //PROB 6: Gathers the 5 test scores as input
void calcAverage(int, int, int, int, int, int); //PROB 6: Calculates average of test scores
int findLowest(int, int, int, int, int); //PROB 6: Finds the lowest test score
float newPopulation(float, float, float); //PROB 7: Calculates the new population
float stockProfit(float, float, float, float, float); //PROB 8: Calculates the stock profit
void isPrime(int); //PROB 9: Finds if the input is a prime number or not

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    char choice;

    //Loop on the menu
    do {

        //Input values
        cout << "--------------ASSIGNMENT 5---------------" << endl;
        cout << "Problems from Gaddis 8th Edition Chapter 6" << endl;
        cout << "Choose from the list" << endl;
        cout << "Type 1 for Problem 1" << endl;
        cout << "Type 2 for Problem 2" << endl;
        cout << "Type 3 for Problem 3" << endl;
        cout << "Type 4 for Problem 4" << endl;
        cout << "Type 5 for Problem 5" << endl;
        cout << "Type 6 for Problem 6" << endl;
        cout << "Type 7 for Problem 7" << endl;
        cout << "Type 8 for Problem 8" << endl;
        cout << "Type 9 for Problem 9" << endl;
        cout << "Type any other character to exit" << endl;
        cin>>choice;

        //Switch to determine the Problem
        switch (choice) {
            case '1':
            {
                cout << "We are in Problem 1" << endl;
                cout << "  Problem 1: Markup" << endl;
                cout << endl;

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
                cout << endl;

                break;
            }
            case '2':
            {
                cout << "We are in Problem 2" << endl;
                cout << "  Problem 5: Falling Distance" << endl;
                cout << endl;

                //Declare Variables
                float flTime = 1.0f; //falling time (seconds)

                //Input data values
                cout << "This program calculates the distance the object falls after a "
                        "period of time" << endl;

                cout << "Time(sec)     Distance(m)" << endl;

                //Output the results
                for (int i = 1; i <= 10; i++) {
                    cout << flTime << setw(22) << fallingDistance(flTime) << endl;
                    flTime++;
                }

                cout << endl;
                break;
            }
            case '3':
            {
                cout << "We are in Problem 3" << endl;
                cout << "  Problem 7: Celsius Temperature Table" << endl;
                cout << endl;

                //Declare Variables
                float fahrenheit = 1.0f; //fahrenheit to celsius conversion

                //Creating the Table
                cout << "-CELSIUS TEMPERATURE TABLE-" << endl;
                cout << "  Fahrenheit     Celsius" << endl;

                for (int i = 1; i <= 20; i++) {
                    cout << fixed << setprecision(1) << setw(8) << fahrenheit <<
                            setw(15) << celsius(fahrenheit) << endl;
                    fahrenheit++;
                }

                cout << endl;
                break;
            }
            case '4':
            {
                cout << "We are in Problem 4" << endl;
                cout << "  Problem 8: Coin Toss" << endl;
                cout << endl;

                //Declare Variables
                int input; //input - # of times the coin is flipped

                //Input 
                cout << "This program tosses a coin! Have fun!" << endl;
                cout << "How many times would you like to toss the coin? " << endl;
                cin >> input;

                //Output
                coinToss(input);

                cout << endl;
                break;
            }
            case '5':
            {
                cout << "We are in Problem 5" << endl;
                cout << "  Problem 10 - Future Value" << endl;
                cout << endl;

                //Declare Variables
                float pValue, mRate, nMonth; //present value, monthly interest rate
                //number of months

                //Input data values
                cout << "This program calculates your future value of your account"
                        " after a specified amount of time" << endl;
                cout << "Please input the present value, the monthly interest rate,"
                        " and the number of months for your account." << endl;
                cout << "Present value             : $";
                cin >> pValue;
                cout << "Monthly Interest Rate (%) : ";
                cin >> mRate;
                cout << "Number of months          : ";
                cin >> nMonth;

                //Output the results
                cout << "Your future value is      : $" << futureValue(pValue, mRate, nMonth)
                        << endl;

                cout << endl;
                break;
            }
            case '6':
            {
                cout << "We are in Problem 6" << endl;
                cout << "  Problem 11 - Lowest Score Drop" << endl;
                cout << endl;

                //The function to gather the data
                getScore();

                cout << endl;
                break;
            }
            case '7':
            {
                cout << "We are in Problem 7" << endl;
                cout << "  Problem 16: Population" << endl;
                cout << endl;

                //Declare Variables
                float pop, bRate, dRate, nYear; //population, birth rate, death rate, 
                //# of years
                bool cont = true; //if true, program continues to run

                //Output the results
                while (cont == true) {
                    //Input data values
                    cout << "This program calculates the future population over a number "
                            "of years" << endl;
                    cout << "Please input the following:" << endl;
                    cout << "That starting size of a population : ";
                    cin >> pop;
                    cout << "The annual birth rate              : ";
                    cin >> bRate;
                    cout << "The annual death rate              : ";
                    cin >> dRate;
                    cout << "The number of years to display     : ";
                    cin >> nYear;
                    cout << endl;
                    if (pop >= 2 && bRate >= 0 && dRate >= 0 && nYear >= 1) {
                        for (int x = 1; x <= nYear; x++) {
                            cout << "For year " << x << ", the new population is " <<
                                    x * newPopulation(pop, bRate, dRate) << endl;
                        }
                        cont = false;
                    } else {
                        cout << "One or more inputs are incorrect. Please make sure that: "
                                << endl;
                        cout << "1. Starting size of population is over 2" << endl;
                        cout << "2. Birth and death rate are over 0" << endl;
                        cout << "3. Number of years is over 1" << endl;
                        cout << endl;
                        cont = true;
                    }
                }

                cout << endl;
                break;
            }
            case '8':
            {
                cout << "We are in Problem 8" << endl;
                cout << "  Problem 20: Stock Profit" << endl;
                cout << endl;

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
                if (sale > 0) {
                    cout << "Your profit from the sale of stock is : $" << sale << endl;
                    cout << endl;
                }//If loss
                else if (sale < 0) {
                    cout << "Your loss from the sale of stock is : $" << sale << endl;
                    cout << endl;
                }//If no profit/loss
                else {
                    cout << "Your sale of stock has no profit or loss" << endl;
                }

                cout << endl;
                break;
            }
            case '9':
            {
                cout << "We are in Problem 9" << endl;
                cout << "  Problem 22: is Prime" << endl;
                cout << endl;

                //Declare Variables
                int input; //input - to choose from menu

                //Input an integer
                cout << "This program determines whether a number is a prime or not" << endl;
                cout << "Please input a number: " << endl;

                cin >> input;

                //Determines and outputs if the input is prime or not
                isPrime(input);

                cout << endl;
                break;
            }
            default:
                cout << "You are exiting the program" << endl;
        }
    } while (choice >= '1' && choice <= '9');

    //Exit stage right!
    return 0;
}

//PROBLEM 1: Markup - Calculates retail price after markup percentage

float calculateRetail(float cost1, float markup1) {
    float add = cost1 * (markup1 / 100);
    float sum = cost1 + add;
    return sum;

}

//PROBLEM 2: Falling Distance - Calculates the distance an item fell

float fallingDistance(float t) {
    float d = pow((0.5 * g * t), 2);
    return d;

}

//PROBLEM 3: Celsius Temperature Table - Converts Fahrenheit to Celsius

float celsius(float f) {
    float c = (f - 32) * 5 / 9;
    return c;
}

//PROBLEM 4: Coin Toss - Flips a coin

string coinToss(int inp) {
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

//PROBLEM 5: Future Value - Finds the future value

float futureValue(float pV, float mR, float nM) {
    mR = mR / 100;
    float fV = pow((1 + mR), nM) * pV;
    return fV;
}

//PROBLEM 6: Lowest Score Drop - Gathers the 5 test scores as input

void getScore() {
    //Variables
    int score1, score2, score3, score4, score5;
    bool cont = true;

    //Output
    while (cont == true) {

        cout << "This program takes 5 test scores and finds the lowest score, "
                "removes it, and then finds the average" << endl;
        cout << "Please input the 5 test scores:  " << endl;
        cout << "Score 1: ";
        cin >> score1;
        cout << "Score 2: ";
        cin >> score2;
        cout << "Score 3: ";
        cin >> score3;
        cout << "Score 4: ";
        cin >> score4;
        cout << "Score 5: ";
        cin >> score5;

        //Ensure that the scores are between 0-100
        if (score1 >= 0 && score1 <= 100 &&
                score2 >= 0 && score2 <= 100 &&
                score3 >= 0 && score3 <= 100 &&
                score4 >= 0 && score4 <= 100 &&
                score5 >= 0 && score5 <= 100) {
            cont = false;

        } else {
            cout << "For one or more test score(s), you did not input a "
                    "number between 0-100" << endl;
            cout << "Please input the 5 scores again" << endl;
            cout << endl;
            cont = true;
        }
    }
    findLowest(score1, score2, score3, score4, score5);
}

//PROBLEM 6: Lowest Score Drop - Calculates average of test scores

void calcAverage(int score1, int score2, int score3, int score4, int score5,
        int lowNum) {
    //Variables
    float sum, sum2; //Helps add and subtract the lowest number of the 5 scores
    float average; //The overall average

    //Calculating the average
    sum = score1 + score2 + score3 + score4 + score5;
    sum2 = sum - lowNum;
    average = (sum2) / 4.0f;

    //Output
    cout << "The average is:  " << average << endl;
}

//PROBLEM 6: Lowest Score Drop - Finds the lowest test score

int findLowest(int score1, int score2, int score3, int score4, int score5) {
    //Variables
    int temp = 100;
    int lowNum; //The lowest number (get rid of)

    //Compares each score with temp to find the lowest number
    for (int i = 1; i <= 4; i++) {
        if (score1 < 100) {
            temp = score1;
        }
        if (score2 < temp) {
            temp = score2;
        }
        if (score3 < temp) {
            temp = score3;
        }
        if (score4 < temp) {
            temp = score4;
        }
        if (score5 < temp) {
            temp = score5;
        }
        if (score1 < temp) {
            temp = score1;
        }
    }
    //Calculates the average
    calcAverage(score1, score2, score3, score4, score5, temp);
}

//PROBLEM 7: Population - Calculates the new 

float newPopulation(float p, float b, float d) {
    float n = p + (b * p) - (d * p);
    return n;
}

//PROBLEM 8: Stock Profit - Calculates the stock 

float stockProfit(float ns, float sp, float sc, float pp, float pc) {
    float profit = ((ns * sp) - sc) - ((ns * pp) + pc);
    return profit;
}

//PROBLEM 9: is Prime - Finds if the input is a prime number or not

void isPrime(int inp) {
    
    if (inp == 1 || inp == 2 || inp == 3) {
        cout << "This number is a prime number" << endl;
    } else if (inp % inp == 0 && inp % 2 == 1 && inp % 5 > 0 && inp % 9 > 0) {
        cout << "This number is a prime number" << endl;
    } else {

        cout << "This number is not a prime number" << endl;
    }
}
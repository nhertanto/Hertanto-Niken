

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 22, 2017, 11:21 AM
 * Purpose: Assignment 4 MENU - 
 *              Input a number between 1-10 to see a particular problem.         
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib>
#include <ctime>
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
    int choice; //user's input
    bool cont = true; //To continue playing the game

    do {
        //Menu Choices
        cout << "-----ASSIGNMENT 4 MENU-----" << endl;
        cout << endl;
        cout << "Gaddis 8th Edition Chapter 5: " << endl;
        cout << "   1. (#1) Sum of Numbers" << endl;
        cout << "   2. (#4) Calories Burned" << endl;
        cout << "   3. (#5) Membership Fees Increase" << endl;
        cout << "   4. (#8) Math Tutor" << endl;
        cout << "   5. (#12) Celsius to Fahrenheit Table" << endl;
        cout << "   6. (#17) Sales Bar Chart" << endl;
        cout << "   7. (#20) Random Number Guessing Game" << endl;
        cout << "   8. (#21) Random Number Guessing Game Enhancement" << endl;
        cout << "   9. (#22) Square Display" << endl;
        cout << "   10. Quit the Program" << endl;
        cout << endl;
        cout << "Please input a number from 1-10 to view the following assignment: ";
        cin>>choice;

        if (choice > 0 && choice <= 10) //Ensures user inputs a # between 1-10
        {
            switch (choice) {
                    //1. (#1) Sum of Numbers
                case 1:
                {
                    cout << endl;
                    cout << "1. (#1) Sum of Numbers" << endl;
                    cout << endl;
                    //Declare Variables and Initialize
                    int input; //user's input
                    int check = 0; //keeps check how many turns until reaches the user's input
                    int check2 = 1; //adds up by 1 to help the sum (1+2+3+4...)
                    int sum = 0; //sum of the numbers (answer)

                    //Input data values 
                    cout << "This program finds the sum from 1 to the number you selected." << endl;
                    cout << "Please only input a number between 2 to 255" << endl;
                    cout << "Your input: ";
                    cin >> input;
                    cout << "0";

                    //Process the inputs
                    while (check < input) {
                        cout << " + ";
                        sum = check2 + sum;
                        cout << check2;
                        check2++;
                        check++;
                    }

                    //Output the sum of all the numbers
                    cout << " = " << sum << endl;
                    cout << endl;
                    cont = true;
                    break;
                }

                    //2. (#4) Calories Burned
                case 2: 
                {
                    cout << endl;
                    cout << "2. (#4) Calories Burned" << endl;
                    cout << endl;
                    //Declare Variables and Initialize
                    int x = 1; //keeps check how many turns until reaches 30 minutes
                    int check5 = 0; //add 5 minutes (5,10,15,20,25,30 min)
                    float calBurned = 3.6f; //calories burned per minute
                    int sum2 = 0; //sum of the numbers (answer)

                    //Process the inputs
                    for (x; x <= 6; x++) {
                        check5 = check5 + 5;
                        sum2 = check5 * calBurned;
                        cout << "After " << check5 << " minutes, "
                                << sum2 << " calories was burned" << endl;
                    }
                    cout << endl;
                    cont = true;
                    break;
                }

                    //3. (#5) Membership Fees Increase
                case 3:
                {
                    cout << endl;
                    cout << "3. (#5) Membership Fees Increase" << endl;
                    cout << endl;
                    //Declare Variables and Initialize
                    float fee = 2500.0f; //$2500.00 membership fee
                    float percInc = 0.04f; //4% increase per year
                    float yearInc = 6.0f; //membership fee increase for 6 years

                    //Creating the Table
                    cout << "--MEMBERSHIP FEE INCREASE TABLE--" << endl;
                    cout << "   Year     Membership Fee ($)" << endl;

                    for (int check = 1; check <= yearInc; check++) {
                        fee = (percInc * fee) + fee;
                        cout << setw(6) << fixed << setprecision(2) << check
                                << setw(18) << fixed << setprecision(2) << fee << endl;
                    }
                    cout << endl;
                    cont = true;
                    break;
                }

                    //4. (#8) Math Tutor
                case 4:
                {
                    cout << endl;
                    cout << "4. (#8) Math Tutor" << endl;
                    cout << endl;
                    //Setting the random number generator
                    srand(static_cast<unsigned int> (time(0)));

                    //Declare Variables
                    float rNumber1, rNumber2; //random number generated 
                    float sum3; //sum of the 2 numbers
                    float input2; // user's input for their answer
                    unsigned short choice; //user's choice for the menu
                    bool cont = true; //user still wants to use the program

                    //Randomly Generate 2 numbers to be used 
                    rNumber1 = rand() % 500 + 1;
                    rNumber2 = rand() % 500 + 1;

                    //Input data values 
                    while (cont == true) {
                        cout << "Menu: " << endl;
                        cout << "Select what kind of problem you would like to see" << endl;
                        cout << "   1. Addition" << endl;
                        cout << "   2. Subtraction" << endl;
                        cout << "   3. Multiplication" << endl;
                        cout << "   4. Division" << endl;
                        cout << "   5. Quit the Program" << endl;
                        cout << "Please input a number between 1 to 5: ";
                        cin>>choice;
                        cout << endl;

                        //Addition
                        if (choice == 1) {
                            cout << "Please find the sum of the these two "
                                    "numbers: " << endl;
                            cout << "  " << rNumber1 << endl;
                            cout << "+ " << rNumber2 << endl;
                            cout << "-------" << endl;

                            cout << "Your answer: ";
                            cin>>input2;

                            //Process the inputs
                            sum3 = rNumber1 + rNumber2;

                            if (input2 == sum3) {
                                cout << "Congratulations! You're right :)" << endl;
                                cout << endl;
                            } else {
                                cout << "Sorry that is incorrect." << endl;
                                cout << "The answer is " << sum3 << endl;
                                cout << endl;

                            }
                            cont = true;
                        }//Subtraction
                        else if (choice == 2) {
                            cout << "Please subtract the two numbers): " << endl;

                            if (rNumber1 > rNumber2) {
                                cout << "  " << rNumber1 << endl;
                                cout << "- " << rNumber2 << endl;
                                cout << "-------" << endl;

                                cout << "Your answer: ";
                                cin>>input2;

                                //Process the inputs
                                sum3 = rNumber1 - rNumber2;
                            } else if (rNumber1 < rNumber2) {
                                cout << "  " << rNumber2 << endl;
                                cout << "- " << rNumber1 << endl;
                                cout << "-------" << endl;

                                cout << "Your answer: ";
                                cin>>input2;

                                //Process the inputs
                                sum3 = rNumber2 - rNumber1;
                            }

                            if (input2 == sum3) {
                                cout << "Congratulations! You're right :)" << endl;
                                cout << endl;
                            } else {
                                cout << "Sorry that is incorrect." << endl;
                                cout << "The answer is " << sum3 << endl;
                                cout << endl;

                            }
                            cont = true;
                        }                            
                        //Multiplication
                        else if (choice == 3) {
                            cout << "Please multiply the two numbers: " << endl;
                            cout << "  " << rNumber1 << endl;
                            cout << "x " << rNumber2 << endl;
                            cout << "-------" << endl;

                            cout << "Your answer: ";
                            cin>>input2;

                            //Process the inputs
                            sum3 = rNumber1 * rNumber2;

                            if (input2 == sum3) {
                                cout << "Congratulations! You're right :)" << endl;
                                cout << endl;
                            } else {
                                cout << "Sorry that is incorrect." << endl;
                                cout << "The answer is " << sum3 << endl;
                                cout << endl;
                            }
                            cont = true;
                        }//Division
                        else if (choice == 4) {
                            cout << "Please divide the two numbers: " << endl;

                            if (rNumber1 > rNumber2) {
                                cout << "  " << rNumber1 << endl;
                                cout << "  ---- = " << endl;
                                cout << "  " << rNumber2 << endl;

                                cout << "Your answer (round to 2 decimal points): ";
                                cin>>input2;
                                //Process the inputs
                                sum3 = rNumber1 / rNumber2;

                            }
                            if (rNumber1 < rNumber2) {
                                cout << "  " << rNumber2 << endl;
                                cout << "-----  = " << endl;
                                cout << "  " << rNumber1 << endl;

                                cout << "Your answer (round to 2 decimal points): ";
                                cin>>input2;
                                //Process the inputs
                                sum3 = rNumber2 / rNumber1;
                            }
                            float rndUp = roundf(sum3 * 100.0) / 100.0;
                            if (input2 == rndUp) {
                                cout << "Congratulations! You're right :)" << endl;
                                cout << endl;
                            } else {
                                cout << "Sorry that is incorrect." << endl;
                                cout << "The answer is " << rndUp << endl;
                                cout << endl;
                            }
                            cont = true;
                        }                            
                        //Cancel Menu
                        else if (choice == 5) {
                            cout << "Thank you for using this program." << endl;
                            cout << "Now closing." << endl;
                            cont = false;
                        }                            
                        //If a person did not input a number 1 to 5
                        else {
                            cout << "You did not input a number between 1 to 5" << endl;
                            cont = true;
                        }
                    }
                    cout << endl;
                    cont = true;
                    break;
                }

                    //5. (#12) Celsius to Fahrenheit Table
                case 5:
                {
                    cout << endl;
                    cout << "5. (#12) Celsius to Fahrenheit Table" << endl;
                    cout << endl;
                    //Declare Variables and Initialize
                    float celsius = 0.0f;
                    float fahrenheit;

                    //Creating the Table
                    cout << "--CELSIUS TO FAHRENHEIT TABLE--" << endl;
                    cout << "   Celsius       Fahrenheit" << endl;

                    for (int check = 0; check <= 20; check++) {
                        fahrenheit = celsius * 9 / 5 + 32;
                        cout << setw(8) << fixed << setprecision(1) << celsius
                                << setw(16) << fixed << setprecision(1) << fahrenheit << endl;
                        celsius++;
                    }
                    cout << endl;
                    cont = true;
                    break;
                }

                    //6. (#17) Sales Bar Chart
                case 6:
                {
                    cout << endl;
                    cout << "(#6) Minimum/Maximum" << endl;
                    cout << endl;
                    //Declare Variables and Initialize
                    int store1, store2, store3, store4, store5; //user's input

                    //Input data values 
                    cout << "This program creates a bar chart depending on the sales "
                            "made for 5 stores." << endl;
                    cout << "Please enter today's sales for each store" << endl;
                    cout << "Enter today's sales for store 1: ";
                    cin >> store1;
                    cout << "Enter today's sales for store 2: ";
                    cin >> store2;
                    cout << "Enter today's sales for store 3: ";
                    cin >> store3;
                    cout << "Enter today's sales for store 4: ";
                    cin >> store4;
                    cout << "Enter today's sales for store 5: ";
                    cin >> store5;

                    //Output the Sales Bar Chart
                    cout << endl;
                    cout << "SALES BAR CHART" << endl;
                    cout << "{Each * = $100)" << endl;
                    //Store 1
                    cout << "Store 1: ";
                    store1 = store1 / 100;
                    for (int check = 1; check <= store1; check++) {
                        cout << "*";
                    }
                    cout << endl;

                    //Store 2
                    cout << "Store 2: ";
                    store2 = store2 / 100;
                    for (int check = 1; check <= store2; check++) {
                        cout << "*";
                    }
                    cout << endl;

                    //Store 3
                    cout << "Store 3: ";
                    store3 = store3 / 100;
                    for (int check = 1; check <= store3; check++) {
                        cout << "*";
                    }
                    cout << endl;

                    //Store 4
                    cout << "Store 4: ";
                    store4 = store4 / 100;
                    for (int check = 1; check <= store4; check++) {
                        cout << "*";
                    }
                    cout << endl;

                    //Store 5
                    cout << "Store 5: ";
                    store5 = store5 / 100;
                    for (int check = 1; check <= store5; check++) {
                        cout << "*";
                    }
                    cout << endl;
                    cont = true;
                    break;
                }

                    //7. (#20) Random Number Guessing Game
                case 7:
                {
                    cout << endl;
                    cout << "7. (#20) Random Number Guessing Game" << endl;
                    cout << endl;
                    //Setting the random number generator
                    srand(static_cast<unsigned int> (time(0)));

                    //Declare Variables
                    unsigned short rNumber3; //random number generated 
                    bool cont1 = true; //determines if game is continued or not
                    int input4; //user's guess

                    //Randomly Generate a number to be used 
                    rNumber3 = rand() % 20 + 1; //[1,20]

                    //Input data values 
                    while (cont1 == true) {
                        int number = rNumber3;
                        cout << "Guess a number between 1 to 20!" << endl;
                        cout << "Your number: ";
                        cin>>input4;
                        cout << endl;

                        //Guess is too high
                        if (input4 > number) {
                            cout << "Your guess is too high! Try again." << endl;
                            cout << endl;
                            cont1 = true;
                        }//Guess is too low
                        else if (input4 < number) {
                            cout << "Your guess is too low! Try again." << endl;
                            cout << endl;
                            cont1 = true;
                        }//Correct answer
                        else {
                            cout << "Congratulations! You win! :)" << endl;
                            cout << endl;
                            cont1 = false;
                        }
                    }
                    cont1 = true;
                    break;
                }

                    //8. (#21) Random Number Guessing Game Enhancement
                case 8:
                {
                    cout << endl;
                    cout << "8. (#21) Random Number Guessing Game Enhancement" << endl;
                    cout << endl;
                    //Setting the random number generator
                    srand(static_cast<unsigned int> (time(0)));
                    //Declare Variables
                    unsigned short rNumber4; //random number generated 
                    bool contin = true; //determines if game is continued or not
                    int input3; //user's guess
                    int nGuess = 1; //number of guesses before the correct answer

                    //Randomly Generate a number to be used 
                    rNumber4 = rand() % 20 + 1; //[1,20]

                    //Input data values 
                    while (contin == true) {
                        int number = rNumber4;
                        cout << "Guess a number between 1 to 20!" << endl;
                        cout << "Your number: ";
                        cin>>input3;
                        cout << endl;

                        //Guess is too high
                        if (input3 > number) {
                            cout << "Your guess is too high! Try again." << endl;
                            cout << endl;
                            contin = true;
                            nGuess++;
                        }//Guess is too low
                        else if (input3 < number) {
                            cout << "Your guess is too low! Try again." << endl;
                            cout << endl;
                            contin = true;
                            nGuess++;
                        }//Correct answer
                        else {
                            cout << "Congratulations! You win! :)" << endl;
                            cout << "You have guessed " << nGuess << " times." << endl;
                            cout << endl;
                            contin = false;
                        }
                    }
                    contin = true;
                    break;
                }

                    //9. (#22) Square Display
                case 9:
                {
                    cout << endl;
                    cout << "9. (#22) Square Display" << endl;
                    cout << endl;
                    //Declare Variables and Initialize
                    int input6; //user's input

                    //Input data values 
                    cout << "This program creates a square." << endl;
                    cout << "Please input the length of the square: ";
                    cin >> input6;

                    //Creating the pattern
                    for (int check3 = 1; check3 <= input6; check3++) {
                        for (int check2 = 1; check2 <= input6; check2++)//creates side
                        {
                            cout << "X";
                        }
                        cout << endl;
                    }
                    cout << endl;
                    cont = true;
                    break;

                    //Exit the Program
                default:
                {
                    cout << endl;
                    cout << "Thank you for using this program" << endl;
                    cout << "This program will now quit" << endl;
                    cout << endl;
                    cont = false;
                    break;
                }
                }

            }
        } else //If user inputs a number not between 1-10
        {
            cout << "You did not input a number between 1-10" << endl;
            cout << "Please input another number." << endl;
            cout << endl;
        }
    } while (cont == true);

    //Exit stage right

    return 0;
}


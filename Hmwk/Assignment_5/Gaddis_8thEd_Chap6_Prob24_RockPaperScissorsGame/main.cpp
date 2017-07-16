

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 11, 2017, 4:34 PM
 * Purpose: Rock, Paper, Scissors Game
 * Mode with additional functions
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //Format Library
#include <math.h> //Math Library
#include <string> //String Library
#include <sstream>
using namespace std; // Libraries using namespace standard

//User Libraries

//Global Constants -> Physics/Math/Conversions

//Function Prototypes
string rockPaperScissorGame(int); //Overall Game
string compareUserVsCpu(int, int); //Compares cpu with user to determine winner
string turnNumToWords(int); //Turns number to "rock", "paper", "scissor" to display

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare Variables
    int input; //input - to choose from menu
    bool cont = true; //Determines if user keeps playing with correct number input

    while (cont == true) {
        //Input - Menu to select rock, paper, or scissors
        cout << "Let's play rock, paper, scissors! Have fun :)" << endl;
        cout << "What do you choose? Please input a number 1-3" << endl;
        cout << "  1. Rock" << endl;
        cout << "  2. Paper" << endl;
        cout << "  3. Scissor" << endl;
        cout << "Your input   : ";
        cin >> input;

        if (input >= 1 && input <= 3) {
            rockPaperScissorGame(input);
            cont = false;
        } else {
            cout << "You did you input a number between 1-3" << endl;
            cout << "Please input again" << endl;
            cout << endl;
            cont = true;
        }
    }

    //Exit stage right

    return 0;
}
//Main function to create a game
string rockPaperScissorGame(int inp) {
    //Set the random number generator
    srand(static_cast<unsigned int> (time(0)));

    //Variables
    unsigned short cpuChoice; //cpu random - rock/paper/scissor

    //Computer's Choice
    cpuChoice = rand() % 3 + 1; //[1,2] 1 = rock, 2 = paper, 3 = scissors

    //Determine who wins
    return compareUserVsCpu(cpuChoice, inp);
}
//Determine the winner
string compareUserVsCpu(int cpuChoice, int inp) {
    //Output
    cout << "CPU choice is: " << turnNumToWords(cpuChoice) << endl;
    cout << endl;

    //Rock vs Paper
    if (cpuChoice == 1 && inp == 2) {

        cout << "You win! Congratulations!" << endl;
    }
    //Paper vs Scissors
    if (cpuChoice == 2 && inp == 3) {

        cout << "You win! Congratulations!" << endl;
    }
    //Scissors vs Rock
    if (cpuChoice == 3 && inp == 1) {

        cout << "You win! Congratulations!" << endl;
    }
    //Paper vs Rock
    if (cpuChoice == 2 && inp == 1) {

        cout << "You lose! Sorry!" << endl;
    }
    //Scissors vs Paper
    if (cpuChoice == 3 && inp == 2) {

        cout << "You lose! Sorry!" << endl;
    }
    //Rock vs Scissors
    if (cpuChoice == 1 && inp == 3) {

        cout << "You lose! Sorry!" << endl;
    }
    //Tie
    if (cpuChoice == 1 && inp == 1 ||
            cpuChoice == 2 && inp == 2 ||
            cpuChoice == 3 && inp == 3) {

        cout << "It's a tie!" << endl;
    }
    return 0;
}
//Turns a number [1,3] into rock, paper, or scissor
string turnNumToWords(int cpuChoice) {
    string rock = "rock";
    string paper = "paper";
    string scissor = "scissor";

    if (cpuChoice == 1) {
        return rock;
    } else if (cpuChoice == 2) {
        return paper;
    } else if (cpuChoice == 3) {
        return scissor;
    }
}
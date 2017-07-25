

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 24, 2017, 3:30 PM
 * Purpose: Assignment 6 - Menu System
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

//Function Prototypes
void menu();
void prob1();
void prob2();
void prob3();
void ary(int, int[], int); //For Problem 3
void prob4();
void prob5();
void prob6();
void prob7();
void prob8();
void prob9();
void prob10();

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {

    //Outputting the menu
    cout << "--------ASSIGNMENT 6--------" << endl;
    cout << "Gaddis 8th Edition" << endl;
    cout << endl; 
    menu();

    //Exit stage right!
    return 0;
}
//Outputting the menu choices

void menu() {
    //Declare Variables
    int choice;

    //Output the menu
    do {
        cout << "Choose from the list" << endl;
        cout << ">Chapter 7: Array" << endl;
        cout << "   Type 1 for Problem 1: Largest/Smallest Array Value" << endl;
        cout << "   Type 2 for Problem 2: Rainfall Statistics" << endl;
        cout << "   Type 3 for Problem 3: Larger Than n" << endl;
        cout << "   Type 4 for Problem 4: Payroll" << endl;
        cout << "   Type 5 for Problem 5: Lottery Application" << endl;
        cout << ">Chapter 8: Search & Sort" << endl;
        cout << "   Type 6 for Problem 6: Charge Account Validation" << endl;
        cout << "   Type 7 for Problem 7: Lottery Winners" << endl;
        cout << "   Type 8 for Problem 8: Lottery Winners Modification" << endl;
        cout << "   Type 9 for Problem 9: Charge Account Validation Modification" << endl;
        cout << "   Type 10 for Problem 10: Rainfall Statistics Modification" << endl;
        cout << "   Type any other number to exit" << endl;
        cin>>choice;
        cout << endl;
        switch (choice) {
            case 1:
            {
                prob1();
                break;
            }
            case 2:
            {
                prob2();
                break;
            }
            case 3:
            {
                prob3();
                break;
            }
            case 4:
            {
                prob4();
                break;
            }
            case 5:
            {
                prob5();
                break;
            }
            case 6:
            {
                prob6();
                break;
            }
            case 7:
            {
                prob7();
                break;
            }
            case 8:
            {
                prob8();
                break;
            }
            case 9:
            {
                prob9();
                break;
            }
            case 10:
            {
                prob10();
                break;
            }
            default: cout << "You are exiting the program" << endl;
        }
    } while (choice >= 1 && choice <= 10);
}
//Problem 1: (#1)Largest/Smallest Array Values

void prob1() {
    cout << "This is problem 1" << endl;
    cout << endl;
    //Declare Variables
    const int VALUES = 9;
    int input[VALUES]; //User's input - 10 values
    int maxNum, minNum; //Maximum and Minimum Number
    int temp = 0; //Temporary number for finding the max
    int temp2 = 1000000; //Temporary number for finding the min

    //Input data values
    cout << "Problem 1: Largest/Smallest Array Values" << endl;
    cout << endl;
    cout << "This program finds the largest and smallest value in an array"
            << endl;
    cout << "Please input 10 values into the array: ";
    cin >> input[0];
    cin >> input[1];
    cin >> input[2];
    cin >> input[3];
    cin >> input[4];
    cin >> input[5];
    cin >> input[6];
    cin >> input[7];
    cin >> input[8];
    cin >> input[9];

    for (int i = 0; i <= VALUES; i++) {
        // Finding the maximum number
        if (input[i] > temp) {
            temp = input[i];
        }
        // Finding the minimum number
        if (input[i] < temp2) {
            temp2 = input[i];
        }
    }
    maxNum = temp;
    minNum = temp2;

    //Output the results
    cout << "Largest Value  = " << maxNum << endl;
    cout << "Smallest Value = " << minNum << endl;
    cout << endl;
}
//Problem 2: (#2)Rainfall Statistics

void prob2() {
    cout << "This is problem 2" << endl;
    cout << endl;

    //Declare Variables
    const int VALUES = 12;
    float rainfall[VALUES]; //User's input - 10 values
    float year; //Total rainfall for the year
    float avgMnth; //Average rainfall
    float maxMnth, minMnth; //Highest and Lowest month with rainfall
    float tempMax = 0.0f, tempMin = 10000000.0f; //Temp to find max and min

    //Input data values
    cout << "Problem 2: Rainfall Statistics" << endl;
    cout << endl;
    cout << "This program calculates the total, average, maximum, and minimum "
            "rainfall for 12 months" << endl;
    cout << "Please input the total rainfall per month (mm): " << endl;
    for (int x = 0; x < VALUES; x++) {
        cout << x + 1 << "/2017 : ";
        cin >> rainfall[x];
    }

    //Find the total rainfall for the year
    for (int j = 0; j < VALUES; j++) {
        year += rainfall[j];
    }

    //Find the average amount of rainfall
    avgMnth = year / VALUES;

    //Find the max/min rainfall
    for (int i = 0; i < VALUES; i++) {
        // Finding the maximum number
        if (rainfall[i] > tempMax) {
            tempMax = rainfall[i];
        }
        // Finding the minimum number
        if (rainfall[i] < tempMin) {
            tempMin = rainfall[i];
        }
    }
    maxMnth = tempMax;
    minMnth = tempMin;

    //Output the results
    cout << "Total Amount of Rainfall    = " << year << " mm" << endl;
    cout << "Average Amount of Rainfall  = " << avgMnth << " mm" << endl;
    cout << "Highest Amount of Rainfall  = " << maxMnth << " mm" << endl;
    cout << "Smallest Amount of Rainfall = " << minMnth << " mm" << endl;

    cout << endl;
}
//Problem 3: (#4)Larger than n

void prob3() {
    cout << "This is problem 3" << endl;
    cout << endl;

    //Declare Variables
    int SIZE; //input - size of array
    int array[1000]; //input - array
    int n; //input - number the array must be larger than

    //Input data values
    cout << "Problem 4: Larger Than n" << endl;
    cout << endl;
    cout << "This program displays all numbers in an array that is larger than "
            "n" << endl;
    cout << "Please input integer values for the following: " << endl;
    cout << "Size of array      : ";
    cin >> SIZE;
    cout << "Value of 'n'       : ";
    cin >> n;
    cout << "Values in the array: " << endl;
    for (int x = 0; x < SIZE; x++) {
        cout << "#" << x + 1 << " ";
        cin >> array[x];
    }

    ary(SIZE, array, n);

    cout << endl;
}
//For problem 3: Determines if the inputted values in the array is larger than n

void ary(int SIZE, int array[], int n) {
    //Determine if any number in array is larger than n
    cout << "In the array, the values larger than " << n <<
            " is/are: ";
    for (int i = 0; i < SIZE; i++) {
        if (array[i] > n) {
            cout << array[i] << " ";
        }

    }

}
//For problem 4: (#9)Payroll

void prob4() {
    cout << "This is problem 4" << endl;
    cout << endl;

    //Declare Variables
    const int SIZE = 7;
    int empID[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277,
        1302850, 7580489}; //Employee Identification Numbers
    int hours[SIZE]; //Numbers of hours worked per employee
    float payRate[SIZE]; //Employee's hourly pay rate
    float wages[SIZE]; //Employee's gross wages

    //Input data values
    cout << "Problem 9: Payroll" << endl;
    cout << endl;
    cout << "This program calculates your employee's wages" << endl;
    cout << "Please input for the following: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "EMPLOYEE ID  : " << empID[i] << endl;
        cout << "Hours worked : ";
        cin >> hours[i];
        cout << "Pay Rate     : $";
        cin >> payRate[i];
        cout << endl;

    }

    //Output the results
    cout << "Employee's Wages: " << endl;
    for (int j = 0; j < SIZE; j++) {
        cout << "EMPLOYEE ID  : " << empID[j] << endl;
        wages[j] = hours[j] * payRate[j];
        cout << "Wages        : $" << wages[j] << endl;
        cout << endl;
    }

    cout << endl;
}
//For problem 5: (#14)Lottery Application

void prob5() {
    cout << "This is problem 5" << endl;
    cout << endl;

    //Setting the random number generator
    srand(static_cast<unsigned int> (time(0)));

    //Declare Variables
    const int SIZE = 5;
    int lottery[SIZE]; //Lottery numbers
    int user[SIZE];
    bool cont = true; //Continue the check

    //Input data values
    cout << "Problem 14: Lottery Application" << endl;
    cout << endl;
    cout << "-----LOTTERY-----" << endl;
    cout << "Please input your lottery numbers one integer at a time: " << endl;
    for (int i = 0; i < SIZE; i++) {
        cin >> user[i];
    }

    //Output the tickets to compare
    cout << endl;
    cout << "Your ticket    : ";
    for (int x = 0; x < SIZE; x++) {
        cout << user[x];
    }
    cout << endl;
    cout << "Lottery Ticket : ";

    //Creating the random lottery ticket
    for (int j = 0; j < SIZE; j++) {
        lottery[j] = rand() % 9; //[0,9] for each number
        cout << lottery[j];
    }
    cout << endl;

    //Comparing the lottery with your ticket
    if (lottery[0] == user[0] && lottery[1] == user[1] &&
            lottery[2] == user[2] && lottery[3] == user[3] &&
            lottery[4] == user[4]) {
        cout << "YOU WIN!!! CONGRATULATIONS!!!!!" << endl;
    } else {
        cout << "Sorry you did not win!" << endl;
        cout << "Maybe next time!" << endl;
    }

    cout << endl;
}
//For problem 6: (#1)Charge Account Validation

void prob6() {
    cout << "This is problem 6" << endl;
    cout << endl;

    //Declare Variables
    int SIZE = 20; //input - size of array
    int check[SIZE] = {5658845, 4520125, 7895122, 8777541, 8454277,
        1302850, 8080152, 4562555, 5552012, 5050552, 7825877,
        1250255, 1005231, 6545231, 3852085, 7576651, 7881200,
        4581002}; //check if input is valid
    int input; //input
    bool notFnd = true; //while not found

    //Input data values
    cout << "Problem 1: Charge Account Validation" << endl;
    cout << endl;
    cout << "This program determines if your input is a valid account" << endl;
    cout << "Please input the account number: ";
    cin >> input;

    while (notFnd) {
        for (int i = 0; i < SIZE; i++) {
            if (check[i] == input) {
                notFnd = false;
                cout << "That account is valid!" << endl;
            }
        }
        if (notFnd == true) {
            cout << "Sorry, that account is not valid" << endl;
        }
        notFnd = false;
    }

    cout << endl;
}
//For problem 7: (#2)Lottery Winners

void prob7() {
    cout << "This is problem 7" << endl;
    cout << endl;

    //Declare Variables
    int SIZE = 10; //input - size of array
    int lottery[SIZE] = {13579, 26791, 26972, 33445, 55555, 62483,
        77777, 79422, 85647, 93121}; //check if a lottery winner
    int input; //input - Lottery winner
    int index = 0; //Keep count through array
    bool found = false; //while not found

    //Input data values
    cout << "Problem 2: Lottery Winners" << endl;
    cout << endl;
    cout << "This program determines if the winning ticket number is the "
            "same as any of the 10 tickets" << endl;
    cout << "Please input the winning ticket number: ";
    cin >> input;

    //Check to see if the input is similar to any number in the array
    while (index < SIZE && !found) {
        //If input = a number in the array
        if (lottery[index] == input) {
            found = true;
            cout << endl;
            cout << "Your ticket is a winner! Congratulations! :) " << endl;
            cout << endl;
        }
        //If until the end of the array, none matched
        if (index == SIZE - 1 && lottery[SIZE - 1] != input) {
            cout << endl;
            cout << "Sorry, none of your tickets are winners" << endl;
        }
        index++;
    }

    cout << endl;
}
//For problem 8: (#3)Lottery Winners Modification

void prob8() {
    cout << "This is problem 8" << endl;
    cout << endl;

    //Declare Variables
    int SIZE = 10; //input - size of array
    int lottery[SIZE] = {13579, 26791, 26972, 33445, 55555, 62483,
        77777, 79422, 85647, 93121}; //check if a lottery winner
    int input; //input - Lottery winner
    int first = 0, //First array
            last = SIZE - 1, //Last array
            middle, //Middle of the array
            position = -1; //Position for the search 
    bool found = false; //Not found

    //Input data values
    cout << "Problem 2: Lottery Winners Modification - Binary Search" << endl;
    cout << endl;
    cout << "This program determines if the winning ticket number is the "
            "same as any of the 10 tickets" << endl;
    cout << "Please input the winning ticket number: ";
    cin >> input;

    //Check to see if the input is similar to any number in the array
    while (first <= last && !found) {
        //Calculates the midpoint
        middle = (first + last) / 2;

        //If the input = one of the lottery numbers
        if (lottery[middle] == input) {
            found = true;
            cout << endl;
            cout << "Congratulations! You are a winner! :)" << endl;
            cout << endl;
        }            //If in the end of the check none are winners
        else if ((middle == 0 || middle == SIZE - 1) &&
                (lottery[0] != input || lottery[SIZE - 1] != input)) {
            cout << endl;
            cout << "Sorry, you did not win" << endl;
            cout << endl;
            found = true;
        }            //checks the top half
        else if (lottery[middle] > input) {
            last = middle - 1;
        }            //checks the bottom half
        else {
            first = middle + 1;
        }
    }

    cout << endl;
}
//For problem 9: (#4)Charge Account Validation Modification

void prob9() {
    cout << "This is problem 9" << endl;
    cout << endl;

    //Declare Variables
    int SIZE = 18; //input - size of array
    int check[SIZE] = {5658845, 4520125, 7895122, 8777541, 8454277,
        1302850, 8080152, 4562555, 5552012, 5050552, 7825877,
        1250255, 1005231, 6545231, 3852085, 7576651, 7881200,
        4581002}; //check if input is valid
    int input; //input
    bool swap; //To determine if a swap occurred
    int temp; //Holds number temporarily
    int first = 0, //First array
            last = SIZE - 1, //Last array
            middle, //Middle of the array
            position = -1; //Position for the search 
    bool found = false; //Not found

    //Input data values
    cout << "Problem 4: Charge Account Validation Modification" << endl;
    cout << endl;
    cout << "This program determines if your input is a valid account" << endl;
    cout << "Please input the account number: ";
    cin >> input;

    //Sort the check array first
    do {
        swap = false;
        for (int i = 0; i < SIZE - 1; i++) {
            if (check[i] > check[i + 1]) {
                temp = check[i];
                check[i] = check[i + 1];
                check[i + 1] = temp;
                swap = true;
            }
        }
    } while (swap);

    //Check to see if the input is similar to any number in the array
    while (first <= last && !found) {
        //Calculates the midpoint
        middle = (first + last) / 2;

        //If the input is a valid number in the check[]
        if (check[middle] == input) {
            cout << endl;
            cout << "That account is valid" << endl;
            cout << endl;
            found = true;
        }            //If in the end of the check none are valid
        else if ((middle == 0 || middle == SIZE - 1) &&
                (check[0] != input || check[SIZE - 1] != input)) {
            cout << endl;
            cout << "Sorry, that account is not valid" << endl;
            cout << endl;
            found = true;
        }            //checks the top half
        else if (check[middle] > input) {
            last = middle - 1;
        }            //checks the bottom half
        else {
            first = middle + 1;
        }
    }

    cout << endl;
}
//For problem 10: (#5)Rainfall Statistics Modification

void prob10() {
    cout << "This is problem 10" << endl;
    cout << endl;

    //Declare Variables
    const int VALUES = 12;
    float rainfall[VALUES]; //User's input - 10 values
    float month[VALUES] = {1,2,3,4,5,6,7,8,9,10,11,12}; //Month array
    float year; //Total rainfall for the year
    float avgMnth; //Average rainfall
    float maxMnth, minMnth; //Highest and Lowest month with rainfall
    float tempMax = 0.0f, tempMin = 10000000.0f; //Temp to find max and min
    bool swap; //If swap is true
    int temp, temp2; //Temporary keeper for rainfall[] and month[]

    //Input data values
    cout << "Problem 5: Rainfall Statistics Modification" << endl;
    cout << endl;
    cout << "This program calculates the total, average, maximum, and minimum "
            "rainfall for 12 months" << endl; 
    cout << "Please input the total rainfall per month (mm): " << endl;
    for (int x = 0; x < VALUES; x++){
        cout << x + 1 << "/2017 : ";
        cin >> rainfall[x];
    }
    
    //Sorting the array - Highest to Lowest Amount of Rainfall
    do{
        swap = false;
        for (int i = 0; i < VALUES-1; i++){
            if(rainfall[i] < rainfall[i+1]){
                temp = rainfall[i];
                rainfall[i] = rainfall[i+1];
                rainfall[i+1] = temp;               
                swap = true;
            }
            if(swap == true){
                temp2 = month[i];
                month[i] = month[i+1];
                month[i+1] = temp2;
            }
        }
    }while(swap);
    
    cout << "From Highest to Lowest Amount of Rainfall" << endl;
    for (int x = 0; x < VALUES; x++){
        cout << month[x] << "/2017: " << rainfall[x] << endl;
    }
    
    //Find the total rainfall for the year
    for (int j = 0; j < VALUES; j++){
        year += rainfall[j];
    }
    
    //Find the average amount of rainfall
    avgMnth = year / VALUES;
    
    //Find the max/min rainfall
    for (int y = 0; y < VALUES; y++){
        // Finding the maximum number
        if(rainfall[y] > tempMax){
            tempMax = rainfall[y];
        }
        // Finding the minimum number
        if(rainfall[y] < tempMin){
            tempMin = rainfall[y];
        }
    }
    maxMnth = tempMax;
    minMnth = tempMin;
    
    //Output the results
    cout << "Total Amount of Rainfall    = " << year    << " mm" << endl;
    cout << "Average Amount of Rainfall  = " << avgMnth << " mm" << endl;
    cout << "Highest Amount of Rainfall  = " << maxMnth << " mm" << endl;
    cout << "Smallest Amount of Rainfall = " << minMnth << " mm" << endl;

    cout << endl;
}
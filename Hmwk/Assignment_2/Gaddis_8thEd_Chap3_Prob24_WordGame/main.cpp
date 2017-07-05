

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 5:03 PM
 * Purpose: Word Game
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
    string name; 
    string age;
    string city; //name of city
    string college; //name of college
    string prof; //name of profession
    string animal; //type of animal
    string pet; //pet's name
    
    //Input data values
    cout<<"Please type in for the following questions:"<<endl;
    cout<<"What is your name: ";
    getline (cin, name);
    cout<<"How old are you: ";
    getline (cin, age);
    cout<<"A name of a city: ";
    getline (cin, city);
    cout<<"A name of a college: ";
    getline (cin, college);
    cout<<"A profession: ";
    getline (cin, prof);
    cout<<"A type of animal: ";
    getline (cin, animal);
    cout<<"A pet's name: ";
    getline (cin, pet);   
 
    //Process the inputs
    
    //Output the results
    cout<<endl;
    cout<<"There once was a person named "<<name<<" who lived in ";
    cout<<city<<". At the age of "<<age<<", "<<name<<" went to college at ";
    cout<<college<<". "<<name<<" graduated and went to work as a ";
    cout<<prof<<". Then, "<<name<<" adopted a(n) "<<animal;
    cout<<" named "<<pet<<". They both lived happily ever after!";
    cout<<endl;
    
    //Exit stage right

    return 0;
}




/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 27, 2017, 10:22 PM
 * Purpose: Math Tutor
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib>
#include <ctime>
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
    //Setting the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int rNumber1, rNumber2; //random number generated 
    int sum; //sum of the 2 numbers
    int input;
    
    //Randomly Generate the Data
    rNumber1 = rand() % 500 + 1;
    rNumber2 = rand() % 500 + 1;
    
    //Input data values 
 
    //Process the inputs
    sum = rNumber1 + rNumber2;
    
    //Output the results
    cout<<"Please find the sum of the these two numbers: "<<endl;
    cout<<"  "<<rNumber1<<endl;
    cout<<"+ "<<rNumber2<<endl;
    cout<<"-----"<<endl;
    
    cout<<"Your answer: ";
    cin>>input;
    
    if (input == sum)
    {
        cout<<"Congratulations! You're right :)"<<endl;
        cout<<endl;           
    }
    else 
    {
        cout<<"Sorry that is incorrect."<<endl;
        cout<<"The answer is "<<sum<<endl;
        cout<<endl;
               
    }
    
    //Exit stage right

    return 0;
}




/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on July 15, 2017, 8:36 PM
 * Purpose: Lowest Score Drop
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
void getScore(); //Gathers the 5 test scores as input
void calcAverage(int,int,int,int,int,int); //Calculates average of test scores
int findLowest(int,int,int,int,int); //Finds the lowest test score

//Execution Begins Here!

/*
 * 
 */
int main(int argc, char** argv) {
    //The function to gather the data
    getScore();

    //Exit stage right

    return 0;
}


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


void calcAverage(int score1, int score2, int score3, int score4, int score5,
        int lowNum){
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


int findLowest(int score1, int score2, int score3, int score4, int score5) {
    //Variables
    int temp = 100;
    int lowNum; //The lowest number (get rid of)
    
    //Compares each score with temp to find the lowest number
    for (int i=1; i<=4; i++){
        if (score1 < 100){
            temp = score1;
        }
        if (score2 < temp){
            temp = score2;
        }
        if (score3 < temp){
            temp = score3;
        }
        if (score4 < temp){
            temp = score4;
        }
        if (score5 < temp){
            temp = score5;
        }
        if (score1 < temp){
            temp = score1;
        }
    }
    //Calculates the average
    calcAverage(score1, score2, score3, score4, score5, temp);
}
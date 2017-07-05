

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 30, 2017, 5:32 PM
 * Purpose: Assignment 3 - Absent on Monday 07/03/17
 *              4 extra homework problems from Gaddis 8th Edition Chapter 4
 *          MENU: Input a # between 1-4 to view the 4 different assignments
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib> //srsand/rand
#include <ctime> //time for random seed
#include <string> //string
#include <sstream> //to allow input the string
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
    int choice;

    //Menu Choices
    cout << "Assignment 3 Homework Menu" << endl;
    cout << endl;
    cout << "Gaddis 8th Edition Chapter 4: " << endl;
    cout << "   1. (#4) Area of Rectangles" << endl;
    cout << "   2. (#13) Book Club Points" << endl;
    cout << "   3. (#17) Personal Best" << endl;
    cout << "   4. (#23) Geometry Calculator" << endl;
            cout << endl;
    cout << "Please input a number from 1-4 to view the following assignment: ";
    cin>>choice;

    if (choice > 0 && choice < 5) {
        //(#4) Area of Rectangles
        if (choice == 1) {
            cout << endl;
            cout << "(#4) Area of Rectangles" << endl;
            cout << endl;

            //Declare Variables
            float length1, width1, length2, width2, area1, area2;

            //Input data values 
            cout << "This program compares the areas of 2 rectangles using "
                    "the length and width you input for each rectangle." << endl;
            cout << "Please input the values for each rectangle: " << endl;

            cout << "Rectangle 1: " << endl;
            cout << "Length : ";
            cin>>length1;
            cout << "Width  : ";
            cin>>width1;

            cout << "Rectangle 2: " << endl;
            cout << "Length : ";
            cin>>length2;
            cout << "Width  : ";
            cin>>width2;

            //Calculate the variables
            area1 = length1 * width1;
            area2 = length2 * width2;

            //Output
            cout << "Rectangle 1 has an area of " << area1 << " and Rectangle 2"
                    " has an area of " << area2 << endl;

            if (area1 > area2) {
                cout << "Thus Rectangle 1 has a larger area." << endl;
            }
            else if (area1 == area2) {
                cout << "Both rectangles has the same area." << endl;
            } 
            else if (area1 < area2){
                cout << "Thus Rectangle 2 has a larger area." << endl;
            }
        }            
        //(#13) Book Club Points
        else if (choice == 2) {
            cout << endl;
            cout << "(#13) Book Club Points" << endl;
            cout << endl;

            //Declare Variables
            float book; //number of books purchased
            float point0 = 0; //0 points
            float point1 = 5; //5 points
            float point2 = 15; //15 points
            float point3 = 30; //30 points
            float point4 = 60; //60 points

            //Input data values 
            cout << "This program calculates the number of points you earned this month." << endl;
            cout << "Please input the number of books purchased: ";
            cin>>book;

            if (book > -1) //Ensures that the number inputed is larger than 0
            {
                if (book == 0) {
                    cout << "You earned 0 points this month!" << endl;
                    cout << endl;
                }
                if (book == 1) {
                    cout << "You earned 5 points this month!" << endl;
                    cout << endl;
                }

                if (book == 2) {
                    cout << "You earned 15 points this month!" << endl;
                    cout << endl;
                }
                if (book == 3) {
                    cout << "You earned 30 points this month!" << endl;
                    cout << endl;
                }
                if (book > 3) {
                    cout << "You earned 60 points this month!" << endl;
                    cout << endl;
                }
            } else {
                cout << "The number must be 0 or higher." << endl;
            }

        }            
        //(#17) Personal Best
        else if (choice == 3) {
            cout << endl;
            cout << "(#17) Personal Best" << endl;
            cout << endl;

            //Declare Variables
            string name; //input name
            string date1, date2, date3; //input the dates
            float height1, height2, height3; //Input each height
            float a = 2.0f; //above 2.0
            float b = 5.0f; //below 5.0

            //Input data values
            cin.ignore();
            cout << "This program determines the 3 best vaults from highest to lowest." << endl;
            cout << "Please enter your name : ";
            getline(cin, name);
            cout<<endl;
            cout << "Please enter the date and the height made for each vault. " << endl;
            cout << "For heights, please enter values only from 2 to 5." << endl;

            cout << "Date (mm/dd/yy) : ";
            getline(cin, date1);
            cout << "Height(in)      : ";
            cin>>height1;
            cin.ignore();

            cout << "Date (mm/dd/yy) : ";
            getline(cin, date2);
            cout << "Height(in)      : ";
            cin>>height2;
            cin.ignore();

            cout << "Date (mm/dd/yy) : ";
            getline(cin, date3);
            cout << "Height(in)      : ";
            cin>>height3;
            cin.ignore();

            //Process the inputs

            //Ensuring all heights are between 2 to 5
            if (a <= height1 && height1 <= b &&
                    a <= height2 && height2 <= b &&
                    a <= height3 && height3 <= b) {
                //Finding Height 1 is 1st 
                if (height1 > height2 && height1 > height3) {
                    //Finding Height 2 is 2nd
                    if (height2 > height3) {
                        cout << endl;
                        cout << "1st : " << height1 << " on " << date1 << endl;
                        cout << "2nd : " << height2 << " on " << date2 << endl;
                        cout << "3rd : " << height3 << " on " << date3 << endl;
                        cout << endl;
                    }                        //Finding height 3 is 2nd 
                    else if (height3 > height2) {
                        cout << endl;
                        cout << "1st : " << height1 << " on " << date1 << endl;
                        cout << "2nd : " << height3 << " on " << date3 << endl;
                        cout << "3rd : " << height2 << " on " << date2 << endl;
                        cout << endl;
                    }
                }

                //Finding height 2 is 1st 
                if (height2 > height1 && height2 > height3) {
                    //Finding height 1 is 2nd 
                    if (height1 > height3) {
                        cout << endl;
                        cout << "1st : " << height2 << " on " << date2 << endl;
                        cout << "2nd : " << height1 << " on " << date1 << endl;
                        cout << "3rd : " << height3 << " on " << date3 << endl;
                        cout << endl;
                    }                        //Finding height 3 is 2nd 
                    else if (height3 > height1) {
                        cout << endl;
                        cout << "1st : " << height2 << " on " << date2 << endl;
                        cout << "2nd : " << height3 << " on " << date3 << endl;
                        cout << "3rd : " << height1 << " on " << date1 << endl;
                        cout << endl;
                    }
                }

                //Finding height 3 is 1st 
                if (height3 > height2 && height3 > height1) {
                    //Finding height 2 is 2nd
                    if (height2 > height1) {
                        cout << endl;
                        cout << "1st : " << height3 << " on " << date3 << endl;
                        cout << "2nd : " << height2 << " on " << date2 << endl;
                        cout << "3rd : " << height1 << " on " << date1 << endl;
                        cout << endl;
                    }                        //Finding height 1 is 2nd 
                    else if (height3 > height2) {
                        cout << endl;
                        cout << "1st : " << height3 << " on " << date3 << endl;
                        cout << "2nd : " << height1 << " on " << date1 << endl;
                        cout << "3rd : " << height2 << " on " << date2 << endl;
                        cout << endl;
                    }
                }
                //Tie between height 1 and height 2, 1st 
                if (height1 == height2 && height1 > height3) {
                    cout << endl;
                    cout << "1st (tie) : " << height1 << " on " << date1 << " and "
                            << height2 << " on " << date2 << endl;
                    cout << "2nd       : " << height3 << " on " << date3;
                    cout << endl;
                }
                //Tie between height 1 and height 2, 2nd 
                if (height1 == height2 && height1 < height3) {
                    cout << endl;
                    cout << "1st       : " << height3 << " on " << date3 << endl;
                    cout << "2nd (tie) : " << height1 << " on " << date1 << " and "
                            << height2 << " on " << date2 << endl;
                    cout << endl;
                }
                //Tie between height 2 and height 3, 1st 
                if (height2 == height3 && height2 > height1) {
                    cout << endl;
                    cout << "1st (tie) : " << height2 << " on " << date2 << " and "
                            << height3 << " on " << date3 << endl;
                    cout << "2nd       : " << height1 << " on " << date1;
                    cout << endl;
                }
                //Tie between height 2 and height 3, 2nd 
                if (height2 == height3 && height2 < height1) {
                    cout << endl;
                    cout << "1st       : " << height1 << " on " << date1 << endl;
                    cout << "2nd (tie) : " << height2 << " on " << date2 << " and "
                            << height3 << " on " << date3 << endl;
                    cout << endl;
                }
                //Tie between height 1 and height 3, 1st 
                if (height1 == height3 && height1 > height2) {
                    cout << endl;
                    cout << "1st (tie) : " << height1 << " on " << date1 << " and "
                            << height3 << " on " << date3 << endl;
                    cout << "2nd       : " << height2 << " on " << date2 << endl;
                    cout << endl;
                }
                //Tie between height 1 and height 3, 2nd 
                if (height1 == height3 && height1 < height2) {
                    cout << endl;
                    cout << "1st       : " << height2 << " on " << date2 << endl;
                    cout << "2nd (tie) : " << height1 << " on " << date1 << " and "
                            << height3 << " on " << date3 << endl;
                    cout << endl;
                }
                if (height1 == height2 &&
                        height1 == height3 &&
                        height2 == height3) {
                    cout << endl;
                    cout << "All heights are the same" << endl;
                    cout << endl;
                }
            } else {
                cout << "One of the times inputed is not above 0.";
                cout << endl;
            }
        }
        //(#23) Geometry Calculator
        else if (choice == 4) {
            cout << endl;
            cout << "(#23) Geometry Calculator" << endl;
            cout << endl;

            //Declare Variables
            int choice;
            float area, radius, length, width, base, height;
            float pi = 3.1415926535897f;

            //Menu
            cout << "Geometry Calculator" << endl;
            cout << endl;
            cout << "   1. Calculate the Area of a Circle" << endl;
            cout << "   2. Calculate the Area of a Rectangle" << endl;
            cout << "   3. Calculate the Area of a Triangle" << endl;
            cout << "   4. Quit" << endl;

            cout << "Enter your choice (1-4): ";
            cin>>choice;
            cout << endl;

            if (!(choice < 1 && choice > 4)) {
                if (choice == 1) {
                    cout << "Area of a circle" << endl;
                    cout << "Please input the radius of the circle : " << endl;
                    cin>>radius;
                    area = pi * radius*radius;
                    cout << "Area = pi*r^2 = " << fixed << setprecision(2) << area << endl;
                    cout << endl;

                } else if (choice == 2) {
                    cout << "Area of a rectangle" << endl;
                    cout << "Please input the length and width of the rectangle: " << endl;
                    cout << "Length : ";
                    cin>>length;
                    cout << "Width  : ";
                    cin>>width;
                    area = length * width;
                    cout << "Area = length * width = " << fixed << setprecision(2) << area << endl;
                    cout << endl;
                } else if (choice == 3) {
                    cout << "Area of a triangle" << endl;
                    cout << "Please input the base and height of the triangle: " << endl;
                    cout << "Base   : ";
                    cin>>base;
                    cout << "Height : ";
                    cin>>height;
                    area = base * height * .5;
                    cout << "Area = base * height * 0.5 =  " << fixed << setprecision(2) <<
                            area << endl;
                    cout << endl;
                } else if (choice == 4) {
                    cout << "Thank you for using Geometry Calculator." << endl;
                    cout << endl;
                    return 1;
                } else {
                    cout << "ERROR" << endl;
                    cout << "Please only input a number between 1-4" << endl;
                    cout << endl;
                    return 1;
                }
            } else {
                cout << "You did not input a number between 1-9" << endl;
            }
        }
    }
    else {
        cout << "You did not input a number between 1-4" << endl;
    }
            //Exit stage right
    
            return 0;
        }


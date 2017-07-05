

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 29, 2017, 5:32 PM
 * Purpose: Assignment 2 homework MENU
 *               Used Gaddis 8thEd Chap4 and Savitch 9thEd Chap3
 *          Input a number between 1-10 to gain access to certain
 *              problems.
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <cstdlib> //Srand/Rand
#include <ctime> //Time for random seed
#include <string> //Strings
#include <sstream> //To allow input of strings
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
    cout << "   1. (#1) Minimum/Maximum" << endl;
    cout << "   2. (#3) Magic Dates" << endl;
    cout << "   3. (#8) Color Mixer" << endl;
    cout << "   4. (#9) Change Dollar Game" << endl;
    cout << "   5. (#11) Math Tutor" << endl;
    cout << "   6. (#12) Software Sales" << endl;
    cout << "   7. (#16) Running the Race" << endl;
    cout << "   8. (#19) Spectral Analysis" << endl;
    cout << "Savitch 9th Edition Chapter 3: " << endl;
    cout << "   9. (#3) Roman Numerals" << endl;
    cout << "   10.(#6) E(x) to X" << endl;
    cout << endl;
    cout << "Please input a number from 1-9 to view the following assignment: ";
    cin>>choice;

    if (choice > 0 && choice < 11) {
            //(#1) Minimum/Maximum"
        if (choice == 1) {
            cout << endl;
            cout << "(#1) Minimum/Maximum" << endl;
            cout << endl;
            //Declare Variables
            int num1, num2;

            //Input data values
            cout << "Which number is larger and which is smaller?" << endl;

            cout << "Please enter 2 numbers: " << endl;
            cout << "Number 1: ";
            cin>>num1;
            cout << "Number 2: ";
            cin>>num2;
            cout << endl;

            //Output the results
            if (num1 > num2) {
                cout << num1 << " is larger than " << num2 << endl;
            } else {
                cout << num2 << " is larger than " << num1 << endl;
            }
        }
            //(#3) Magic Dates
        else if (choice == 2) {
            cout << endl;
            cout << "(#3) Magic Dates" << endl;
            cout << endl;
            //Declare Variables
            int month, day, year;
            int total; //the total of month * day to compare to year

            //Input data values
            cout << "This program determines if the date is a 'Magic Date'" << endl;

            cout << "Please enter the month, day, and year : " << endl;
            cout << "Month (number) : ";
            cin>>month;
            cout << "Day            : ";
            cin>>day;
            cout << "Year (2 digits): ";
            cin>>year;
            cout << endl;

            //Process the inputs
            total = month * day;

            //Output the results
            if (total == year) {
                cout << "The date, " << month << "/" << day << "/" << year << " is magic" << endl;
            } else {
                cout << "The date, " << month << "/" << day << "/" << year << " is not magic" << endl;
            }
        }
            //(#8) Color Mixer"
        else if (choice == 3) {
            cout << endl;
            cout << "(#8) Color Mixer" << endl;
            cout << endl;
            //Declare Variables
            string color1, color2;
            std::string red("red");
            std::string blue("blue");
            std::string yellow("yellow");

            //Input data values
            cout << "This program determines what 2 colors mix into." << endl;

            cout << "Please enter 2 primary colors : " << endl;
            cout << "Color 1 : ";
            cin>>color1;
            cout << "Color 2 : ";
            cin>>color2;
            cout << endl;

            //Ensuring color 1 and color 2 are primary colors
            if ((color1.compare(red) == 0 ||
                    color1.compare(blue) == 0 ||
                    color1.compare(yellow) == 0) &&
                    color2.compare(red) == 0 ||
                    color2.compare(blue) == 0 ||
                    color2.compare(yellow) == 0) {
                if ((color1.compare(red) == 0 ||
                        color2.compare(red) == 0) &&
                        (color1.compare(blue) == 0 ||
                        color2.compare(blue) == 0)) {
                    cout << "When you mix " << color1 << " and " << color2 <<
                            ", you get purple.";
                    cout << endl;
                }
                if ((color1.compare(red) == 0 ||
                        color2.compare(red) == 0) &&
                        (color1.compare(yellow) == 0 ||
                        color2.compare(yellow) == 0)) {
                    cout << "When you mix " << color1 << " and " << color2 <<
                            ", you get orange.";
                    cout << endl;
                }
                if ((color1.compare(yellow) == 0 ||
                        color2.compare(yellow) == 0) &&
                        (color1.compare(blue) == 0 ||
                        color2.compare(blue) == 0)) {
                    cout << "When you mix " << color1 << " and " << color2 <<
                            ", you get green.";
                    cout << endl;
                }

            } else {
                cout << "One or both colors chosen are not primary colors.";
                cout << endl;
            }
        }
            //(#9) Change Dollar Game
        else if (choice == 4) {
            cout << endl;
            cout << "(#9) Change Dollar Game" << endl;
            cout << endl;

            //Declare all Variables Here
            int dollar = 100; //$1.00 dollar
            int quarter = 25; //25 cents
            int dime = 10;
            int nickel = 5;
            int penny = 1;
            int nQuart, nDime, nNick, nPen; //number inputted of each
            int sum, difference;

            //Input By User
            cout << "Let's play a game!" << endl;
            cout << "If you can make exactly $1.00, then you win!" << endl;
            cout << endl;
            cout << "Input the number of quarters, dimes, nickels, and pennies to make"
                    " a dollar." << endl;
            cout << "Quarters: ";
            cin>>nQuart;
            cout << "Dimes   : ";
            cin>>nDime;
            cout << "Nickels : ";
            cin>>nNick;
            cout << "Pennies : ";
            cin>>nPen;

            //Process/Calculations Here
            sum = (nQuart * quarter) + (nDime * dime) + (nNick * nickel) +
                    (nPen * penny);

            //Output Located Here
            if (sum == 100) {
                cout << endl;
                cout << "Congratulations! You have won!" << endl;
                cout << endl;
            } else {
                if (sum > 100) {
                    difference = sum - 100;
                    cout << endl;
                    cout << "Sorry you lost!" << endl;
                    cout << "You were off by " << difference << " cents to make a dollar.";
                    cout << endl;
                }
                if (sum < 100) {
                    difference = 100 - sum;
                    cout << endl;
                    cout << "Sorry you lost!" << endl;
                    cout << "You were off by " << difference << " cents to make a dollar.";
                    cout << endl;
                }
            }
        }
            //(#11) Math Tutor
        else if (choice == 5) {
            cout << endl;
            cout << "(#11) Math Tutor" << endl;
            cout << endl;

            //Setting the random number generator
            srand(static_cast<unsigned int> (time(0)));

            //Declare Variables
            int rNumber1, rNumber2; //random number generated 
            int sum; //sum of the 2 numbers
            int input;

            //Randomly Generate the Data
            rNumber1 = rand() % 500 + 1;
            rNumber2 = rand() % 500 + 1;

            //Process the inputs
            sum = rNumber1 + rNumber2;

            //Output the results
            cout << "Please find the sum of the these two numbers: " << endl;
            cout << "  " << rNumber1 << endl;
            cout << "+ " << rNumber2 << endl;
            cout << "-----" << endl;

            cout << "Your answer: ";
            cin>>input;

            if (input == sum) {
                cout << "Congratulations! You're right :)" << endl;
                cout << endl;
            } else {
                cout << "Sorry that is incorrect." << endl;
                cout << "The answer is " << sum << endl;
                cout << endl;

            }

        }
            //(#12) Software Sales
        else if (choice == 6) {
            cout << endl;
            cout << "(#12) Software Sales" << endl;
            cout << endl;

            //Declare Variables
            float package = 99; //$99 per package sold
            float nPack; //number of packages sold
            float disc1 = .2; //20% discount (10-19)
            float disc2 = .3; //30% discount (20-49)
            float disc3 = .4; //40% discount (50-99)
            float disc4 = .5; //50% discount (100+)
            float total; //totals regarding each discounts

            //Input data values 
            cout << "This program calculates the total cost of purchase." << endl;
            cout << "Please input the number of units sold: ";
            cin>>nPack;

            if (nPack > 1) //Ensures that the number inputed is larger than 0
            {
                if (nPack < 10) //less than 10 packages, no discount
                {
                    total = nPack * package;
                    cout << "The total cost of purchase is $" <<
                            fixed << setprecision(2) << total << " considering no discount."
                            << endl;
                    cout << endl;
                } else if (nPack > 9 && nPack < 20) //10-19 packages
                {
                    total = nPack * package * (1 - disc1);
                    cout << "The total cost of purchase is $" <<
                            fixed << setprecision(2) << total << " considering a "
                            << fixed << setprecision(0) << disc1 * 100 << "% discount." << endl;
                    cout << endl;
                } else if (nPack > 19 && nPack < 50) //20-49 packages
                {
                    total = nPack * package * (1 - disc2);
                    cout << "The total cost of purchase is $" <<
                            fixed << setprecision(2) << total << " considering a "
                            << fixed << setprecision(0) << disc2 * 100 << "% discount." << endl;
                    cout << endl;
                } else if (nPack > 49 && nPack < 100) //50-99 packages
                {
                    total = nPack * package * (1 - disc3);
                    cout << "The total cost of purchase is $" <<
                            fixed << setprecision(2) << total << " considering a "
                            << fixed << setprecision(0) << disc3 * 100 << "% discount." << endl;
                    cout << endl;
                } else if (nPack > 99) //100+ packages
                {
                    total = nPack * package * (1 - disc4);
                    cout << "The total cost of purchase is $" <<
                            fixed << setprecision(2) << total << " considering a "
                            << fixed << setprecision(0) << disc4 * 100 << "% discount." << endl;
                    cout << endl;
                }
            } else {
                cout << "The number must be 1 or higher." << endl;
            }
        }
            //(#16) Running the Race
        else if (choice == 7) {
            cout << endl;
            cout << "(#16) Running the Race" << endl;
            cout << endl;

            //Declare Variables
            string person1, person2, person3; //input each Runner's name
            float time1, time2, time3; //Input each runner's times to finish race

            //Input data values
            cin.ignore();
            cout << "This program determines who finishes 1st, 2nd, and 3rd." << endl;
            cout << "Please enter your name and your time you finished the race: " << endl;

            cout << "Runner 1 : ";
            getline(cin, person1);
            cout << "Time     : ";
            cin>>time1;
            cin.ignore();

            cout << "Runner 2 : ";
            getline(cin, person2);
            cout << "Time     : ";
            cin>>time2;
            cin.ignore();

            cout << "Runner 3 : ";
            getline(cin, person3);
            cout << "Time     : ";
            cin>>time3;

            //Process the inputs

            //Ensuring all times inputed are above 0
            if (time1 > 0 && time2 > 0 && time3 > 0) {
                //Finding Person 1 is 1st Place
                if (time1 > time2 && time1 > time3) {
                    //Finding Person 2 is 2nd Place
                    if (time2 > time3) {
                        cout << endl;
                        cout << "1st Place : " << person1 << endl;
                        cout << "2nd Place : " << person2 << endl;
                        cout << "3rd Place : " << person3 << endl;
                        cout << endl;
                    }
                    //Finding Person 3 is 2nd Place
                    if (time3 > time2) {
                        cout << endl;
                        cout << "1st Place : " << person1 << endl;
                        cout << "2nd Place : " << person3 << endl;
                        cout << "3rd Place : " << person2 << endl;
                        cout << endl;
                    }
                }

                //Finding Person 2 is 1st Place
                if (time2 > time1 && time2 > time3) {
                    //Finding Person 1 is 2nd Place
                    if (time1 > time3) {
                        cout << endl;
                        cout << "1st Place : " << person2 << endl;
                        cout << "2nd Place : " << person1 << endl;
                        cout << "3rd Place : " << person3 << endl;
                        cout << endl;
                    }
                    //Finding Person 3 is 2nd Place
                    if (time3 > time1) {
                        cout << endl;
                        cout << "1st Place : " << person2 << endl;
                        cout << "2nd Place : " << person3 << endl;
                        cout << "3rd Place : " << person1 << endl;
                        cout << endl;
                    }
                }

                //Finding Person 3 is 1st Place
                if (time3 > time2 && time3 > time1) {
                    //Finding Person 2 is 2nd Place
                    if (time2 > time1) {
                        cout << endl;
                        cout << "1st Place : " << person3 << endl;
                        cout << "2nd Place : " << person2 << endl;
                        cout << "3rd Place : " << person1 << endl;
                        cout << endl;
                    }
                    //Finding Person 1 is 2nd Place
                    if (time3 > time2) {
                        cout << endl;
                        cout << "1st Place : " << person3 << endl;
                        cout << "2nd Place : " << person1 << endl;
                        cout << "3rd Place : " << person2 << endl;
                        cout << endl;
                    }
                }
                //Tie between person 1 and person 2, 1st place
                if (time1 == time2 && time1 > time3) {
                    cout << endl;
                    cout << "1st Place (tie) : " << person1 << " and " << person2 << endl;
                    cout << "2nd Place       : " << person3;
                    cout << endl;
                }
                //Tie between person 1 and person 2, 2nd place
                if (time1 == time2 && time1 < time3) {
                    cout << endl;
                    cout << "1st Place       : " << person3 << endl;
                    cout << "2nd Place (tie) : " << person1 << " and " << person2 << endl;
                    cout << endl;
                }
                //Tie between person 2 and person 3, 1st place
                if (time2 == time3 && time1 < time3) {
                    cout << endl;
                    cout << "1st Place (tie) : " << person2 << " and " << person3 << endl;
                    cout << "2nd Place       : " << person1;
                    cout << endl;
                }
                //Tie between person 2 and person 3, 2nd place
                if (time2 == time3 && time1 > time3) {
                    cout << endl;
                    cout << "1st Place       : " << person1 << endl;
                    cout << "2nd Place (tie) : " << person2 << " and " << person3 << endl;
                    cout << endl;
                }
                //Tie between person 1 and person 3, 1st place
                if (time1 == time3 && time1 > time2) {
                    cout << endl;
                    cout << "1st Place (tie) : " << person1 << " and " << person3 << endl;
                    cout << "2nd Place       : " << person2;
                    cout << endl;
                }
                //Tie between person 1 and person 3, 2nd place
                if (time1 == time3 && time1 < time2) {
                    cout << endl;
                    cout << "1st Place       : " << person2 << endl;
                    cout << "2nd Place (tie) : " << person1 << " and " << person3 << endl;
                    cout << endl;
                }
                //3 way tie
                if (time1 == time2 &&
                        time1 == time3 &&
                        time2 == time3 &&
                        time1 == time3) {
                    cout << endl;
                    cout << "You are all tied!" << endl;
                    cout << endl;
                }
            } else {
                cout << "One of the times inputed is not above 0.";
                cout << endl;
            }

        }
            //(#19) Spectral Analysis
        else if (choice == 8) {
            cout << endl;
            cout << "(#1) Minimum/Maximum" << endl;
            cout << endl;

            //Declare Variables
            float wlength; //input - wavelength in meters

            //Input data values 
            cout << "This program determines what type of radiation the ";
            cout << "wavelength of an electromagnetic wave is." << endl;
            cout << "Please input the wavelength in meters and in decimals";
            cout << " (ex. 0.0005): ";
            cin>>wlength;

            //Output the results
            if (wlength >= 0.01) {
                cout << endl;
                cout << wlength << " meters is a radio wave." << endl;
                cout << endl;
            } else if ((wlength < 0.01) && (wlength >= 0.001)) {
                cout << endl;
                cout << wlength << " meters is a microwave." << endl;
                cout << endl;
            } else if ((wlength < 0.001) && (wlength >= 0.0000007)) {
                cout << endl;
                cout << wlength << " meters is infrared." << endl;
                cout << endl;
            } else if ((wlength < 0.0000007) && (wlength >= 0.0000004)) {
                cout << endl;
                cout << wlength << " meters is a visible light." << endl;
                cout << endl;
            } else if ((wlength < 0.0000004) && (wlength >= 0.00000001)) {
                cout << endl;
                cout << wlength << " meters is an ultraviolet." << endl;
                cout << endl;
            } else if ((wlength < 0.00000001) && (wlength >= 0.00000000001)) {
                cout << endl;
                cout << wlength << " meters is an x-ray." << endl;
                cout << endl;
            } else {
                cout << endl;
                cout << wlength << " meters is a gamma ray." << endl;
                cout << endl;
            }
        }
            //(#3) Roman Numerals
        else if (choice == 9) {
            cout << endl;
            cout << "(#3) Roman Numerals" << endl;
            cout << endl;

            //Declare Variables
            unsigned short number;
            char n1000s, n100s, n10s, n1s;

            //Input data values
            cout << "Input a number to covert to Roman Numerals" << endl;
            cout << "Number range from 1000 to 3000." << endl;
            cin>>number;

            //Validation
            if (!(number >= 1000 && number <= 3000)) {
                cout << "Invalid Range, Exiting Program" << endl;
                return 1;
            }

            //Process the inputs
            n1000s = number / 1000;
            number -= (1000 * n1000s);
            n100s = number / 100;
            number -= (100 * n100s);
            n10s = number / 10;
            number -= (10 * n10s);
            n1s = number;
            cout << "The number you typed in was "
                    << n1000s * 1000 + n100s * 100 + n10s * 10 + n1s << endl;

            //Roman Numerals 1000s
            switch (n1000s) {
                case 3:cout << "M";
                case 2:cout << "M";
                case 1:cout << "M";
            }
            //Roman Numerals 100s
            switch (n100s) {
                case 3:cout << "C";
                case 2:cout << "C";
                case 1:cout << "C";
                    break;
                case 4:cout << "CD";
                    break;
                case 5:cout << "D";
                    break;
                case 8:cout << "DCCC";
                    break;
                case 7:cout << "DCC";
                    break;
                case 6:cout << "DC";
                    break;
                case 9:cout << "CM";
                    break;
                default:cout << "";
            }
            //Roman Numerals 10s
            switch (n10s) {
                case 3:cout << "X";
                case 2:cout << "X";
                case 1:cout << "X";
                    break;
                case 4:cout << "XL";
                    break;
                case 5:cout << "L";
                    break;
                case 8:cout << "LXXX";
                    break;
                case 7:cout << "LXX";
                    break;
                case 6:cout << "LX";
                    break;
                case 9:cout << "XC";
                    break;
                default:cout << "";
            }
            //Roman Numerals 100s
            switch (n1s) {
                case 3:cout << "I";
                case 2:cout << "I";
                case 1:cout << "I";
                    break;
                case 4:cout << "IV";
                    break;
                case 5:cout << "V";
                    break;
                case 8:cout << "VIII";
                    break;
                case 7:cout << "VII";
                    break;
                case 6:cout << "VI";
                    break;
                case 9:cout << "IX";
                    break;
                default:cout << "";
            }
        }
            //(#6) E(x) to X
        else if (choice == 10) {
            cout << endl;
            cout << "(#6) Fibonacci" << endl;
            cout << endl;

            //Declare Variables
            float aprxEx, exactEx, x, term;
            char counter;

            //Initialize the Variables
            x = 1;
            exactEx = exp(x);
            aprxEx = 1;
            counter = 0;
            term = 1;

            //Output the terms in the table
            cout << "Exact e^x = " << exactEx << endl;
            cout << "Counter   Approx e^x   Difference" << endl;
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;

            //Calc next term in the series
            counter += 1;
            term *= x / counter;
            aprxEx += term;

            //output the next term
            cout << fixed << setprecision(0);
            cout << setw(4) << static_cast<int> (counter);
            cout << fixed << setprecision(6) << showpoint;
            cout << setw(15) << aprxEx << setw(12) << exactEx - aprxEx << endl;
        }
    } 
    
    else {
        cout << "You did not input a number between 1-10" << endl;
    }

    //Exit stage right

    return 0;
}


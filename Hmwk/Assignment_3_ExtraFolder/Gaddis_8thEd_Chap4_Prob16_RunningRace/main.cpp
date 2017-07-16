

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 29, 2017, 5:46 PM
 * Purpose: Running the Race
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <string>
#include <sstream>
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
    string person1, person2, person3; //input each Runner's name
    float time1, time2, time3; //Input each runner's times to finish race
    
    //Input data values
    cout<<"This program determines who finishes 1st, 2nd, and 3rd."<<endl;
    cout<<"Please enter your name and your time you finished the race: "<<endl;
    
    cout<<"Runner 1 : ";
    getline(cin, person1);
    cout<<"Time     : ";
    cin>>time1;
    cin.ignore();
    
    cout<<"Runner 2 : ";
    getline(cin, person2);
    cout<<"Time     : ";
    cin>>time2;
    cin.ignore();
    
    cout<<"Runner 3 : ";
    getline(cin, person3);
    cout<<"Time     : ";
    cin>>time3;
 
    //Process the inputs
        
    //Ensuring all times inputed are above 0
     if ( time1 > 0 && time2 > 0 && time3 > 0 )
        {
         //Finding Person 1 is 1st Place
         if ( time1 > time2 && time1 > time3 )
            {
             //Finding Person 2 is 2nd Place
             if ( time2 > time3 )
             {
                 cout<<endl;
                 cout<<"1st Place : "<<person1<<endl;
                 cout<<"2nd Place : "<<person2<<endl;
                 cout<<"3rd Place : "<<person3<<endl;
                 cout<<endl;
             }
             //Finding Person 3 is 2nd Place
             if ( time3 > time2 )
             {
                 cout<<endl;
                 cout<<"1st Place : "<<person1<<endl;
                 cout<<"2nd Place : "<<person3<<endl;
                 cout<<"3rd Place : "<<person2<<endl;
                 cout<<endl;
             }
            }
         
          //Finding Person 2 is 1st Place
         if ( time2 > time1 && time2 > time3 )
            {
             //Finding Person 1 is 2nd Place
             if ( time1 > time3 )
             {
                 cout<<endl;
                 cout<<"1st Place : "<<person2<<endl;
                 cout<<"2nd Place : "<<person1<<endl;
                 cout<<"3rd Place : "<<person3<<endl;
                 cout<<endl;
             }
             //Finding Person 3 is 2nd Place
             if ( time3 > time1 )
             {
                 cout<<endl;
                 cout<<"1st Place : "<<person2<<endl;
                 cout<<"2nd Place : "<<person3<<endl;
                 cout<<"3rd Place : "<<person1<<endl;
                 cout<<endl;
             }
            }
         
          //Finding Person 3 is 1st Place
         if ( time3 > time2 && time3 > time1 )
            {
             //Finding Person 2 is 2nd Place
             if ( time2 > time1 )
             {
                 cout<<endl;
                 cout<<"1st Place : "<<person3<<endl;
                 cout<<"2nd Place : "<<person2<<endl;
                 cout<<"3rd Place : "<<person1<<endl;
                 cout<<endl;
             }
             //Finding Person 1 is 2nd Place
             if ( time3 > time2 )
             {
                 cout<<endl;
                 cout<<"1st Place : "<<person3<<endl;
                 cout<<"2nd Place : "<<person1<<endl;
                 cout<<"3rd Place : "<<person2<<endl;
                 cout<<endl;
             }
            }
         //Tie between person 1 and person 2, 1st place
         if( time1 == time2 && time1 > time3)
         {
             cout<<endl;
             cout<<"1st Place (tie) : "<<person1<<" and "<<person2<<endl;
             cout<<"2nd Place       : "<<person3;
             cout<<endl;
         }
         //Tie between person 1 and person 2, 2nd place
         if( time1 == time2 && time1 < time3)
         {
             cout<<endl;
             cout<<"1st Place       : "<<person3<<endl;
             cout<<"2nd Place (tie) : "<<person1<<" and "<<person2<<endl;
             cout<<endl;
         }
         //Tie between person 2 and person 3, 1st place
         if( time2 == time3 && time1 < time3 )
         {
             cout<<endl;
             cout<<"1st Place (tie) : "<<person2<<" and "<<person3<<endl;
             cout<<"2nd Place       : "<<person1;
             cout<<endl;
         }
         //Tie between person 2 and person 3, 2nd place
         if( time2 == time3 && time1 > time3 )
         {
             cout<<endl;
             cout<<"1st Place       : "<<person1<<endl;
             cout<<"2nd Place (tie) : "<<person2<<" and "<<person3<<endl;
             cout<<endl;
         }
          //Tie between person 1 and person 3, 1st place
         if( time1 == time3 && time1 > time2 )
         {
             cout<<endl;
             cout<<"1st Place (tie) : "<<person1<<" and "<<person3<<endl;
             cout<<"2nd Place       : "<<person2;
             cout<<endl;
         }
         //Tie between person 1 and person 3, 2nd place
         if( time1 == time3 && time1 < time2 )
         {
             cout<<endl;
             cout<<"1st Place       : "<<person2<<endl;
             cout<<"2nd Place (tie) : "<<person1<<" and "<<person3<<endl;
             cout<<endl;
         }
         if( time1 == time2 == time3 )
         {
             cout<<endl;
             cout<<"You are all tied!"<<endl;
             cout<<endl;
         }
        }
     else
        {
         cout<<"One of the times inputed is not above 0.";
         cout<<endl;
        }
   
    
    //Exit stage right

    return 0;
}


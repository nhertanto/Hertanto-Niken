

/* 
 * File:   main.cpp
 * Author: Niken Hertanto
 * Created on June 29, 2017, 6:17 PM
 * Purpose: Personal Best
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
    string name; //input name
    string date1, date2, date3; //input the dates
    float height1, height2, height3; //Input each height
    float a = 2.0f; //above 2.0
    float b = 5.0f; //below 5.0
    
    //Input data values
    cout<<"This program determines the 3 best vaults from highest to lowest."<<endl;
    cout<<"Please enter your name : ";
    getline(cin, name);
    cout<<"Please enter the date and the height made for each vault. "<<endl;
    cout<<"For heights, please enter values only from 2 to 5."<<endl;
    
    cout<<"Date (mm/dd/yy) : ";
    getline(cin, date1);
    cout<<"Height(in)      : ";
    cin>>height1;
    cin.ignore();
    
    cout<<"Date (mm/dd/yy) : ";
    getline(cin, date2);
    cout<<"Height(in)      : ";
    cin>>height2;
    cin.ignore();
    
    cout<<"Date (mm/dd/yy) : ";
    getline(cin, date3);
    cout<<"Height(in)      : ";
    cin>>height3;
    cin.ignore(); 
 
    //Process the inputs
        
    //Ensuring all heights are between 2 to 5
     if (    a<=height1 && height1<=b &&
             a<=height2 && height2<=b &&
             a<=height3 && height3<=b    )
        {
         //Finding Height 1 is 1st 
         if ( height1 > height2 && height1 > height3 )
            {
             //Finding Height 2 is 2nd
             if ( height2 > height3 )
             {
                 cout<<endl;
                 cout<<"1st : "<<height1<<" on "<<date1<<endl;
                 cout<<"2nd : "<<height2<<" on "<<date2<<endl;
                 cout<<"3rd : "<<height3<<" on "<<date3<<endl;
                 cout<<endl;
             }
             //Finding height 3 is 2nd 
             else if ( height3 > height2 )
             {
                 cout<<endl;
                 cout<<"1st : "<<height1<<" on "<<date1<<endl;
                 cout<<"2nd : "<<height3<<" on "<<date3<<endl;
                 cout<<"3rd : "<<height2<<" on "<<date2<<endl;
                 cout<<endl;
             }
            }
         
          //Finding height 2 is 1st 
         if ( height2 > height1 && height2 > height3 )
            {
             //Finding height 1 is 2nd 
             if ( height1 > height3 )
             {
                 cout<<endl;
                 cout<<"1st : "<<height2<<" on "<<date2<<endl;
                 cout<<"2nd : "<<height1<<" on "<<date1<<endl;
                 cout<<"3rd : "<<height3<<" on "<<date3<<endl;
                 cout<<endl;
             }
             //Finding height 3 is 2nd 
             else if ( height3 > height1 )
             {
                 cout<<endl;
                 cout<<"1st : "<<height2<<" on "<<date2<<endl;
                 cout<<"2nd : "<<height3<<" on "<<date3<<endl;
                 cout<<"3rd : "<<height1<<" on "<<date1<<endl;
                 cout<<endl;
             }
            }
         
          //Finding height 3 is 1st 
         if ( height3 > height2 && height3 > height1 )
            {
             //Finding height 2 is 2nd
             if ( height2 > height1 )
             {
                 cout<<endl;
                 cout<<"1st : "<<height3<<" on "<<date3<<endl;
                 cout<<"2nd : "<<height2<<" on "<<date2<<endl;
                 cout<<"3rd : "<<height1<<" on "<<date1<<endl;
                 cout<<endl;
             }
             //Finding height 1 is 2nd 
             else if ( height3 > height2 )
             {
                 cout<<endl;
                 cout<<"1st : "<<height3<<" on "<<date3<<endl;
                 cout<<"2nd : "<<height1<<" on "<<date1<<endl;
                 cout<<"3rd : "<<height2<<" on "<<date2<<endl;
                 cout<<endl;
             }
            }
         //Tie between height 1 and height 2, 1st 
         if( height1 == height2 && height1 > height3)
         {
             cout<<endl;
             cout<<"1st (tie) : "<<height1<<" on "<<date1<<" and "
                     <<height2<<" on "<<date2<<endl;
             cout<<"2nd       : "<<height3<<" on "<<date3;
             cout<<endl;
         }
         //Tie between height 1 and height 2, 2nd 
         if( height1 == height2 && height1 < height3)
         {
             cout<<endl;
             cout<<"1st       : "<<height3<<" on "<<date3<<endl;
             cout<<"2nd (tie) : "<<height1<<" on "<<date1<<" and "
                     <<height2<<" on "<<date2<<endl;
             cout<<endl;
         }
         //Tie between height 2 and height 3, 1st 
         if( height2 == height3 && height2 > height1 )
         {
             cout<<endl;
             cout<<"1st (tie) : "<<height2<<" on "<<date2<<" and "
                     <<height3<<" on "<<date3<<endl;
             cout<<"2nd       : "<<height1<<" on "<<date1;
             cout<<endl;
         }
         //Tie between height 2 and height 3, 2nd 
         if( height2 == height3 && height2 < height1 )
         {
             cout<<endl;
             cout<<"1st       : "<<height1<<" on "<<date1<<endl;
             cout<<"2nd (tie) : "<<height2<<" on "<<date2<<" and "
                     <<height3<<" on "<<date3<<endl;
             cout<<endl;
         }
          //Tie between height 1 and height 3, 1st 
         if( height1 == height3 && height1 > height2 )
         {
             cout<<endl;
             cout<<"1st (tie) : "<<height1<<" on "<<date1<<" and "
                     <<height3<<" on "<<date3<<endl;
             cout<<"2nd       : "<<height2<<" on "<<date2<<endl;
             cout<<endl;
         }
         //Tie between height 1 and height 3, 2nd 
         if( height1 == height3 && height1 < height2 )
         {
             cout<<endl;
             cout<<"1st       : "<<height2<<" on "<<date2<<endl;
             cout<<"2nd (tie) : "<<height1<<" on "<<date1<<" and "
                     <<height3<<" on "<<date3<<endl;
             cout<<endl;
         }
          if(     height1 == height2 &&
                  height1 == height3 &&
                  height2 == height3 )
         {
             cout<<endl;
             cout<<"All heights are the same"<<endl;
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


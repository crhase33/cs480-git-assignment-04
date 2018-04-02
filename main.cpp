//christopher seirer 
//e733y525

#include <iomanip>
#include <fstream>
#include <iostream>
#include <string>
#include "DayOfYear.hpp"

using namespace std;        

int main(void){

    

    DayOfYear obj1(12,5);    //utilized all constructors once
    DayOfYear obj2(10, 10);
    DayOfYear obj3;
    DayOfYear obj4(11,26);


 
    //========<< and >> tested here
    cout << obj1 << endl;   //displays the cout function works 
    cout << obj2 << endl;   //also shows the constructors did their job
    cout << obj3 << endl;
    cout << obj4 << endl;
    
    cout << "Enter new date for obj1: "<< endl;
    cin >> obj1;
    cout <<"Enter new date for obj2:  " << endl;
    cin >> obj2;
    cout << "Enter new date for obj3:  " << endl;
    cin >> obj3;
    cout << "Enter new date for obj4:  "<< endl;
    cin >> obj4;
    cout << "New Values are: " << endl;
    cout << obj1 << endl;   
    cout << obj2 << endl;   
    cout << obj3 << endl;
    cout << obj4 << endl;


//===========

    if (obj1 == obj2)       
    {
        cout << "True" << endl;
    }
    else if (obj1 == obj2)       
    {
        cout << "False" << endl;
    }
    if (obj1 < obj2)
    {
        cout << "obj1 is less than obj2"<< endl;
    }
    if (obj2 > obj1)
    {
        cout <<"obj2 is less than obj1" << endl;
    }

    //testing the ++ and -- opperators 
    cout << "Testing -- ++ operators" << endl;    
    cout << "Before obj++" << endl;    
    obj1++;    
    cout <<"After obj++:" << obj1 << endl;
    ++obj1;
    cout << "After ++obj:" << obj1 << endl;

    cout << "Before obj--" << endl;
    obj1--;    
    cout << "After "<< obj1 << endl;
    --obj1;
    cout << obj1 << endl;

    // shows the = and + and + int functions
    cout << obj2 << "+" << obj4 <<"=";  //shows the + 
    obj4 = obj2 + obj4;
    cout << obj4 << endl;
    
    obj2 = obj2 + 5;        //obj + int 
    obj2 = -5 + obj2;    
    cout << obj2 << endl;

    cout << "Testing Subtraction" << endl;
    int subtraction= obj4 - obj2; //obj - int         
    cout << "Subtraction = "<< subtraction << endl;

   //shows [] working
    cout << "Testing a Reference: " << endl;
    cout << obj4[1] << endl << obj4[2] << endl << obj4[3] << endl<< obj4[9] << endl;

    cout << "Enter date" << endl;
    cin >> obj3;
    cout << "Date Entered" << obj3 << endl;


    cout << obj4;
    int differenceTotal = -obj4;    //testing -obj days till end of year function
    cout <<  " difference is " << differenceTotal << endl;

}

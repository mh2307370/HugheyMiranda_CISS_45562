/* 
 * File:   main.cpp
 * Author: Miranda Hughey
 * Created on June 25, 2017, 9:10 AM
 * Purpose:  Homework programming projects #3
 */

//System Libraries
#include <iostream>//Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main() 
{
    int number_of_quarters, number_of_dimes, number_of_nickel, total_coins; 
        
    cout << "Enter the number of quarters:\n";
    cin >> number_of_quarters;
    cout << "Enter the number of dimes:\n";
    cin >> number_of_dimes;
    cout << "Enter the number of nickels:\n";
    cin >> number_of_nickel;
    total_coins = number_of_quarters + number_of_dimes + number_of_nickel;
    cout << "If you have \n";
    cout << number_of_quarters;
    cout << " quarters \n";
    cout << number_of_dimes;
    cout << " dimes \n";
    cout << number_of_nickel;
    cout << " nickels \n";
    cout << "you have ";
    cout << total_coins;
    cout << " cents. \n";    
    //Exit stage right!
    return 0;
}


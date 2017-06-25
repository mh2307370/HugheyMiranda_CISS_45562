/* 
 * File:   main.cpp
 * Author: Miranda Hughey
 * Created on June 24, 2017, 4:23 AM
 * Purpose:  Homework programming projects #1
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std;
int main() 
{
    int number_of_drawers, nail_polish_per_drawer, total_nail_polish;
    cout <<"Hello \n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of draws:\n";
    cin >> number_of_drawers;
    cout << "Enter the number of nail polish in a drawer:\n";
    cin >> nail_polish_per_drawer;
    total_nail_polish = number_of_drawers * nail_polish_per_drawer;
    cout << "If you have ";
    cout << number_of_drawers;
    cout << " drawers \n";
    cout << "and ";
    cout << nail_polish_per_drawer;
    cout << " nail polish in each drawer, then\n";
    cout << "you have ";
    cout << total_nail_polish;
    cout << " nail polish in all the drawers. \n";
    cout << "Good-Bye \n";
    //Exit stage right!
    return 0;
}


/* 
 * File:   main.cpp
 * Author: Miranda Hughey
 * Created on June 24, 2017, 4:23 PM
 * Purpose:  Homework programming projects #1
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std;
int main() 
{
    int width, height,totalLength;
    
    cout << "Enter the width:\n";
    cin >> width;
    cout << "Enter the height:\n";
    cin >> height;
    totalLength = width * height;
    cout << "If the width is ";
    cout << width;
    cout << " and\n";
    cout << "the height is ";
    cout << height;
    cout << " the length is ";
    cout << totalLength;
    //Exit stage right!
    return 0;
}


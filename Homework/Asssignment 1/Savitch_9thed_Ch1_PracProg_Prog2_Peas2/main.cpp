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
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Hello\n";
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
    cout << "If you have ";
    cout << number_of_pods;
    cout << " peas pods \n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then\n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all the pods. \n";
    cout << "Good-Bye\n";
    //Exit stage right!
    return 0;
}


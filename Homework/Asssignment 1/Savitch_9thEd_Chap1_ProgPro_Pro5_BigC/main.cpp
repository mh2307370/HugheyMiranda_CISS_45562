/* 
 * File:   main.cpp
 * Author: Miranda Hughey
 * Created on June 25, 2017, 11:42 AM
 * Purpose:  Big C
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

int main(int argc, char** argv) {
    //Declare variables
    char c;
    
    //Initialize by input from command line
    cout<<"What character would you like to use ";
    cout<<"to make a Big Letter C"<<endl;
    cin>>c;

    //Output the transformed data
    cout<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<"   "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    
    //Exit stage right!
    return 0;
}


//
//  FirstController.cpp
//  FirstProject
//
//  Created by Adams, Kyle on 1/25/17.
//  Copyright © 2017 Adams, Kyle. All rights reserved.
//

#include <iostream>
#include "FirstController.hpp"

using namespace std;

void FirstController :: start()
{
    cout << "words are here" << endl;
    int myAge = 17;
    cout << "I am " << myAge << " years old." << endl;
    cout << "\n";
    
    this->specialOutput();
}

void FirstController :: specialOutput()
{
    cout << "how old are you little boy?" << endl;
    int yourAge;
    cin >> yourAge;
    cout << "only " << yourAge << "? Back when I was your age... (long story about childhood ensues)"<< endl;
    string myName;
    cin.ignore();
    cout << "Type in your name" << endl;
    getline(cin, myName);
    cout << "you typed: " << myName << endl;
    cout << "Type in your name and age for free iPad" << endl;
    cin >> myName >> yourAge;
    cout << "you typed: " << myName << " and " << yourAge << endl;
}

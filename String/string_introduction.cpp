/*
File Name: string_introduction.cpp

Description:
This program introduces the concept of strings in C++. 
A string is a sequence of characters used to store and manipulate text.

In this program we will learn:
1. What is a string
2. How to declare a string
3. How to take string input from the user
4. How to display a string

Author: Rahul Kumar Bhuyan
Purpose: Learning basic string operations in C++
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Hello " << name << endl;

    return 0;
}

/*
File: for_loop.cpp
Topic: Loop (For Loop)
Author: Rahul Kumar Bhuyan
Description: Explanation and example of for loop in C++
*/

// A for loop is an entry-controlled loop.
// It checks the condition before executing the loop body.
// It is generally used when the number of iterations is known.

#include <iostream>
using namespace std;

int main() {

    cout << "Numbers from 1 to 5 using for loop:\n";

    for(int i = 1; i <= 5; i++) {
        cout << i << " ";
    }

    return 0;
}

/*output :-
Numbers from 1 to 5 using for loop:
1 2 3 4 5
*/

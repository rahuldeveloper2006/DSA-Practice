/*
File: do_while_loop.cpp
Topic: Loop (Do-While Loop)
Author: Rahul Kumar Bhuyan
Description: Explanation and example of do-while loop in C++
*/

// A do-while loop is an exit-controlled loop.
// It executes the loop body first and then checks the condition.
// It is guaranteed to run at least one time.

#include <iostream>
using namespace std;

int main() {

    int i = 1;

    cout << "Numbers from 1 to 5 using do-while loop:\n";

    do {
        cout << i << " ";
        i++;
    } while(i <= 5);

    return 0;
}

/*output :-
Numbers from 1 to 5 using do-while loop:
1 2 3 4 5
*/

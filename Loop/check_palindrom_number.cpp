/*
Program: Check Palindrome Number
This program checks whether a given integer is a palindrome or not.
A palindrome number remains the same when its digits are reversed.
Example: 121, 1331

Time Complexity: O(log10 n)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int num, original, reversed = 0, remainder;

    cout << "Enter a number: ";
    cin >> num;

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Check palindrome
    if (original == reversed)
        cout << "Palindrome Number" << endl;
    else
        cout << "Not a Palindrome Number" << endl;

    return 0;
}

/*
Program: Check Leap Year
This program checks whether a given year is a leap year or not.
Leap Year Rules:
1. Year must be divisible by 4
2. If divisible by 100, it must also be divisible by 400

Examples:
2000 -> Leap Year
1900 -> Not Leap Year
2024 -> Leap Year

Time Complexity: O(1)
Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter a year: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout << "Leap Year" << endl;
    else
        cout << "Not a Leap Year" << endl;

    return 0;
}

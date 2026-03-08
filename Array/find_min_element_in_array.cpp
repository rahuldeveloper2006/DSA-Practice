/*
============================================
   Find Minimum Element in an Array (C++)
============================================

Problem:
Write a program to find the minimum value in an array.

Approach:
1. Take the size of the array from the user.
2. Input the array elements.
3. Assume the first element as the minimum.
4. Traverse the array and compare each element.
5. Update the minimum value if a smaller element is found.

its time complexity is :- O(n)
its space complexity is :- O(1)
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
    }

    cout << "Minimum element in the array is: " << min << endl;

    return 0;
}

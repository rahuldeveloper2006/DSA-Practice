/*

Rotate an Array by One Position (C++)

Problem:
Write a program to rotate an array elements by one position 
towards the right.

Example:
Input:  [1, 2, 3, 4, 5]
Output: [5, 1, 2, 3, 4]

Approach:
1. Store the last element of the array.
2. Shift all elements one position to the right.
3. Place the last element at the first index.

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

    int last = arr[n-1];

    for(int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }

    arr[0] = last;

    cout << "Array after rotation:\n";

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

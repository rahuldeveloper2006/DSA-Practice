/*
   Rotate Array by N Positions (C++)

Problem:
Write a program to rotate an array by n positions 
towards the right.

Example:
Input:  arr = {1,2,3,4,5}, n = 2
Output: {4,5,1,2,3}

Approach:
1. Take array size and elements from the user.
2. Take the number of rotations (n).
3. Use modulo (n % size) to handle large rotations.
4. Shift elements accordingly to perform rotation.

its time complexity is : O(n*k) , where k is the number of rotation
its space complexity is : O(1) , no extra space is needed
*/

#include <iostream>
using namespace std;

int main() {

    int size, n;

    cout << "Enter array size: ";
    cin >> size;

    int arr[size];

    cout << "Enter array elements:\n";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter number of rotations: ";
    cin >> n;

    n = n % size;

    for(int i = 0; i < n; i++) {

        int last = arr[size-1];

        for(int j = size-1; j > 0; j--) {
            arr[j] = arr[j-1];
        }

        arr[0] = last;
    }

    cout << "Array after rotation:\n";

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

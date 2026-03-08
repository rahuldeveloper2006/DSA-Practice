/*
============================================
   Search an Element in an Array (C++)
============================================

Problem:
Write a program to search an element in an array.

Approach (Linear Search):
1. Take the size of the array from the user.
2. Input the array elements.
3. Take the element to search.
4. Traverse the array and compare each element.
5. If the element is found, print its index.
6. If not found, print "Element not found".

Time complexity:-
Best case : O(1)
Average case: O(n)
Worst case : O(n)

Space complexity : O(1)
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

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    bool found = false;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}

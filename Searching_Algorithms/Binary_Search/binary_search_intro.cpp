/*
    Binary Search - Introduction

    Binary Search is an efficient searching algorithm used to find
    an element in a sorted array. It works by repeatedly dividing
    the search interval in half.

    Steps of Binary Search:
    1. Find the middle element of the array.
    2. If the middle element is equal to the target, return its index.
    3. If the target is smaller than the middle element, search in the left half.
    4. If the target is greater than the middle element, search in the right half.
    5. Repeat the process until the element is found or the interval becomes empty.

    Requirement:
    The array must be sorted.

    Time Complexity:
    Best Case   : O(1)
    Average Case: O(log n)
    Worst Case  : O(log n)

    Space Complexity:
    O(1)
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 12;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}

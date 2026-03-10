/*
File Name: linear_search.cpp

Description:
Linear Search is a simple searching algorithm used to find a target element
in an array. It checks each element of the array one by one until the
desired element is found or the array ends.

Algorithm Steps:
1. Start from the first element of the array.
2. Compare each element with the target value.
3. If the element matches the target, return its index.
4. If the element is not found after checking all elements,
   return -1 (element not found).

Time Complexity:
Best Case  : O(1)
Average Case: O(n)
Worst Case : O(n)

Space Complexity:
O(1)

*/

#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    int result = linearSearch(arr, n, key);

    if(result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}

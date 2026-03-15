/*
    Problem: Search in Rotated Sorted Array (Using Binary Search)

    Description:
    A rotated sorted array is an array that was originally sorted in
    ascending order but then rotated at some pivot point.

    Example:
    Original array:  [1, 2, 3, 4, 5, 6, 7]
    Rotated array:   [4, 5, 6, 7, 1, 2, 3]

    The task is to find the index of a target element in the rotated
    sorted array using Binary Search.

    Approach:
    In a rotated sorted array, at least one half (left or right)
    of the array is always sorted.

    1. Find the middle element.
    2. Check which half is sorted.
    3. If the target lies in the sorted half, search there.
    4. Otherwise search in the other half.
    5. Repeat until the element is found.

    Time Complexity: O(log n)

    Space Complexity: O(1)
*/

#include <iostream>
using namespace std;

int searchRotated(int arr[], int n, int target)
{
    int start = 0, end = n - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        if(arr[mid] == target)
            return mid;

        // Left half sorted
        if(arr[0] <= arr[mid])
        {
            if(target >= arr[start] && target <= arr[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        // Right half sorted
        else
        {
            if(target >= arr[mid] && target <= arr[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {4,5,6,7,0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 0;

    int result = searchRotated(arr, n, target);

    if(result != -1)
        cout << "Element found at index " << result;
    else
        cout << "Element not found";

    return 0;
}

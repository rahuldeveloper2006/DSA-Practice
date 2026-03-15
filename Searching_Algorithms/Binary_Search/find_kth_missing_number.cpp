/*
    Problem: Find Kth Missing Number in a Sorted Array (Using Binary Search)

    Description:
    Given a sorted array of positive integers and an integer k,
    the task is to find the kth missing positive number.

    The array is sorted but some numbers may be missing in between.

    Example:
    Input: arr = [2,3,4,7,11], k = 5
    Missing numbers: 1,5,6,8,9,10...
    Output: 9

    Approach:
    We use Binary Search to efficiently find the kth missing number.

    For any index i, the number of missing elements before arr[i] is:
        missing = arr[i] - (i + 1)

    Steps:
    1. Calculate how many numbers are missing before the mid index.
    2. If missing < k ? move to the right half.
    3. If missing >= k ? move to the left half.
    4. Continue until we find the position where the kth missing number lies.

    Time Complexity:
    O(log n)

    Space Complexity:
    O(1)
*/

#include <iostream>
using namespace std;

int findKthMissing(int arr[], int n, int k)
{
    int start = 0, end = n - 1, ans = n;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;

        int missing = arr[mid] - (mid + 1);

        if(missing >= k){
            ans=mid;
            end=mid-1;
        }
		else{
            start = mid + 1;
    }
}

    return ans + k;
}

int main()
{
    int arr[] = {2,3,4,7,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;

    cout << "Kth missing number: " << findKthMissing(arr, n, k);

    return 0;
}

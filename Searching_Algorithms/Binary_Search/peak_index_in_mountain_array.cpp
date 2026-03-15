/*
    Problem :- Peak Index In Mountain Array
  ===============================================

A mountain array is an array where elements first strictly increase
and then strictly decrease. The peak element is the maximum element
in the array.

Example:
Input:  [1, 3, 5, 7, 6, 4, 2]
Output: Peak index = 3 (element = 7)

Approach:
We use Binary Search to find the peak element.

Logic:
- If arr[mid] < arr[mid + 1], it means we are in the increasing part,
  so the peak lies on the right side.
- If arr[mid] > arr[mid + 1], it means we are in the decreasing part,
  so the peak lies on the left side including mid.

Time Complexity: O(log n)
Space Complexity: O(1)

Author: Rahul Bhuyan
*/

//Logic 01 :-

#include <iostream>
using namespace std;
int peakIndexInMountainArray1(int arr[],int n) {
    int start = 0;
    int end = n-1;

    while(start < end) {
        int mid = end + (start - end) / 2;

        if(arr[mid] > arr[mid + 1] && arr[mid] > arr[mid-1]) {
            return mid;
        }
        else if(arr[mid]>arr[mid-1]) {
            start = mid+1;
        }
        else{
        	end=mid-1;
		}
    }

   return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 6, 4, 2};
    int n=sizeof(arr)/sizeof(arr[0])-1;

    cout << "Peak index: " << peakIndexInMountainArray1(arr,n);

    return 0;
}




//Logic 02 :-

//#include <iostream>
//using namespace std;
//
//int peakIndexInMountainArray(int arr[],int n) {
//    int start = 0,ans;
//    int end = n-1;
//
//    while(start < end) {
//        int mid = end + (start - end) / 2;
//
//        if(arr[mid] > arr[mid - 1]) {
//            ans=mid;
//            start=mid+1;
//        }
//        else {
//            end = mid-1;
//        }
//    }
//
//    return ans;
//}
//
//int main() {
//    int arr[]= {1, 3, 5, 7, 6, 4, 2};
//    int n=(sizeof(arr)/sizeof(arr[0]))-1;
//
//    cout << "Peak index: " << peakIndexInMountainArray(arr,n);
//
//    return 0;
//}


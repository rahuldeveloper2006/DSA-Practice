#include <iostream>
#include <vector>
using namespace std;

void searchRange(vector<int>& nums, int target) {
    int start = 0;
    int end = nums.size() - 1;
    int mid;
    int first = -1, last = -1;

    // Find first occurrence
    while (start <= end) {
        mid = start + (end - start)/2;

        if (nums[mid] == target) {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    start = 0;
    end = nums.size() - 1;

    // Find last occurrence
    while (start <= end) {
        mid = start + (end - start)/2;

        if (nums[mid] == target) {
            last = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout<<"First Occurance is : "<<first<<" Last Occurance is : "<<last;
}

int main() {

    int n, target;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements into the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nThe array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter Target Element: ";
    cin >> target;

   searchRange(arr,target);
    return 0;
}

/*
============================================
   Find Missing Number in an Array (C++)
============================================

Problem:
Given an array containing n-1 numbers from 1 to n,
find the missing number.

Example:
Array = {1,2,4,5}
Missing number = 3

time complexity is :- O(n)
space complexity is :- O(1)
*/

#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter value of n: ";
    cin >> n;

    int arr[n-1];

    cout << "Enter " << n-1 << " elements:\n";

    for(int i = 0; i < n-1; i++) {
        cin >> arr[i];
    }

    int expected_sum = n*(n+1)/2;
    int actual_sum = 0;

    for(int i = 0; i < n-1; i++) {
        actual_sum += arr[i];
    }

    int missing = expected_sum - actual_sum;

    cout << "Missing number is: " << missing << endl;

    return 0;
}




// ans another method is :-

#include <iostream>
using namespace std;

int main() {

    int n,count=0,missing;

    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements:\n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
//now display the entered array and find max and min element of the array :
    int max=arr[0], min = arr[0],array_count=0;
    for(int i = 0; i < n; i++){
          cout<<arr[i]<<" ";
          if(max < arr[i]){
              max=arr[i];
          }
          if(min > arr[i]){
              min=arr[i];
          }
      array_count=array_count+arr[i];
    }
    //now we find the missing number
    for(int i= min; i<= max ; i++){
        count=count+i
          }
    missing=count-array_count;
    cout<<"the missing number is : "<<missing;
return 0;
}
  
    


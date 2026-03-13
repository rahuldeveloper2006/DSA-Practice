/*
    Bubble Sort in C++

    Bubble Sort repeatedly compares adjacent elements
    and swaps them if they are in the wrong order.

    After each pass, the largest element moves
    to the end of the array.

    Time Complexity:
    Best Case: O(n)        (when array is already sorted)
    Average Case: O(n^2)
    Worst Case: O(n^2)

    Space Complexity:
    O(1)  (In-place sorting)
*/


#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter array size : ";
	cin>>n;
	int arr[n];
	cout<<"Enter elements in array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//now display the array
	cout<<"\nBefore sorted the array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	//now we use the logic of Bubble sort
	 for(int i=n-1;i>=0;i--){
            int bol=-1;
            for(int j=0;j<i;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    bol=1;
                }
            }
            if(bol==-1){
                break;
            }
        }
        cout<<"\nAfter sorted the array is : ";
        for(int i=0;i<n;i++){
        	cout<<arr[i]<<" ";
		}
		return 0;
}

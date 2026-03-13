/*
Now we write a program to perform selection sort

    Selection Sort in C++

    Selection Sort works by repeatedly finding the minimum element
    from the unsorted part of the array and placing it at the beginning.

    Time Complexity:
    Best Case: O(n^2)
    Average Case: O(n^2)
    Worst Case: O(n^2)

    Space Complexity:
    O(1)  (In-place sorting)
*/

#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
	for(int i=0;i<n;i++){
		int min_index=i;
		for(int j=i;j<n;j++){
			if(arr[j]<arr[min_index]){
				min_index=j;
			}
		}
		swap(arr[i],arr[min_index]);
	}
	cout<<"\nAfter sorted the array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter size of the array : ";
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
	selection_sort(arr,n);
	return 0;
	
}

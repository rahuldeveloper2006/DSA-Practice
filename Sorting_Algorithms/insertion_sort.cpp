#include<iostream>
using namespace std;

void insertion_sort(int arr[],int n){
	for(int i=1;i<n;i++){
		int key=arr[i];
		int j=i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
	}
	cout<<"\nAfter perform insertion sort is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}
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
	//Now we make logic to perform insertion sort
	insertion_sort(arr,n);
	return 0;
}
	

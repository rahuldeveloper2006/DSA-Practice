/*
Problem :- Search Insert Position
Given a sorted array of distinct integers and a target value ,return the index if the target is found.
if not , return the index where it would be if it were inserted in order.
We must write an algorithm with O(log n) runtime complexity.
*/

#include<iostream>
using namespace std;
int search_insert(int arr[],int target,int n){
	int start=0,end=n-1,mid,ans=n;
	while(start<=end){
		mid=start+(end-start)/2;
		if(arr[mid]==target){
			return mid;
		}
		else if(arr[mid]<target){
			start=mid+1;
		}
		else{
			ans=mid;
			end=mid-1;
		}
	}
	return ans;
	
}
int main(){
	int n,target;
	cout<<"Enter size of the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements in array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\nArray is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\nEnter target Element : ";
	cin>>target;
	int result=search_insert(arr,target,n);
	cout<<"Target element "<<target<<" insert at index : "<<result;
	return 0;
}

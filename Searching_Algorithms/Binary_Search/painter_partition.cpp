/*
===========================================================
 Painter's Partition Problem
-----------------------------------------------------------
 Topic: Binary Search on Answer
 Category: DSA (Searching / Partition Problem)

 Problem:
Given an array where each element represents the length 
of boards, and a number of painters, partition the boards 
such that:
1. Each painter paints contiguous boards
2. Each board is painted by only one painter
3. Minimize the time to paint all boards

 Assumption:
Each unit board takes 1 unit time

 Approach:
- Use Binary Search on answer space
- Range: max(board) ? sum(board)
- Use greedy check for feasibility

 Time Complexity: O(n log n)
 Space Complexity: O(1)

 ===========================================================
*/



#include<iostream>
using namespace std;
int main(){
	int N,K;
	cout<<"Enter how many number of boards you want to enter  : ";
	cin>>N;
	int arr[N];
	cout<<"Enter Different Lengths of Boards in Array : ";
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	//Now display the array
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	//now we write logic to partition of Painters
	cout<<"\nEnter number of Painters : ";
	cin>>K;
	int start=0,end=0,mid,ans;
	//now we find max Length of Boards 
	for(int i=0;i<N;i++){
		if(start<arr[i]){
			start=arr[i];
		}
		end+=arr[i];
	}
	
	while(start<=end){
		mid=start+(end-start);
		int lengths=0,count=1;
		for(int i=0;i<N;i++){
			lengths+=arr[i];
			if(lengths>mid){
				count++;
				lengths=arr[i];
			}
		}
		if(count<=K){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	cout<<"minimum  time Taken for paint boards : "<<ans;
	
}


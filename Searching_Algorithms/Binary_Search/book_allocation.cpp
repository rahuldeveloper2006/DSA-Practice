/*
===========================================================
 Book Allocation Problem (Allocate Minimum Pages)
-----------------------------------------------------------
 Topic: Binary Search on Answer
 Category: DSA (Searching / Optimization Problem)

 Problem:
Given an array of books where each element represents 
number of pages, and a number of students, allocate 
books such that:
1. Each student gets at least one book
2. Books are allocated in contiguous order
3. Minimize the maximum pages assigned to a student

 Approach:
- Use Binary Search on the answer space
- Range: max(books) ? sum(books)
- Check feasibility using greedy approach

 Time Complexity is : O(nlogn)
 Space Complexity: O(1)

===========================================================
*/



#include<iostream>
using namespace std;
int main(){
	int N,K;
	cout<<"Enter how many number of books you want to enter  : ";
	cin>>N;
	int arr[N];
	cout<<"Enter Different pages of book in Array : ";
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	//Now display the array
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	//now we write logic of Allocation of Book
	cout<<"\nEnter number of students : ";
	cin>>K;
	if(K>N){
		cout<<"\nnumber of student must be <= number of books ";
		return -1;
	}
	int start=0,end=0,mid,ans;
	//now we find max pages of book
	for(int i=0;i<N;i++){
		if(start<arr[i]){
			start=arr[i];
		}
		end=end+arr[i];
	}
	
	while(start<=end){
		mid=start+(end-start);
		int pages=0,count=1;
		for(int i=0;i<N;i++){
			pages+=arr[i];
			if(pages>mid){
				count++;
				pages=arr[i];
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
	cout<<"minimum pages distributon is : "<<ans;
	
}



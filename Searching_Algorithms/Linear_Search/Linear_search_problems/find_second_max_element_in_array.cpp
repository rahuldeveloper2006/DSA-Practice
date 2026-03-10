//now we write a program to find second maximum element in array
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter size of the Array : ";
	cin>>n;
	int  arr[n];
	cout<<"Enter "<<n-1<<"elements in array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	
	}
	//now we display the array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	//now we find 1st largest element in array
	int first=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>first){
			first=arr[i];
		}
	}
	//now we find 2nd largest element in array
	int second=arr[0];
	for(int i=0;i<n;i++){
		if(first!=arr[i]){
			if(second<arr[i]){
				second=arr[i];
			}
		}
	}
	cout<<"\n The 2nd max element in array is : "<<second;
	return 0;
}

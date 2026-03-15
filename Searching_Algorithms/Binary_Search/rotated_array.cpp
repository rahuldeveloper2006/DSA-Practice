#include<iostream>
using namespace std;

int rotated_array(int arr[],int n){
	int start=0,end=n-1,ans=arr[0],mid;
	while(start<=end){
		mid=start+(end-start)/2;
		if(arr[mid]>=arr[0]){
			start=mid+1;
		}
		else{
			ans=arr[mid];
			end=mid-1;
		}
	}
	return ans;
}

int main(){
	int n;
	cout<<"Enter size of the array : ";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements in array with Rotated style : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"\n array is : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n ans : "<<rotated_array(arr,n);
	return 0;
}

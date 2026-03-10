/*Now we write a program to reverse a array .
its time complexity is O(n)
its space complexity is O(1)
it is an optimization method to reverse an array.
*/


#include<iostream>
using namespace std;

// now we define a function to reverse an array
void reverse_array(int arr[],int n){
	int i=0,j=n-1;
	while(i<j){
		//now swap the array
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<"\nAfter reverse the array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cout<<"Enter size of the array : ";
	cin>>n;
	int arr[n];
	cout<<" Enter "<<n<<" Elements in array : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	//now we display the array
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	//now we call the function to reverse the array
	reverse_array(arr,n);
	return 0;
}

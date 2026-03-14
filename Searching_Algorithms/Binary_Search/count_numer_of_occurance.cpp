/*
now we write a program to find a num in array how many times occur.
we solve this problem using binary search
 its time complexity is : O(log n)
 its space complexity is : O(1)
 */
 
 #include<iostream>
 using namespace std;
 
 
int sqrt(int nums[], int target,int n) {
    int start = 0;
    int end = n;
    int mid;
    int first,last;

    // Find first occurrence
    while (start <= end) {
        mid = start + (end - start)/2;

        if (nums[mid] == target) {
            first = mid;
            end = mid - 1;
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    start = 0;
    end = n;

    // Find last occurrence
    while (start <= end) {
        mid = start + (end - start)/2;

        if (nums[mid] == target) {
            last = mid;
            start = mid + 1;
        }
        else if (nums[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return (last-first)+1;
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
	int result=sqrt(arr,target,n);
	cout<<"\nTarget element "<<target<<" occurs : "<<result<<" Times";
	return 0;
}

#include<iostream>
using namespace std;
int main(){
    int arr1[6] = {4,6,8,10,1,2};
    //now write logic to find minimum element in rotated array using binary search
    int start = 0 , end = 5 , mid , ans;
    while(start <= end){
        mid = start + (end - start)/2;
        if(arr1[mid] > arr1[0]){
            start = mid + 1;
        }
        else{
            ans = arr1[mid];
            end = mid - 1;
        }
    }
    cout<<"\nthe minimum element of the given array is : "<<ans;
}

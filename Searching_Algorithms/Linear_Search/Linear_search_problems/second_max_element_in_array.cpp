#include<iostream>
using namespace  std;
int main(){

    int size ,i=0; 
    cout<<"Enter size of the array : ";
    cin>>size;
    if(size < 2){
        cout<<"Array size must be greater than 1";
        return 0 ;
    }
    int arr1[size];
    for(i=0 ; i<size ; i++){
        cout<<"enter element in array : ";
        cin>>arr1[i];
    }
    cout<<"the array is : \n";
    for(i = 0 ; i< size ; i++){
        cout<<arr1[i]<< " ";
    }
    //now we write logic to find 2nd maximum element in array
    int first_max = arr1[0];
    int second_max = 0;
    for(i = 0 ; i<size ; i++){
        if(arr1[i] > first_max){
            first_max = arr1[i];
        }
    }
    for(i = 0 ; i<size ; i++){
        if(arr1[i] > second_max && arr1[i] != first_max){
            second_max = arr1[i];
        }
    }

    cout<<"\nThe first maximum element in the given array is : "<<first_max;

    cout<<"\nThe second maximum element in the given array is : "<<second_max;

}



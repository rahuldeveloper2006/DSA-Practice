#include<iostream>
using namespace std;
int main(){
    int size , i = 0;
    cout<<"Enter size of the array : ";
    cin>> size;
    int arr1[size];
    for(i = 0 ; i<size ; i++){
        cout<<"Enter elements in array with ascending order : ";
        cin>>arr1[i];
    }

    //now display the array
    for(int i = 0 ; i<size ; i++){
        cout<<arr1[i]<<" ";
    }

    //now i write logic to find kth missing integer
    int k;
    int count = 0 , increment = arr1[0] , index = 0;
    cout<<"Enter kth number : ";
    cin>>k;
    while(count < k){
        if(arr1[index] == increment){
            index++;
        }
        else{
            count++;
            if(count == k){
                cout<<k <<" missing number of the given array is : "<<increment;
                break;
            }

        }
        increment++;
    }

    return 0;

}
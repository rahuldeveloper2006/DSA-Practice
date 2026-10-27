
/*
Segregate0and1.cpp
Question: Rearrange an array containing only 0s and 1s so that all 0s appear before all 1s.

Input: arr = {1, 0, 1, 0, 1, 0}

Expected Output:
[0, 0, 0, 1, 1, 1]

*/

#include<iostream>
using namespace std;
int main(){
    int i = 0 ;
    int size;
    cout<<"enter size of the array : ";
    cin>>size;
    int arr1[size];
    for(i = 0 ; i<size ; i++){
        cout<<"Enter elements in the array [ 0 , 1] only : ";
        cin >> arr1[i];
    }
    cout<<"\n the array is : \n";
    for(i = 0 ; i<size ; i++){
        cout<<arr1[i] << " ";
    }

    //now we write logic
    i=0;
    int j = i+1;
    while(j< size){
        if(arr1[i] == 1 && arr1[j] == 0){
            arr1[i] = 0;
            arr1[j] = 1;
            i+=1;
            j+=1;
        }
        else if (arr1[i] == 1 && arr1[j] == 1){
            j+=1;
        }
        else{
            i++;
            j++;
        }
        
    }
    cout<<"\n its output is : ";
    for(i = 0 ; i<size ; i++){
        cout<<arr1[i]<<" ";
    }

    return 0;

}
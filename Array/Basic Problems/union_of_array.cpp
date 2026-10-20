#include<iostream>
using namespace  std;

void arrayIntersection(int a[] , int b[] ,int size_a ,int size_b){
    //Print distinct elements from array a
    for(int i = 0;i<size_a ; i++){
        bool find = false;
        for(int j = 0 ; j<i ; j++){
            if(a[j] == a[i]){
                find = true;
                break;
            }

        }
        if (find == false){
            cout<<a[i]<<" ";
        }
    }

    //print elements of array b not already on array a
    for(int i = 0 ; i < size_b ; i++){
        bool found = false;
        for(int j = 0 ; j<size_a ; j++){
            if(b[i] == a[j]){
                found = true;
                break;
            }
        }

        //Also avoid duplicates within array b
        for(int k = 0 ; k < i ; k++){
            if(b[i] == b[k]){
                found = true;
                break;
            }
        }
        if(found == false){
            cout<<b[i]<<" ";
        }
    }
}


int main(){

    int arr1[6] = {1,2,3,3,4,5};
    int arr2[7] = {4,5,6,7,8,8,9};

    int size_a = sizeof(arr1)/sizeof(arr1[0]);
    int size_b = sizeof(arr2)/sizeof(arr2[0]);

    arrayIntersection(arr1 , arr2 , size_a , size_b);

    return  0 ;  

}
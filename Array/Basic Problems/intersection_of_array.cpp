#include <iostream>
using namespace std;
int main(){
    cout<<"hello rahul"<<endl;
    int arr1[5] = {1,2,3,4,5};
    int arr2[6] = {3,4,5,6,7,1};

    //now i write logic of intersection of two arrays
   int size_arr1 = sizeof(arr1)/sizeof(arr1[0]);
   int size_arr2 = sizeof(arr2)/sizeof(arr2[0]);
   
   //avoid printing duplicate values from arr1
   for(int i = 0 ; i<size_arr1 ; i++){
    bool found = false;
    for(int j = 0 ; j<i; j++){
        if(arr1[i] == arr1[j]){
            found = true;
            break;
        }
    }
    if(found){
        continue;
    }
    //search for arr1[i] in arr2
    for(int k = 0; k<size_arr2 ; k++){
        if(arr1[i] == arr2[k]){
            cout<<arr1[i]<<" ";
        }
    }
   }

   return 0;
}
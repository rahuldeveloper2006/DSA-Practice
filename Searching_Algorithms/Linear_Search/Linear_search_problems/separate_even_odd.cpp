/*
6. SeparateEvenOdd.cpp

Question: Rearrange an array so that even numbers appear before odd numbers.

Input: arr = {1, 2, 3, 4, 5, 6}

Expected Output:
[2, 4, 6, 1, 5, 3]

*/

//Logic = 1

#include<iostream>
using namespace std;
int main(){
    int i = 0 ;
    int size;
    cout<<"enter size of the array : ";
    cin>>size;
    int arr1[size];
    for(i = 0 ; i<size ; i++){
        cout<<"Enter elements in the array  : ";
        cin >> arr1[i];
    }
    cout<<"\n the array is : \n";
    for(i = 0 ; i<size ; i++){
        cout<<arr1[i] << " ";
    }

    //now we write logic
    int first = 0 , last =  size -1;
    while(first < last){
        while (first < last && arr1[first]%2 == 0)
        {
            first+=1;
        }
        while (first < last && arr1[last]%2 != 0)
        {
            last-=1;
        }

        if(first<last){
            int temp = arr1[first];
            arr1[first] = arr1[last];
            arr1[last] = temp;
            first+=1;
            last-+1;
        }
        
    }
    cout<<"\nits output is : ";

    for(i = 0; i<size ; i++){
        cout<<arr1[i]<<" ";
    }
    
    return 0;

}







//Logic = 2


/*
#include<iostream>
using namespace std;
int main(){
    int i = 0 ;
    int size;
    cout<<"enter size of the array : ";
    cin>>size;
    int arr1[size];
    for(i = 0 ; i<size ; i++){
        cout<<"Enter elements in the array  : ";
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
        if(arr1[i]%2 != 0 && arr1[j]%2 == 0){
            arr1[i]  = arr1[i] + arr1[j];
            arr1[j] = arr1[i]  - arr1[j];
            arr1[i] = arr1[i] - arr1[j];
            i+=1;
            j+=1;
        }
        else if (arr1[i]%2 != 0 && arr1[j]%2 != 0){
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
    return 0 ;

}
    */
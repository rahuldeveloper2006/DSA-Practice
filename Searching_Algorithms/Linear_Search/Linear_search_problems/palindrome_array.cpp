
//Logic 1 :-


#include <iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,4,3,2,1};
    int end = sizeof(arr)/sizeof(arr[0]) -1;
    int start = 0;
    bool find = false;
    while(start <=end){
        if(arr[start] != arr[end]){
            cout<<"the given array is not palindrome array";
            find = true;
            break;
        }
        start+=1;
        end-=1;
    }
    if(find == false){
        cout<< "the given array is a Palindrome array";
    }
    return 0;
}



//Logic 2 using for loop

#include <iostream>
using namespace std;
int main(){
    int arr[7] = {1,2,3,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    bool find = false;
   for(int i = 0 ; i<=size/2 ; i++){
    if(arr[i] != arr[size-i-1]){
        find = true;
        break;
    }
   }
   if(find == true){
    cout<<"the given array is not palindrome array";
   }
   else{
    cout<<"the given array is palindrome array";
   }
}

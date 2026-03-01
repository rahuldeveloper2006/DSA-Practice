/*
File : while_loop.cpp
Topic:Loop (While Loop)
Author : Rahul Kumar Bhuyan
Description : Explanation and Example of while loop in c++
  */

//while loop is a Entry control loop because it check condition before executing the loop body.
//A while loop is used when we want to repeat a block code as long as a condition is true.
//While loop is mostly used when the number of iterations is unknown.

//Ex :-

#include<iostream>
using namespace std;
int main(){
  int i=1;
  cout<<"Numbers from 1 to 10 using while loop: \n";
  while(i<=10){
    cout<<i<<" ";
    i++;
  }
return 0;
}

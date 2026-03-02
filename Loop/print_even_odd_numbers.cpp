/*
========================================================
Author      : Rahul Kumar Bhuyan
Repository  : DSA-Practice
Folder Name : Loop
File Name   : print_even_odd_numbers.cpp
Topic       : Loop (Basic Iteration)
Problem     : Print even and odd numbers from 1 to n number
Language    : C++
========================================================
Time Complexity  : O(n)
- Loop runs 'n' times 
- Each iteration does constant work

Space Complexity : O(1)
- No extra data structures used
- Only few integer variables
*/

#include<iostream>
using namespace std;
int main(){
	int num,i=1;
	cout<<"enter number";
	cin>>num;
	while(i<=num){
		if(i%2==0){
			cout<<i<<":"<<"even number"<<endl;
		}
		else{
			cout<<i<<":"<<"odd number"<<endl;
		}
		i++;
	}
	return 0;
	
}


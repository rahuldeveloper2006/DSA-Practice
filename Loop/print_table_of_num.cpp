/*
========================================================
Author      : Rahul Kumar Bhuyan
Repository  : DSA-Practice
Folder Name : Loop
File Name   : print_table_of_num.cpp
Topic       : Loop (Basic Iteration)
Problem     : Print multiplication table of a number
Language    : C++
========================================================
Time Complexity  : O(n)
- Loop runs 'n' times (here n = 10)
- Each iteration does constant work

Space Complexity : O(1)
- No extra data structures used
- Only few integer variables
*/

#include<iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"Enter number : ";
	cin>>n;
	while(i<=10){
		cout<<n<<"*"<<i<<"="<<n*i;
		cout<<endl;
		i++;
	}
}


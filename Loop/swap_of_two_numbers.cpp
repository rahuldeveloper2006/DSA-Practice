/*
now we write a program to swap of two numbers without use temp variable and use a function in cpp
its time complexity is = O(1)
its space complexity is = O(1)
*/

#include<iostream>
using namespace std;
//now we define a function to swap two numbers
void swap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"after swap \n";
	cout<<"a = "<<a<<" and b = "<<b;	
}
int main(){
	int a,b;
	cout<<"enter number a = ";
	cin>>a;
	cout<<"enter number b = ";
	cin>>b;
	//now we call the swap function
	swap(a,b);
	return 0;
}

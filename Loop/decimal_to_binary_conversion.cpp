//now we write a program to convert from Decimal to Binary
//its time complexity is O(n)
//space complexity is O(1)

#include<iostream>
using namespace std;
int main(){
	int ans=0,temp,num,remind,grow=1;
	cout<<"enter Decimal number : ";
	cin>>num;
	temp=num;
	while(temp>0){
		remind=temp%2;
		ans=grow*remind+ans;
		temp=temp/2;
		grow=grow*10;
	}
	cout<<"after convert from decimal "<<num<<" to binary is :"<<ans;
	return 0;
} 

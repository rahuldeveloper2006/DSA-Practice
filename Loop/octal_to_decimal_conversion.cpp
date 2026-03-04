/*
now we write a program to convert from octal to decimal number
its time complexity is : O(n)
its space complexity is : O(1)
*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int num,ans=0,temp,remind,power=0;
	cout<<"Enter your octal number : ";
	cin>>num;
	temp=num;
	while(num>0){
		remind=num%10;
		ans=ans+remind*pow(8,power);
		power++;
		num=num/10;
	}
	cout<<"after conversion from octal number "<<temp<<" to Decimal form is : "<<ans;
	return 0;
}

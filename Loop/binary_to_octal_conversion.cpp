/*
now we write a program to convert from Binary number to Octal number.
in this case we 1st convert from binary to decimal then from decimal to Octal number
its time complexity is : O(n)
its space comnplexity is : O(1)
*/


#include<iostream>
#include<cmath>
using namespace std;
int main (){
	int num,temp,grow=1,remind,power=0,ans=0;
	cout<<"Enter your Binary number : ";
	cin>>num;
	temp=num;
	//now we make a logic to first convert from Binary to Decimal 
	while(num>0){
		remind=num%10;
		ans=ans+remind*pow(2,power);
		num=num/10;
		power++;
	}
	num=ans;
	ans=0;
	//now we define a logic to convert from Decimal to Octal
	while(num>0){
		remind=num%8;
		ans=grow*remind+ans;
		num=num/8;
		grow=grow*10;
	}
	cout<<"After conversion from Binary number "<<temp<<" to Octal form is : "<<ans;
	return 0;
}

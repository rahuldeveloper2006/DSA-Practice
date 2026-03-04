/*
now we write a program to convert from binary to decimal
its time complexity is O(n)
its space complexity is O(1)
*/


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int remind,num,temp,power=0,ans=0;
	cout<<"enter binary number : ";
	cin>>num;
	temp=num;
	while(num>0){
		remind=num%10;
		ans=ans+remind*pow(2,power);
		power=power+1;
		num=num/10;
	}
	cout<<"after conversion from binary number "<<temp<<" to Decimal is :"<<ans;
}

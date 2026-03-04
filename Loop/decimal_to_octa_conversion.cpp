/* now we write a program to convert from Decimal to Octal form
its time complexity is =O (n)
its space complexity is = O(1)
*/


#include<iostream>
using namespace std;
int main(){
	int num,temp,ans=0,remind,grow=1;
	cout<<"enter your Decimal number : ";
	cin>>num;
	temp=num;
	while(num>0){
		remind=num%8;
		ans=grow*remind+ans;
		num=num/8;
		grow=grow*10;
	}
	cout<<"after conversion from decimal number "<<temp<<" to octal form is : "<<ans;
	return 0;
}

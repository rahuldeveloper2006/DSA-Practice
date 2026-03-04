/*
now we write a program to find factorial of a number and also calculate the number of 0 digits present in result of factorial
its time complexity is = O(n)
its space complexity is = O(1) 
*/

#include<iostream>
using namespace std;
int main(){
	int num,count=0,ans=1,temp,remind;
	cout<<"enter number : ";
	cin>>num;
	temp=num;
	for(int i=1;i<=num;i++){
		ans=ans*i;
	}
	//now we define a logic to count the number of 0 digits
	num=ans;
	while(num>0){
		remind=num%10;
		num=num/10;
		if(remind==0){
			count=count+1;
		}
	}
	cout<<"factorial of "<<temp<<" is : "<<ans<<" and its having '0' digits are :  "<<count;
}

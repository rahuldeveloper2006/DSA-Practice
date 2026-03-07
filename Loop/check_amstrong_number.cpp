/*
now we write a program to check a number is amstrong or not.
153 is an amstrong number because (1*1*1)+(5*5*5)+(3*3*3)==153
its time complexity is O(n)
its space complexity is O(1)
*/
#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;
int main(){
	int num,original,length,ans=0,remind;
	cout<<"enter number : ";
	cin>>num;
	original=num;
	string str ;
	stringstream ss;
	ss<<num;
	ss>>str;
	length=str.length();
	//now we make logic to check amstrong number or not
	while(num>0){
		remind=num%10;
		ans=ans+pow(remind,length);
		num=num/10;
	}
	if(ans==original){
		cout<<original<<" is an Amstrong number";
	}
	else{
		cout<<original<<" is not an Amstrong Number";
	}
	return 0;
}


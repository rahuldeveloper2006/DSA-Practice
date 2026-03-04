/* now we write a program to add the digit of a number and give a single output
in this case we add the all digits of number if result is more than one digit then again add to the digits of the result
its time complexity is = O(n**2)
space complexity is = O(1)
*/

#include<iostream>
using namespace std;
int main(){
	int num,count,remind;
	cout<<"enter your number : ";
	cin>>num;
	while(num>9){
		count=0;
		while(num>0){
			remind=num%10;
			num=num/10;
			count=count+remind;
		}
		num=count;
	}
	cout<<"the single digit result is : "<<num;
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	int num,i=1;
	cout<<"enter number";
	cin>>num;
	while(i<=num){
		if(i%2==0){
			cout<<i<<":"<<"even number"<<endl;
		}
		else{
			cout<<i<<":"<<"odd number"<<endl;
		}
		i++;
	}
	return 0;
	
}

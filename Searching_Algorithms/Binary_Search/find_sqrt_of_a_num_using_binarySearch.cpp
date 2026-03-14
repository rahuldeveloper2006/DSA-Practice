#include<iostream>
using namespace std;
int sqrt(int num){
	int start=1,end=num,mid,ans;
	while(start<=end){
		mid=start+(end-start)/2;
		if(mid==num/mid){  //for handle int overflow we use this logic instead of mid*mid==num
			ans=mid;
			break;
		}
		else if(mid<num/mid){
			ans=mid;
			start=mid+1;
		}
		else{
			end=mid-1;
		}
	}
	return ans;
	
}
int main(){
	int num;
	cout<<"Enter number for find their square root : ";
	cin>>num;
	int result=sqrt(num);
	cout<<"Square Root of "<<num<<" is : "<<result;

	return 0;
}

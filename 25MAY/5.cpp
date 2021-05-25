#include<iostream>

using namespace std;

int main(){
	int num,rev=0;
	cin>>num;//123456
	
	for(;num>0;num=num/10){
		rev = rev*10 + num%10;
	}
	
	cout<<rev;
	
	
	return 0;
}

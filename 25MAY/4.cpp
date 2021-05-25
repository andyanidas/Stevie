#include<iostream>

using namespace std;

int main(){
	int num,sum=0;
	cin>>num;//123456
	
	for(;num>0;num=num/10){
		sum += num%10;
	}
	
	
	
	
	return 0;
}

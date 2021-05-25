#include<iostream>

using namespace std;

int main(){
	int num,count=0;
	cin>>num; //123456
	
	while(num>0){
		count++; //6
		num=num/10; //0
	}
	
	cout<<count;
	
	
	return 0;
}

#include<iostream>

using namespace std;

int main(){
	int num,fDigit,lDigit;
	cin>>num; //723456
	
	lDigit = num%10;
	
	while(num>10){
		num = num/10;
	}
	fDigit = num;
	cout<<"First digit : "<<fDigit<<endl;
	cout<<"Last digit : "<<lDigit<<endl;
	
	return 0;
}

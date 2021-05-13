#include<iostream>

using namespace std;

int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	
	if(age<16){
		cout<<"You are not allowed to drive";
	}else if(age<18){
		cout<<"you are not allowed to drink";
	}else if(age<21){
		cout<<"You are not allowed to go into clubs";
	}else{
		cout<<"You are allowed to do anything";
	}
	
	
	
	return 0;
}

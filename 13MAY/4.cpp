#include<iostream>

using namespace std;

int main(){
	int x = 15,y = 20;
	bool check;
	check = 99%2==0;
	x = 123456;
	int lastDigit = x%10;
	int lastTwoDigit = x%100;
	
	if(check){
		cout<<"X is greater than Y";
	}else{
		cout<<"Y is greater than X";
	}
	
	
	
	return 0;
}

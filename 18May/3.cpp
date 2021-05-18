#include<iostream>

using namespace std;

int main(){
	int x = 12;
	int sum=0;
	
	x++; // post increment operator by 1
	x--; // post decrement
	++x; // pre increment
	--x; // pre decrement
	
	//initialization will run only once at the begging
	//for(initial;condition;update){ body }
	for(int i = 0; i<100; i++){
		if(i%2==0){
			cout<<i<<" ";
		}
	}
	cout<<endl<<"------------------------------------"<<endl;
	for(int i = 100; i>=0; i--){
		cout<<i<<" ";
		sum = sum + i;
	}
	cout<<endl<<"------------------------------------"<<endl;
	
	for(char c='a'; c<='z'; c++){
		cout<<c<<" ";
	}
	
	
	
	
	return 0;
}

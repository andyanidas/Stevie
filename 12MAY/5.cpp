#include<iostream>

using namespace std;

int main(){
	int a,b,result;
	char op; // 99+88
	cin>>a>>op>>b;

	
	if(op=='+'){
		result = a + b;
	}
	if(op=='-'){
		result = a - b;
	}
	if(op=='*'){
		result = a * b;
	}
	if(op=='/'){
		result = a / b;
	}
	
	cout<<a<<op<<b<<" = "<<result;
	
	
	
	return 0;
}

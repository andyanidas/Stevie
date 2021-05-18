#include<iostream>

using namespace std;

int main(){
	int day;
	cout<<"Enter a number (1-7):";
	cin>>day;
	
	switch(day){
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"TD";
			break;
		case 3:
			cout<<"WD";
			break;
		case 4:
			cout<<"TH";
			break;
		case 5:
			cout<<"FD";
			break;
		case 6:
			cout<<"SD";
			break;
		case 7:
			cout<<"sunday";
			break;
		default:
			cout<<"You have entered wrong number!";
			break;
	}
	
	
	
	
	
	
	return 0;
}

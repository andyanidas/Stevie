#include<iostream>

using namespace std;

int main(){
	int eng;
	double total=0;
	cin>>eng;
	
	if(eng>250){
		total += (eng - 250)*1.5;
		eng =250;
	}
	
	if(eng>150){
		total +=(eng-150)*1.2;
		eng = 150;
	}
	
	if(eng>50){
		total +=(eng-50)*0.75;
		eng = 50;
	}
	
	total += eng*0.5;
	total *=1.2;
	
	cout<<total<<"$";
	
	return 0;
}

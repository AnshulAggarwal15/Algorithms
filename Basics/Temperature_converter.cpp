#include<iostream>

using namespace std;

int main(){
	cout<< "Enter temperature:"<<endl;
	int temp;
	char unit;

	cin>>temp>>unit;

	if(unit == 'C'){
		cout<<"temperature in fahrenheit is "<<(9*temp)/5 + 32<<" Fahrenheit";
	}
	else if(unit == 'F'){
			cout<<"temperature in celcius is "<<5/9*(temp - 32)<<" Calcius";	
	}
	else 
		cout<<"invalud unit";
}

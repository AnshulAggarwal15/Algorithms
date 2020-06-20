#include<iostream>

using namespace std;

int main(){
	int a;
	cin>>a;
	int decimal = 0;
			int  p =1;

	while(a>0){
		int d = a%10;
		decimal  += d*p;
		p=p*2;
		a/=10;
	}
	cout<<decimal;
	return 0;
}

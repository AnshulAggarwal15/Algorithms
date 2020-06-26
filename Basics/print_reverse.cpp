#include<iostream>
using namespace std;

int main(){
	long long int no;
	cin>>no;
	while(no>0){
		int x=0;
		x=no%10;
		cout<<x;
		no/=10;
	}
	return 0;
}

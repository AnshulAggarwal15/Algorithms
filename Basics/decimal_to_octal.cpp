#include<iostream>
using namespace std;


int main() {
	int no;
	cin>>no;
	int x = 0,y=1;
	int sum=0;
	while(no>0){
		x =no%8;
		count++;
		no/=8;
		x*=y;
			sum+=x;
			y*=10;
	}

	cout<<sum<<endl;

	return 0;
}

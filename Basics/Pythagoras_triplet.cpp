#include<iostream>
#include<math.h>
using namespace std;

int main() {

	long long int a;
	cin>>a;

	if(a<=0 || a == 2 || a == 1){
		cout<<"-1"<<endl;
	}
	else{
		if(a%2 == 0){
		long long int x = a*a/4;
		cout<<x-1<<" ";
		cout<<x+1;
			
		}
		else{
			long long int y = (pow(a+1,2) + pow(a-1,2))/4;
			long long int x = ((a*a) - 1)/2;
			cout<<x<<" "<<y;
		}
	}


	return 0;
}

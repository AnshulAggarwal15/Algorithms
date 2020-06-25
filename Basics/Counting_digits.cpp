#include<iostream>
using namespace std;

int main() {
	int no;
	cin>>no;
	int n,count =0;
	cin>>n;

	while(no>0){
		int x=no%10;
		if(x==n)
			count++;
		no/=10;
	}

	cout<<count<<endl;

	return 0;
}

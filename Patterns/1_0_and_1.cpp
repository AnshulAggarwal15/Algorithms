/* 
for INPUT - 9
OUTPUT IS -
1
11
111
1001
11111
100001
1111111
10000001
111111111
*/
#include<iostream>
using namespace std;

int main() {
	int row;
	cin>>row;

	for(int i=1;i<=row;i++){
		for(int j=0; j<i;j++){
			if(i%2 == 0){
				if(j == 0 || j == i-1 )
					cout<<"1";

				else
					cout<<"0";
			}
			else
				cout<<"1";
		}
		cout<<endl;
	}
	return 0;
}

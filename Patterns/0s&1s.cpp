/*
For input - 5
OUTPUT IS - 
0
10
010
1010
01010
*/



#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int i=0;
	int value =0;

	while(i<n){
		for(int j=0;j<=i;j++){
			cout<<value;
			if(value == 0)
				value =1;
			else
				value = 0;
			//we can simply use
			//value = value-1
			//if value =1 it becomes 0

		}
		
		cout<<endl;
		i++;
		// if(i%2 == 0)
		// 	value =0;
		// else
		// 	value =1;
		i%2 == 0 ? value=0:value=1;


	}
	return 0;
}

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	int no;
	cin>>no;
	int cp = no;
	int count=0;
	while (cp>0){
		cp/=10;
		count++;
	}
	int cp2=no;
	int sum=0;
	while(cp2>0){
		int x=0;
		x = cp2%10;
		int y=0;
		y=pow(x,count);
		sum+=y;
		cp2/=10;
	}

	sum==no?cout<<"true":cout<<"false";
	return 0;
}

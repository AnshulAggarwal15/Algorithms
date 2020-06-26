#include<iostream>
#include<math.h>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;

	int D = b*b - (4*a*c);

	if(D<0){
		cout<<"Imaginary"<<endl;
	}
	else if(D==0){
		cout<<"Real and Equal"<<endl;
		int root = (b*(-1))/2*a;
		cout<<root<<" "<<root<<endl;
	}
	else{
		cout<<"Real and Distinct"<<endl;
		int root1 = ((b*(-1))-sqrt(D))/2*a;
		int root2 = ((b*(-1))+sqrt(D))/2*a;

		cout<<root1<<" "<<root2<<endl;
	
	}

	return 0;
}

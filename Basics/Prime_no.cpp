#include <iostream>
using namespace std;

int main(){
	int n;
	cin>> n;
	int i;
	for(i=2; i*i<n; i++){
		if(n%i == 0){
			cout<<"Not Prime"<<endl;
			return 0;
		}
	}
	cout<<"Prime"<<endl;
	
	return 0;
}

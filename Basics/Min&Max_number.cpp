#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n;
	cin>>n;

	int min_yet = INT_MAX;
	int max_yet = INT_MIN;

	for(int i=0; i<n; i++){
		int no;
		cin>>no;
		if(no<min_yet)
			min_yet = no;
		if(no>max_yet)
			max_yet = no;
			
	}

	cout<<"Min number is: "<<min_yet<<endl;
	cout<<"Max number is: "<<max_yet<<endl;

}

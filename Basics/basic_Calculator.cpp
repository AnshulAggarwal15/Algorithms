#include<iostream>
using namespace std;

int main() {
	char ch;
	cin>>ch;
	int a,b,c;
	while(ch != 'x'|| ch != 'X')
	{
		if(ch=='+'){
				cin>>a>>b;
				c = a+b;
				cout<<c<<endl;
		}
		else if(ch=='-'){
				cin>>a>>b;
				c = a-b;
				cout<<c<<endl;
			}
		else if(ch=='*'){
				cin>>a>>b;
				c = a*b;
				cout<<c<<endl;
			}
		else if(ch=='/'){
				cin>>a>>b;
				c = a/b;
				cout<<c<<endl;
			}
		else if(ch=='%'){				cin>>a>>b;
				c =a%b;
				cout<<c<<endl;
			}
	
		else if(ch == 'x'|| ch == 'X'){
			return 0;
		}
		else {
				cout<<"Invalid operation. Try again."<<endl;
			}
			cin>>ch;
	}
			

	return 0;
}

#include<iostream>
using namespace std;

int main(){
	int alpha = 0;
	int digit =0;
	int spaces =0;
	int others = 0;

	char ch;
		ch = cin.get();	

	while(ch!='$'){
		if(ch >= '0' && ch<='9')
			digit++;
		else if((ch>=65 && ch<=90) ||(ch>=97&&ch<=122))
			alpha++;
		else if(ch ==32 || ch =='\n' || ch==\t'')
			spaces++;
		else
			others++;

		ch = cin.get();	
	}

	cout<<"Digits : "<<digit <<endl;
	cout<<"Alphabets : "<<alpha <<endl;
	cout<<"Spaces : "<<spaces <<endl;
	cout<<"Others : "<<others<<endl;

}

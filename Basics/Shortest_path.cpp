#include <iostream>

using namespace std;

int main(){
	char dir;
	dir = cin.get();
	int sumx=0;
	int sumy=0;
	while(dir!='\n'){
		if(dir == 'N' || dir == 'n' ){
			sumy+=1;
		}
		else if(dir == 'S' || dir == 's' ){
			sumy--;
		}
		else if(dir == 'E' || dir == 'e' ){
			sumx+=1;
		}
		else if(dir == 'W' || dir == 'w' ){
			sumx--;
		}
		else
			break;
		dir = cin.get();
	}

	if(sumx<0)
		cout<<-sumx<<" West"<<", ";
	else
		cout<<sumx<<" East"<<", ";


	if(sumy<0)
		cout<<-sumy<<" South";
	else
		cout<<sumy<<" North";

}

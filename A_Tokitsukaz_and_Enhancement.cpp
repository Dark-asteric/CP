#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%4 == 1) cout<<"0 A\n";
	else if(n%4 == 3){
		int k = n;
		k+=2;
		if(k%4 == 1) cout<<"2 A\n";
		else if(n%4 == 3) cout<<"0 B\n";
	}
	else if(n%4 == 2){
		n++;
		if(n%4 == 3) cout<<"1 B\n";
		else if(n%4 == 1) cout<<"1 A\n";
	}
	else if(n%4 == 0){
		n++;
		if(n%4 == 1) cout<<"1 A\n";
	}
	return 0;
}
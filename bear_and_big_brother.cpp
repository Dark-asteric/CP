#include <iostream>
using namespace std;

int main(){
	int a,b,count = 0;
	cin>>a>>b;
	while(true){
		a *= 3;
		b *= 2;
		count++;
		if(a>b){
			 false;
			 break;
			}
	}
    cout<<count<<endl;
	return 0;
}
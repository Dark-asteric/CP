#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c,d,count = 0;
		cin>>a>>b>>c>>d;
		if(a >b && a>c && a>d) count = 0;
		else{
			if(b>a){
				count++;
				}
			if(c>a) count++;
			if(d>a) count++;
		}
	cout<<count<<endl;
	}
	return 0;
}

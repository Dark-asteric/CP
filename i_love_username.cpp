#include <iostream>
using namespace std;

int main(){
	int n,c = 0,a,mx,mn;
	cin>>n>>a;
	mx = a;
	mn = a;
	for(int i=1 ; i<n; i++){
		cin>>a;
		if(a>mx){
			mx = a;
			c++;}
		if(a<mn){
			mn = a;
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
	   

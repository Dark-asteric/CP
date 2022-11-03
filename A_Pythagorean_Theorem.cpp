#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main(){
	ll n,count = 0;
	cin>>n;
	for(int i=1; i<=n;i++){
		int a = i*i;
		int b = (i+1)*(i+1);
		int c = (i+2)*(i+2);
		cout<<a<<" "<<b<<" "<<c<<" ";
		if( (a+b) == c) count++;
		}
	cout<<count<<endl;
	return 0;
}
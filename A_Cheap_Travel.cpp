#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,m,a,b,c,d;
	cin>>n>>m>>a>>b;
	c = (n/m)*b + (n%m)*a;
	d = (n/m)*b + (n%m)*b;
	cout<<min(c,min(n*a,d))<<endl;
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,mx,mx2,mn;
		cin>>a>>b;
		mx = max(2*a,b);
		mx2 = max(a,2*b);
		mn = min(mx,mx2);
		cout<<mn*mn<<endl;
	}
	return 0;
}
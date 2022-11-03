#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int t,l0 = 0, r0 = 0,l1 = 0, r1 = 0;
	cin>>t;
	vector<int>v,v2;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a == 0 ){
			l0++;
		}
		else l1++;
		if(b == 0) r0++;
		else r1++;
	}
	int ans = min(l0,l1) + min(r0,r1);
	cout<<ans<<endl;
	return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

int main(){
	ios :: sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		int n,m,sx,sy,d;
		cin>>n>>m>>sx>>sy>>d;
		int a,b,c,e,f;
		a = abs(n-1) + abs(m-1);
		b = abs(sx-n);
		c = abs(sx-1);
		e = abs(sy-1);
		f = abs(sy-m);
		if((b>d && e>d) || (c>d && f>d))
			cout<<a<<"\n";
		else
			cout<<"-1\n";
	}
	return 0;
}
		

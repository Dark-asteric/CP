#include <iostream>
#include <math.h>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		float n,d;
		cin>>n>>d;
		if(d==n) cout<<"YES\n";
		else{
			float x = ceil( (d/n)-1);
			float div = ceil(d/(x+1)) + x;
			//cout<<x<<endl;
			//cout<<div<<endl;
			if(n>=div) cout<<"YES\n";
			else
				cout<<"NO\n";
		}
		}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,qs=0, ans=0;
		cin>>n;
		string st;
		cin>>st;
		for(int i=0; i<n; i++){
			if(st[i] == 'Q')
				qs++;
			else
				qs--;
		}
		if(1>qs) cout<<"Yes\n";
		else
			cout<<"No\n";
	}
	return 0;
}

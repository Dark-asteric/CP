#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		vector<int>v(2*n);
		for(int i= 0;i<2*n; i++){
			cin>>v[i];
		}
		sort(v.rbegin(),v.rend());
		int count = 0;
		for(int i=0; i<n; i++){
		//cout<<v[i]<<" ";
			if((v[i]-v[i+3]) >=m)
		    	count++;
		}
		if(count == n) cout<<"Yes\n";
		else cout<<"No\n";
	}
	return 0;
}

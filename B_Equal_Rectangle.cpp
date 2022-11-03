#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>v(4*n);
		for(int i=0;i<4*n;i++){
			cin>>v[i];
			}
		int m=4*n,area = 0;
		if(n==1) cout<<"YES\n";
		else{
		sort(v.begin(),v.end());
		for(int i=0; i<n; i++){
			area += (v[i]*v[m-1]);
			m--;
		}
		int s = m,area2=0;
		for(int i=n;i<2*n;i++){
			area2+= v[i]*v[s-1];
			s--;
		}
		if(area == area2) cout<<"YES\n";
		else
			cout<<"NO\n";
		//cout<<area<<" "<<area2<<endl;
	}
	}
	return 0;
}
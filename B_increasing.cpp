#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
#define ll long long
int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<int>v(n);
		for(int i=0; i<n; i++){
			cin>>v[i];
			}
		sort(v.begin(),v.end());
		unordered_set<int>st(v.begin(),v.end());
		v.assign(st.begin(),st.end());
		int sz = v.size();
		int count = 0;
		if(n==1) cout<<"Yes\n";
		else {
		/**for(int i=0;i<=n; i++){
			if(v[i-1] < v[i]) count++;
			}
		//cout<<count<<" ";*/
		if(sz <n) cout<<"No\n";
		else if(sz == n)
			cout<<"Yes\n";
		}
		}
	return 0;
}

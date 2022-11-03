#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
	int n,m;
	cin>>n>>m;
	set<int>s;
	vector<int>v;
	for(int i =0;i<n;i++){
		int digit;
		cin>>digit;
		if(!s.count(digit)){
			v.push_back(i);
			s.insert(digit);
			}
	}
	int sz = v.size();
	if(sz < m) cout<<"NO\n";
	else{
		cout<<"YES\n";
		for(int i=0; i<m; i++){
			cout<<v[i]+1<<" ";
			}
		cout<<endl;
	}
	/**unordered_set<int> st(v.begin(),v.end());
	v1.assign(st.begin(),st.end());
	int s= v1.size();
	cout<<s<<endl;
	if(s != m) cout<<"NO\n";
	else if(s == m){
		cout<<"Yes\n";
		for(int i=0; i<s; i++){
			int mn = 0;
			for(int j=i; j<n; j++){
				if(v[i] == v1[j]) mn = i;
			}
			cout<<mn+1<<" ";
			}
		}**/
	return 0;
}

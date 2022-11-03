#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int mn = INT_MAX;
	int mx = INT_MIN;
	for(int i=0; i<n;i++){
		mx = max(mx,v[i]);
		mn = min(mn,v[i]);
	}
	cout<<mx-mn<<"\n";
	}
	return 0;
}
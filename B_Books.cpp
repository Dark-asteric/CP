#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
int main(){
	ll t,n;
	cin>>t>>n;
	ll a;
	vector<ll> v;
	for(int i = 0 ; i<t; i++){
		cin>>a;
		v.push_back(a);
		}
	sort(v.begin(),v.end());
	ll mx = INT_MIN,count = 0,count1 = 0;
	for(int i=0; i<t;i++){
		if(v[i]>mx) mx=v[i];
		}
	if(mx<=n) count1++;
	for(int i=0; i<t; i++){
		int sum = v[0]+v[i+1];
		if(sum<n){
			count++;
			}
		}
	cout<<count1+count<<endl;
	return 0;
}

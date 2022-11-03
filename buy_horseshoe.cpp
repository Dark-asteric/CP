//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
	long long a,b,c,d;
	int count=0;
	cin>>a>>b>>c>>d;
	vector<ll> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(c);
	v.push_back(d);
	sort(v.begin(),v.end());
	for(int i = 0;i<4; i++){
		if(v[i] == v[i+1]) count++;
		}
	cout<<count;
	return 0;
}
		
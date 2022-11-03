//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
	int m,n,mn = INT_MAX;
	cin>>m>>n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin>>v[i];
		}
	sort(v.begin(),v.end());
	for(int i=0; i<=n-m; i++){
		mn = min(mn,(v[i+m-1]-v[i]));
		}
	cout<<mn<<endl;
	return 0;
}

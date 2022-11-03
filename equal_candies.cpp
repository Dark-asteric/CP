#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll candy = 0 ,n;
		cin>>n;
		ll arr[n],mn;
		mn=INT_MAX;
		for(int i = 0; i<n ; i++){
			cin>>arr[i];
			if(arr[i]<mn){
				mn = arr[i];
			}
		}
	for(int i =0; i<n ; i++){
		candy += (arr[i] - mn);
		}
	cout<<candy<<endl;
	}
	return 0;
}
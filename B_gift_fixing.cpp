#include <iostream>
using namespace std;

#define ll long long

int main(){
	ll t,mn,mn1;
	cin>>t;
	mn = INT_MAX;
	mn1 = INT_MAX;
	while(t--){
		ll sub_test;
		
		cin>>sub_test;
		ll a[sub_test],b[sub_test];
		for(int i =0; i<sub_test;i++){
			cin>>a[i];
			}
		for(int i = 0; i<sub_test;i++){
			cin>>b[i];
			}
		for(int i = 0;i<sub_test; i++){
			if(a[i]<mn) mn = a[i];
			if(b[i]<mn1) mn1 = b[i];
			}
		//cout<<mn<<" "<<mn1;
		ll result = 0;
		for(int i = 0; i<sub_test; i++){
				
			result +=max(a[i]-mn,b[i] - mn1);
			}
		cout<<result<<"\n";
		}
	return 0;
}

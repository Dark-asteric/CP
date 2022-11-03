#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector<ll>v(n);
		ll prod = 1;
		for(int i=1;i<=n;i++){
			cin>>v[i];
			prod *=v[i];
			}
		ll p = pow(2,n);
		if(prod%p == 0) cout<<0<<endl;
		else if(prod<p) cout<<2<<endl;
		else if(prod%p !=0){
			if(2*prod%p == 0) cout<<1<<endl;
			else 
				cout<<-1<<endl;
			}
		else if(2*prod%p == 0) cout<<1<<endl;
		}
	return 0;
}

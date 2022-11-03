#include <iostream>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll w,h,n;
		cin>>w>>h>>n;
		ll res = 1;
		while(w%2 == 0){
			w = w/2;
			res *= 2;
			}
		while(h%2 == 0){
			h /= 2;
			res *= 2;
			}
		cout<< (res>= n ? "Yes\n":"No\n");
	}
	return 0;
}
		
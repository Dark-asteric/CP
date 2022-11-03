#include <iostream>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll candies;
		cin>>candies;
		if(candies<3) cout<<0<<endl;
		else if(candies%2 == 0) cout<<candies/2 - 1<<"\n";
		else if(candies % 2) cout<<candies/2<<"\n";
		}
	return 0;
}

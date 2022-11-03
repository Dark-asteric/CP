#include <iostream>
using namespace std;

typedef long long ll;

int main(){
	ll n;
	cin>>n;
	int arr[n];
	ll ss=0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		ss+=arr[i];
		}
	ll sum = 0,sum2 = 0;
	ll s = ss/25;
	if(s == n) cout<<"YES\n";
	else if(arr[0]>25) cout<<"NO\n";
	else {
	for(int i=0;i<n;i++){
		if(arr[i] == 25){
			sum += arr[i];
		}
		if(arr[i]>25){
			sum2 = arr[i] - 25;
			sum -= sum2;
			}
		}
	cout<<sum<<" "<<sum2;
	if(sum2 == 25) cout<<"YES\n";
	else cout<<"NO\n";
	}
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,c,c1;
	cin>>n;
	int arr[n];
	int sum = 0;
	for(int i=0; i<n; i++){
		cin>>arr[i];
		sum += arr[i];
		}
	if(sum%4 == 0) || sum%3 == 0 ||sum%2 == 0) cout<<min(sum%4,min(sum%3,sum%2));
	else
		cout<<sum/4+1<<endl;
	return 0;
}

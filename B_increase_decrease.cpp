#include <iostream>
using namespace std;

int main(){
	int n,sum = 0;
	cin>>n;
	int a[n];
	int t = n;
	for(int i = 0; i<n; i++){
		cin>>a[i];
		sum+=a[i];
		}
	//cout<<sum;
	if(sum%t == 0) cout<<n<<endl;
	else
		cout<<t-1<<endl;
	return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int n, sum = 0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		sum +=a[i];
		}
	cout<<fixed<<setprecision(12)<<(double)sum/n<<"\n";
	return 0;
}
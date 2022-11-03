#include <iostream>
#include <vector>
using namespace std;
int factor(int a){
	int ans = 1;
	for(int i=1; i<=a;i++){
		ans*=i;
	}
	return ans;
}
int main(){
	int n,k,d,fact,fact2=1,sum = 0;
	cin>>n>>k;
	for(int i=1; i<=k; i++){
		fact2*=i;
		}
	//vector<int> v;
	for(int i=0; i<n; i++){
		//int d;
		cin>>d;
		//v.push_back(d);
		fact = factor(d);
		sum += fact;
	}
	if(sum%fact2 == 0) cout<<"Yes\n";
	else
		cout<<"No\n";
	return 0;
}
	
	
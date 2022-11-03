#include <iostream>
#include <vector>
#include "algorithm"
using namespace std;

int main(){
	/*int n,sum = 0;
	vector<int>v;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
		sum += v[i];
		}
	sum /=2;
	int ans = 0, cnt=0;
	sort(v.begin(),v.end());
	for(int i =n-1; i>=0; i--){
		ans += v[i];
		cnt++;
		if(ans>sum) break;
		}
	cout<<cnt<<"\n";*/
	int t;
	#ifdef abab
	cin >> t;
    #else
    t=1;
    #endif
    while(t--){
    	int n;
    	cin>>n;
    	cout<<t<<" ";
    	}
    cout<<"\n"<<clock();
}

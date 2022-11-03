#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	vector<int>v,v1,v2;
	while(t--){
		int n;
		cin>>n;
		int sum = 0, sum1 = 0,sum3=0;
		for(int i =0 ;i<n; i++){
			int a,c;
			cin>>a;
			//c = 1-a;
			v.push_back(a);
			
			}
		for(int i =0 ;i<n; i++){
			int b;
			cin>>b;
			v1.push_back(b);
			
			}
		for(int i =0 ; i<n;i++){
			sum += v[i];
			sum1 += v1[i];
			}
		//sort(v.begin(),v.end());
		for(int i=0; i<n; i++){
			if(v[i] !=v1[i]){
				sum3++;
				//sum1+=v1[i];
				
			}
		}
		cout<<min((abs(sum-sum1)+1),sum3)<<endl;
		//cout<<sum<<endl;
		}
	return 0;
}

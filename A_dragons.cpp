#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int level,size;
	cin>>level>>size;
	vector<pair<int,int>>v;
	for(int i= 0; i<size; i++){
		int a,b;
		cin>>a>>b;
		v.emplace_back(make_pair(a,b));
		}
	sort(v.begin(),v.end());
	//sort(v1.begin(),v1.end());
	//int count = 0,count2 = 0;
	for(int i =0 ; i<size; i++){
		if(v[i].first<level){
			level += v[i].second;
			//count2++;
		//cout<<"Yes";
		}
		else{
			cout<<"NO\n";
			return 0;
			}
	}
	cout<<"YES\n";
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		string s1,s2;
		cin>>s1>>s2;
		for(auto &i:s1){
			if(i == 'G'){
				i = 'B';
				}
			}
		for(auto &i:s2){
			if(i == 'G'){
				i = 'B';
				}
			}
		if(s1 == s2) cout<<"Yes\n";
		else
			cout<<"No\n";
		}
	return 0;
}
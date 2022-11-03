#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
	string s;
	cin>>s;
	//sort(s.begin(),s.end());
	for(int i = 0; i<s.size(); i+=2){
		for(int j=i; j<s.size(); j+=2){
			if(s[i]>s[j])
				swap(s[i],s[j]);
			}
		}
	cout<<s;
	return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	string s, a,b,c;
	cin>>a>>b>>c;
	s = a+b;
	sort(s.begin(),s.end());
	sort(c.begin(),c.end());
	if(s == c) cout <<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
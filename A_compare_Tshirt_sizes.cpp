#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		char ch;
		cin>>a>>b;
		int s1 = a.size()-1,s2 = b.size()-1;
		if(a[s1] == 'S'){
			if(b[s2] == 'S'){
				if(s1+1>s2+1) ch = '<';
				else if(s2+1>s1+1) ch = '>';
				else
					ch = '=';
				}
			else
				ch = '<';
			}
		else if(a[s1] == 'M'){
			if(b[s2] == 'M') ch = '=';
			else if(b[s2] == 'L') ch = '<';
			else ch='>';
			}
		else if(a[s1] == 'L'){
			if(b[s2] == 'L') {
				if(s1+1> s2+1) ch = '>';
				else if(s1+1<s2+1) ch = '<';
				else 
					ch = '=';
				}
			else ch = '>';
			}
		cout<<ch<<endl;
		}
	return 0;
}
			

#include <iostream>
#include <string>
using namespace std;

int main(){
	string s,r;
	cin>>s;
	int n = s.length();
	for(int i = 0; i<n; i++){
		if(s[i] == '.'){
			r += '0';
			continue;
			i++;
			}
		else if(s[i] == '-' && s[i+1] == '.'){
			r += '1';
			//continue;
			i++;
			}
		else if(s[i] == '-' && s[i+1] == '-'){
			r += '2';
			//continue;
			i++;
			}
		}
	cout<<r;
	return 0;
}

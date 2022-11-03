#include <iostream>
#include <string>
using namespace std;

int main(){
	int n,m,count = 0;
	cin>>n>>m;
	string s[n][m];
	for(int i = 0; i<n; i++){
		for(int j=0; j<m;j++){
			cin>>s[i][j];
			}
		}
	for(int i = 0; i<n; i++){
		for(int j=0; j<m;j++){
			if(s[i][j] == "C" || s[i][j] == "M" || s[i][j] == "Y") count++;
			}
		}
	if(count == 0) cout<<"#Black&White\n";
	else
		cout<<"#Color\n";
	return 0;
}
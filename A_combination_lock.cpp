#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int n,c;
	cin>>n;
	string s1,s2;
	cin>>s1>>s2;
	int count=0;
	// 5
	// 82195
	// 64723
	for(int i=0; i<n; i++){
			c = abs(s1[i]-s2[i]);
			if(c>5){
				c = 10-c;
			}
			count += c;
		}
	cout<<count<<endl;
	return 0;
}
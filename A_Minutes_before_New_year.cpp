#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int hours,minutes;
		cin>>hours>>minutes;
		int res = (24-hours)*60;
		cout<<res-minutes<<endl;
		}
	return 0;
}
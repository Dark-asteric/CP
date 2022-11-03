#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int eggs,stickers,toys;
		cin>>eggs>>stickers>>toys;
		cout<<abs(max(eggs-toys,eggs-stickers))+1<<endl;
		}
	return 0;
}
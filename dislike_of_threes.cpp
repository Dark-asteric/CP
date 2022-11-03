#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for(int i = 1;  ; i++){
			if(n%3 == 0 || n%10 == 3){
				continue;
			}
			if(--n == 0) {
				cout<<i<<"\n";
				break;
			}
			}
		}
	return 0;
}

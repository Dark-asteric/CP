#include <iostream>
using namespace std;

int josephus(int n, int k) {
    return n > 1 ? (josephus(n-1, k) + k - 1) % n + 1 : 1;
}

int main(){
	int s;
	cin>>s;
	int n,k;
	for(int i=1;i<=s;i++){
		cin>>n>>k;
		int x=josephus(n,k);
		cout<<"Case "<<i<<": "<<x<<endl;
		}
	return 0;
}
	

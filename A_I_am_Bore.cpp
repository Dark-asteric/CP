#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a,b, fact = 1;
	cin>>a>>b;
	int mn = min(a,b);
	for(int i=1; i<=mn; i++){
		fact *= i;
		}
	cout<<fact<<endl;
	return 0;
}
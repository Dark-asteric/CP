#include <iostream>
using namespace std;

int main(){
	int n,n100,r100,n20,r20,n10,r10,n5,r5,n1,r1;
	cin>>n;
	if(n%100 == 0) cout<<n/100<<endl;
	else{
		n100 = n/100;
		r100 = n%100;
		n20 = r100/20;
		r20 = r100%20;
		n10 = r20/10;
		r10 = r20%10;
		n5 = r10/5;
		r5 = r10%5;
		n1 =r5;
		cout<<n100+n20+n10+n5+n1<<endl;
		}
	return 0;
}
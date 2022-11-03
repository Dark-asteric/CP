#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int n, m, k, l,x;
	cin>>n>>m>>k>>l;
	x = floor((l+k)/m);
	if(l<x || x*m<n){
		cout<<-1<<endl;
		}
	else
		cout<<x<<endl;
	return 0;
}

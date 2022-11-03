#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	int a,mn;
	cin>>a;
	if(a>=1 && a<=5){
		cout<<'1'<<endl;
		}
	else if(a>5){
		mn = (a+4)/5;
		cout<<mn<<endl;
		}
	return 0;
}
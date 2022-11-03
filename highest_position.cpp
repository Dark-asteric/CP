#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int i,a;
	int max=0,pos = 0;
	for(i =1 ;i<=5; i++){
		int n[100];
		cin>>n[i];
		if(n[i]>max){
			max = n[i];
			pos = i;
		}
	}
	cout<<max<<endl;
	cout<<pos<<endl;
	return 0;
}

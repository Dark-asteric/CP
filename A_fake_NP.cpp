#include <iostream>
#include <math.h>
#define ll long long
using namespace std;

int main(){
	ll a,b,count2 =0 , count3 = 0, count5 =0,count6 =0, count10=0;
	cin>>a>>b;
	if(a==b) cout<<a<<endl;
	/*for(ll i=a; i<=b; i++){
		if(i%2 == 0){
			//if(i/2 == i)
			 count2++;
			//else count2 +=2;
			}
		if(i%3 == 0){
			//if(i/3 == i) 
			count3++;
			//else
			//	count3 +=2;
			}
		if(i%5 == 0) count5++;
		if(i%6 ==0) count6++;
		if(i%10 == 0) count10++;
		//cout<<count2<<" "<<count3;
		}
	//cout<<count2<<" "<<count3<<" "<<count5<<" "<<count6<<" "<<count10<<endl;
	if(count2>=count3 && count2>=count5 && count2>=count6 && count2>=count10) cout<<2<<endl;
	else if(count3>count2 && count3>=count5 && count3>=count6 && count3>=count10) cout<<3<<endl;
	else if(count5>count2 && count3<count5 && count5>count6 && count5>count10) cout<<5<<endl;
	else if(count6>count2 && count6>count5 && count3<count6 && count6>count10) cout<<6<<endl;
	else if(count10>count2 && count10>count5 && count10>count6 && count3<count10) cout<<10<<endl;*/
	else cout<<2<<endl;
	return 0;
}

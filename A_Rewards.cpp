#include <iostream>
using namespace std;

int main(){
	int t_cups,cups[3],shelves,sum1=0;
	int t_medals,medals[3],sum2=0;
	for(int i=0; i<3; i++){
		cin>>cups[i];
		sum1 += cups[i];
	}
	for(int i = 0; i<3; i++){
		cin>>medals[i];
		sum2 += medals[i];
	}
	cin>>shelves;
	int div1,div2,div3=0,div4=0;
	while(sum1>0){
		sum1-=5;
		div3++;
		}
	while(sum2>0){
		sum2 -= 10;
		div4++;
		}
	//cout<<sum1<<" "<<sum2;
	//cout<<"\n"<<div3<<" "<<div4;
	if((div3+div4) <= shelves) cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}

#include <iostream>
using namespace std;

int main(){
	int Andrew,Dmitry,Michal;
	int green,purple,black;
	cin>>Andrew>>Dmitry>>Michal>>green>>purple>>black;
	if(Andrew>green || Dmitry>(green-Andrew)+purple)cout<<"NO\n";
	else{
		int sum,sum1,sum2;
		sum = green-Andrew;
		sum1 = (sum + purple) - Dmitry;
		sum2 = (sum1+black) - Michal;
		//cout<<sum<<" "<<sum1<<" "<<sum2;
		if(sum2>=0) cout<<"YES\n";
		else cout<<"NO\n";
		}
	return 0;
}
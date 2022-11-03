#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	
	vector<int>v;
	unordered_set<int>st;
	int sum = 0;
	for(int i=0; i<4; i++){
		int a;
		cin>>a;
		v.push_back(a);
		st.insert(a);
		//sum += v[i];
	}
	int pad;
	cin>>pad;
	//cout<<size(st)<<endl;
	if(size(st) == 1) cout<<1<<"\n";
	else{
	sort(v.begin(),v.end());
	v[0] += pad;
	int sub1 = v[0]-v[1];
	int sub2 = v[2]-v[3];
	//int count = 0;
	//cout<<v[1]<<endl;
	//st.insert(mn);
	//int div = mn + v[1] + v[2] + v[3];
	//int mn = min(a,min(b,min(c,d)));
	/*for(int i=0; i<4; i++){
		if(v[i]!=v[i-1])
			count++;
		}*/
	//cout<<size(st)<<endl;
	if(sub1 == sub2) cout<<1<<"\n";
	else
		cout<<0<<"\n";
	}
	return 0;
}
	

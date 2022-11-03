#include <iostream>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a,b,count3 = 0;
	vector<int>v,v1;
	while(n--){
			cin>>a>>b;
			v.push_back(a);
			v1.push_back(b);
		}
	/**int count = 0, count2 = 0;
		for(int j=0; j<n; j++){
			if(v[j-1]<v[j]) count++;
			else
				count2++;
			if(v1[j]>v1[j-1]) count++;
			else
				count2++;
			}*/
	sort(v1.begin(),v1.end());
	int count = 0;
	for(int i = 0; i<n; i++){
		/*if(v[i] == v1[i]) {
			count++;
			}*/
			cout<<v1[i]<<" "<<v[i];
		}
	/**if(count == 0) cout<<"Happy Alex\n";
	else
		cout<<"Poor Alex\n";*/
	return 0;
}

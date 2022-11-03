#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
		}
	///vector<pair<int,int>>v;
	int v,v2;
	int sum=0;
	int min = 9999999;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n; j++){
			sum =abs(arr[j]-arr[i]);
			if(sum<min){
				min = sum;
				//v.push_back(make_pair(i,j));
				v2 = j;
				v = i;
				}
			}
		}
	//for(int i=1; i<v.size(); i++)
	cout<<v+1<<" "<<v2+1;
	cout<<endl;
	return 0;
}
			
			
			

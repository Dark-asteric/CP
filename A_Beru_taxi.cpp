#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
	double a,b;
	cin>>a>>b; // ordinates of Vasily.
	int n;
	cin>>n; // number of cars.
	double x[n],y[n],v[n];
	for(int i=0; i<n; i++){
		cin>>x[i]>>y[i]>>v[i];
		}
	double mn = 10000000000;
	for(int i = 0; i<n; i++){
		double c,d,e;
		c = sqrt((x[i]-a)*(x[i]-a) + (y[i]-b)*(y[i]-b));
		d = c/v[i];
		if(d<mn){
			mn = d;
		}
		}
	cout<<fixed<<setprecision(20)<<mn<<endl;
	return 0;
}
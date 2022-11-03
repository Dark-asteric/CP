#include <iostream>
using namespace std;

int main(){
	int t;
	int arr[] = {1,11,111,1111,2,22,222,2222,3,33,333,3333,4,44,444,4444,5,55,555,5555,6,66,666,6666,7,77,777,7777,8,88,888,8888,9,99,999,9999};
	cin>>t;
	while(t--){
		int i,n,m;
		cin>>n;
		for(int i=0; i<36; i++){
			if(arr[i]==n){
				m = i;
				break;
				//cout<<m<<endl;
			}
		}
		int sum1 = 0;
		if((m+1)>4){
			int result = (m+1)/4;
			int rem =( m+1)%4,sum = 0;
			for(int i = 1; i<=rem;i++){
				sum +=i;
				}
			//cout<<sum<<endl;
			//cout<<result<<" "<<rem<<endl;
			cout<<(10*result)+sum<<endl;
			//cout<<m+1;
		}
		else if((m+1)<=4 && (m+1)>0){
			for(int i = 1; i<=(m+1); i++){
				sum1 +=i;
			}
			cout<<sum1<<endl;
		}
		//cout<<m+1;
		//int sum = 0;
		/**if(m<=4){
			for(int i = 1; i<=4; i++){
			sum += i;
			}
		}
	cout<<sum<<endl;
	//sum = 0;**/
	}
	return 0;
}

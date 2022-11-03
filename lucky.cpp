#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		string s; 
		cin >> s;
        int s1 = 0, s2 = 0;
        for(int i = 0; i < 6; i++) {
            if(i < 3) s1 += s[i] - '0';
            else s2 += s[i] - '0';
        }
        cout << (s1 == s2 ? "YES" : "NO") << endl;
    }
		return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
	string s,my_str;
	cin>>s;
	/*s.erase(remove(s.begin(),s.end(),'WUB'),s.end());*/
	//my_str.erase(remove(my_str.begin(), my_str.end(), 'WUB'), my_str.end());
	bool ch = true;
    for (int i=0;i<s.length();i++){
        if (s[i]=='W' && s[i+1]=='U' &&  s[i+2]=='B' ){
            i+=2;
            if (!ch){
                cout<<" ";
            }
            continue;
        }
        else {
            ch =false;
            cout<<s[i];
        }
    }
	//cout<<s;
	return 0;
}

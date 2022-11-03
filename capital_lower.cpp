#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	if(s>="A" && s<="Z") cout<<"Grande l'alphabet.\n";
	else if(s>="a" && s<="z") cout<<"Petit l'alphabet\n";
	else
		cout<<"You entered wrong key.\n";
	return 0;
}

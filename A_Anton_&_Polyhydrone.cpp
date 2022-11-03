#include <iostream>
#include <string>
using namespace std;

int main(){
	int t,tetra=0,cube = 0, octa = 0, dode=0, ico=0;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		/*Cube
		Octahedron
		Dodecahedron
		Icosahedron*/
		if(s == "Tetrahedron")
			tetra+=4;
		else if(s == "Cube") tetra+=6;
		else if(s =="Octahedron") tetra+=8;
		else if(s == "Dodecahedron") tetra +=12;
		else if(s== "Icosahedron") tetra+=20;
		}
	cout<<tetra;
	return 0;
}
			
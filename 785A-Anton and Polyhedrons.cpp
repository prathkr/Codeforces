#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>> n;
	string s;
	int count = 0;
	unordered_map<string, int>poly = {{"Tetrahedron" , 4},{"Cube" , 6} ,{ "Octahedron" , 8} ,{"Dodecahedron" , 12 },{"Icosahedron" , 20}};
	for (int i = 0 ; i <n ; i++) {
		cin>>s;
		if(poly.find(s)!= poly.end()){
		    count += poly[s];
		}
	}
	cout<<count;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
	int n , a , b , no = 0;
	vector<int> vec;
	cin>>n;
	for(int i = 0; i <n ; i++){
		cin>>a>>b;
		no += - a + b;
		vec.push_back(no);
	}
auto max = *max_element(vec.begin(),vec.end());

  
    cout << max; 	
}

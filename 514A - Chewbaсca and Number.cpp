#include <bits/stdc++.h>
using namespace std;
int main() {
    string n;
    cin>>n;
    for(auto& no : n){
        if (no > '4') {
            no = '9' - no + '0';
        }
    }
    if (n.front() == '0') {
        n.front() = '9';
    }
    cout<<n;
}

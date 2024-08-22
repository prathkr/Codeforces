#include <bits/stdc++.h>
using namespace std;
int main() {
    int n ;
    int count = 0;
    cin >> n;
    string b;
    for (int i = 0; i < n; i++) {
        cin>>b;
        for(int j = 0 ; j<=3; j++) {
            if (b[j] == '+'){
                count++;
                break;
            }
            else if (b[j] == '-'){
                --count;
                break;
            }
        }
    }
    cout<<count;
}

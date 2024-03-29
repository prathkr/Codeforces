#include <bits/stdc++.h>
using namespace std;

void convert(const string& time) {
    int hour, minute;
    stringstream ss(time);
    char colon;
    ss >> hour >> colon >> minute;

    if (hour == 0) {
        cout << "12";
    } else if (hour <= 12) {
        cout << setw(2) << setfill('0') << hour;

    } else {
        cout << setw(2) << setfill('0') << hour - 12;
    }

    cout << ":" << setw(2) << setfill('0') << minute;

    if (hour < 12) {
        cout << " AM";
    } else {
        cout << " PM";
    }

    cout << endl;
}

int main() {
    int t;
    cin>>t;
    for(int i = 0 ; i<t; i++){
    string time;
    cin >> time;
    convert(time);
}
    return 0;
}

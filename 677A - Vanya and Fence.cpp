#include<iostream>

using namespace std;

int main() {
  int n, h, p, wdth = 0;
  cin >> n >> h;
  for (int i = 0; i < n; i++) {
    cin >> p;
    if (p <= h) {
      wdth += 1;
    } else if (p > h) {
      wdth += 2;
    }
  }
  cout << wdth;
  return 0;
}

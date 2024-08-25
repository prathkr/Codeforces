#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int od = 1, c = 1;
  while (n--) {
    if (od == 1) {
      for (int i = 1; i <= m; i++) {
        cout << "#";
        od = 2;
      }
      cout << endl;
    } else {
      if (c == 1) {
        for (int i = 1; i < m; i++) {
          cout << ".";
          od = 1;
          c = 2;
        }
        cout << "#" << endl;
      } else {
        cout << "#";
        for (int i = 1; i < m; i++) {
          cout << ".";
          od = 1;
          c = 1;
        }
        cout << endl;
      }
    }
  }
}

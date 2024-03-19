#include <bits/stdc++.h>

using namespace std;

int main() {
   int n, t;
   string a;
   cin >> n >> t;
   cin >> a;
   while (t--) {
      for (int i = 0; i < n; i++) {
         if (a[i] == 'B' && a[i + 1] == 'G') {
            swap(a[i], a[i + 1]);
            i++;
         }
      }
   }
   cout << a;
}

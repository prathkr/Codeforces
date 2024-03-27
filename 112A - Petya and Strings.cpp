#include <bits/stdc++.h>

using namespace std;

int cmpre(string s1, string s2) {
  int ans;
  transform(s1.begin(), s1.end(), s1.begin(),
    [](unsigned char c) {
      return std::tolower(c);
    });
  transform(s2.begin(), s2.end(), s2.begin(),
    [](unsigned char c) {
      return std::tolower(c);
    });
  ans = s1.compare(s2);
  return ans;
}

int main() {
  string s1, s2;
  cin >> s1 >> s2;
  cout << cmpre(s1, s2);

}

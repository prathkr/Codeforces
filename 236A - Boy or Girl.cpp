#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;

  unordered_set < char > distinctChars;
  for (char ch: s) {
    distinctChars.insert(ch);
  }

  int distinct = distinctChars.size();
  if (distinct % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
}

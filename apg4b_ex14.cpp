// EX14 - 三人兄弟の身長差 / 1.14 <https://atcoder.jp/contests/apg4b/tasks/APG4b_ci>

#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  int div = max(max(A, B), C) - min(min(A, B), C);
  cout << div << endl;
}

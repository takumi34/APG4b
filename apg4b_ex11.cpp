//EX11 - 電卓をつくろう2 / 1.11 <https://atcoder.jp/contests/apg4b/tasks/APG4b_cl>

#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;
 
  // ここにプログラムを追記
  string op;
  int B;
  for (int i = 0; i < N; i++) {
      cin >> op >> B ;
      if (op == "+") {
          A += B;
      }
      else if  (op == "-") {
          A -= B;
      }
      else if (op == "*") {
          A *= B;
      }
      else {
         if (B == 0 ) {
             cout << "error" << endl;
             break;
         }
         else {
             A /= B;
         }
      }
      cout << i+1 << ":" << A << endl;
  }
}

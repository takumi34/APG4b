//EX9 - 複合代入演算子を使おう / 1.09 <https://atcoder.jp/contests/apg4b/tasks/APG4b_cn>

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int x, a, b;
  cin >> x >> a >> b;
 
  // 1.の出力
  x++;
  cout << x << endl;
 
  // ここにプログラムを追記
  x *= a+b;
  cout << x << endl;
  x *= x;
  cout << x << endl;
  x--;
  cout << x << endl;
}

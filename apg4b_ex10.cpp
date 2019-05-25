// EX10 - 棒グラフの出力 / 1.10 <https://atcoder.jp/contests/apg4b/tasks/APG4b_cm>

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  cin >> A >> B;
 
  // ここにプログラムを追記
  int i = 0;
  int j = 0;
  cout << "A:";
  while(i<A){
      cout << "]";
      i++;
  }
  cout << endl;
  cout << "B:";
  while(j<B){
    cout << "]";
    j++;
  }
  cout << endl;
}

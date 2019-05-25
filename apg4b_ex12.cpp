// EX12 - 足したり引いたり / 1.12 <https://atcoder.jp/contests/apg4b/tasks/APG4b_ck>

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  string S;
  cin >> S;
 
  // ここにプログラムを追記
  int count = 0;
  for (int i = 0; i < S.size(); i++){
      if (S.at(i) == '+') {
          count++;
      } else if (S.at(i) == '-') {
          count--;
      }
  }
  cout << count+1 << endl;

}

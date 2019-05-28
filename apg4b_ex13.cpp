//EX13 - 平均との差 / 1.13 <https://atcoder.jp/contests/apg4b/tasks/APG4b_cj>

#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N;
  cin >> N;
  vector<int> re(N);
  int sum = 0;

  for (int i = 0; i < N; i++) {
      cin >> re.at(i);
      sum += re.at(i);
  }
  
  for (int i = 0; i < N; i++) {
      int a = sum / N - re.at(i);

      if ( a > 0) {
          cout << a << endl;
      } else {
          cout << a*(-1) << endl;
      }
  }
}

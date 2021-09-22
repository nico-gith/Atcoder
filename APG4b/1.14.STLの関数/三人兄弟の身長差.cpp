#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int hmax,hmin,delta;
//   hmax = 0;
//   hmin = 0;
//   delta = 0;

  hmin = min(min(A, B), C);
  hmax = max(max(A, B), C);

  delta = hmax - hmin;

  cout << delta << endl;
}

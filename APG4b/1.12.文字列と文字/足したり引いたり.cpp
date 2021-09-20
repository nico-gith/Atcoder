#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // ここにプログラムを追記
  int pluscount,minuscount;
  pluscount = 0;
  minuscount = 0;

  for (int i = 1;i < S.size(); i += 2){
      if(S.at(i) == '+'){
          pluscount += 1;
      }
      else if(S.at(i) == '-'){
          minuscount += 1;
      }
  }
  cout << pluscount - minuscount + 1 << endl;
}


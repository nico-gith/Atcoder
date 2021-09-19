#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
 
  // ここにプログラムを追記
  int B,C;
  C = A;
  string op;

  for (int i = 0; i < N; i++){
      cin >> op >> B;
      if (op == "+"){
          C += B;
      }
      if (op == "-"){
          C -= B;
      }
      if (op == "*"){
          C *= B;
      }
      if (op == "/"){
          if (B == 0){
          cout << "error" << endl;
          break;
          }
          else{
          C /= B;
          }
      }
      cout << i + 1 << ":" << C << endl;
  }
}

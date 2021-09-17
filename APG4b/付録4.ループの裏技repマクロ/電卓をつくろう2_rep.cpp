#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main(){
  int N, A;
  cin >> N >> A;
 
  // ここにプログラムを追記
  string op;
  int B,C;
  C = A;
  rep(i, N){
      cin >> op >> B;
      if(op == "+"){
      C += B;
      }
      else if(op == "-"){
      C -= B;
      }
      else if(op == "*"){
      C *= B;
      }
      else if(op == "/"){
          if(B == 0){
              cout << "error" <<endl;
              break;
          }
          else{
              C /= B;
          }
      }
      cout << i+1 << ":" << C << endl;
  }
}

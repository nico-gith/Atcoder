#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;

  vector<int> vec(N);
  int sum,ave;
  sum = 0;
  ave = 0;
  
  for (int i = 0;i < N; i++){
      cin >> vec.at(i);
      sum += vec.at(i);
  }

  ave = sum / N;

  for (int i = 0;i < N; i++){
      if(ave >= vec.at(i)){
          cout << ave - vec.at(i) << endl;
      }
      else{
          cout << vec.at(i) - ave << endl;
      } 
  }
}


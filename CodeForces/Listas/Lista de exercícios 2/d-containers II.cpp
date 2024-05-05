#include <bits/stdc++.h>

// #define llint long long int
// #define desync ios::sync_with_stdio(false)
// g++ script.cpp -std=c++17 -o exec
// \n

using namespace std;
 
int main(){
  char container;
  stack<char> porto;
  stack<char> temp;
  vector<stack<char>> pilhas;
  pilhas.push_back(porto);

  while(scanf("%c",&container) != -1){
    if(container >= 65 && container <= 90){
      porto.push(container);
    }
  }

  return 0;
}

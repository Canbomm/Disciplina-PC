#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
 
  int t,n,num;
  cin >> t;
 
  for(int ind = 0; ind < t;ind++){
    string resposta = "YES";
    cin >> n;
    vector<int> numeros;
    set<int> unicos;
 
    for(int jind = 0; jind < n;jind++){
      cin >> num;
      numeros.push_back(num);
      unicos.insert(num);
      if(numeros.size() != unicos.size()){
        resposta = "NO";
      }
    }
 
    cout << resposta << "\n";
  }
  return 0;
}

#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false)

// g++ script.cpp -std=c++17 -o exec
// \n

using namespace std;
 
int main(){
  desync;

  int n_competicoes, problemas,total = 0;
  vector<int> competicoes;
  cin >> n_competicoes;
  for(int i = 0; i < n_competicoes; i++){
    cin >> problemas;
    competicoes.push_back(problemas);
  }
  
  sort(competicoes.begin(),competicoes.end());

  for(int dia = 1; dia <= n_competicoes; dia++){
    auto low1 = lower_bound(competicoes.begin(), competicoes.end(), dia);
    int pos = low1-competicoes.begin();
    if(pos >= n_competicoes){
      break;
    }
    competicoes[pos] = 0;
    total++;
  }
  cout << total << "\n";
  
  return 0;
}

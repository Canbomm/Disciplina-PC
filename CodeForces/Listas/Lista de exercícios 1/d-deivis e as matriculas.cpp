#include <bits/stdc++.h>
#define desync ios::sync_with_stdio(false)

using namespace std;

int main(){
  desync;

  int n;
  vector<string> alunos,alunos_sorted;
  string amigo,temp;
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> amigo;
    alunos.push_back(amigo);
    alunos_sorted.push_back(amigo);
  }

  sort(alunos_sorted.begin(), alunos_sorted.end()); // ordem alfabetica

  for(int i = 0;i < n;i++){
    amigo = alunos[i];
    for(int j = 0; j < n;j++){
      temp = alunos_sorted[j];
      if(amigo == temp){
        cout << j << " ";
        break;
      }
    }
  }
  cout << "\n";
  return 0;
}

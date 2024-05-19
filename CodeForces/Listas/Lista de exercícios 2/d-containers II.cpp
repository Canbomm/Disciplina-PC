#include <bits/stdc++.h>

// ios::sync_with_stdio(false);
// cin.tie(0);
// cout.tie(0);
// typedef ORIGINAL NEW;

using namespace std;

int main(){
  // Estrutura
  stack<int> containers;
  stack<int> organizando;
  // Entrada
  int aux;
  while(scanf("%c",&aux) != -1){
    if(aux >= 65 && aux <= 90){
      printf("%c -> %d\n",aux,aux-65);
      containers.push(aux-65);
    }
  }
  // Processamento

  return 0; // \n
}

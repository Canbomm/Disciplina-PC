#include <bits/stdc++.h>

using namespace std;

bool busca(int atual, int destino, vector<int>& portais, vector<bool>& visitados){
  while(atual < destino)
    atual += portais[atual-1];
  
  if(atual == destino)
    return true;
  return false;
}

int main(){
  int n,dest,aux;
  scanf("%d %d",&n,&dest);
  vector<bool> visitados(n,false);
  vector<int> portais(n,1);

  visitados[0] = true; // a partir da celula 1
  for(int i = 0; i < n-1; i++){
    scanf("%d",&aux);
    portais[i] = aux;
  }
  
  if(busca(1,dest,portais,visitados))
    printf("YES\n");
  else
    printf("NO\n");

  return 0; // \n
}

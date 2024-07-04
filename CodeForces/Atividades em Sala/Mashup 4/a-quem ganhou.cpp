// nao entendi porque essa questao estava aqui
// o tema desse mashup era pra ser de DFS e BFS
#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t,pedro,aux,frente;
  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    scanf("%d",&pedro);
    frente = 0;
    for(int j = 0; j < 3; j++){
      scanf("%d",&aux);
      if(aux > pedro)
        frente++;
    }
    printf("%d\n",frente);
  }
  return 0;
}

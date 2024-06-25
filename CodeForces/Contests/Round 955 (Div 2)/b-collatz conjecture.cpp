// Ta errado e nao deu pra dar submit
#include <bits/stdc++.h>

using namespace std;

map<int,int> calculados;
int comeco,tamanho,inicio;

void necessarios(int x, int y){
  map<int,int> passos;
  int start,ciclos = 0;
  while(!calculados.count(x)){
    passos[x] = ciclos;
    start = x;
    x++;
    while(x%y == 0)
      x = x/y;
    calculados[start] = x;
    ciclos++;
  }
  inicio = x;
  comeco = passos[x];
  tamanho = ciclos - comeco;
}

int main(){
  int t,x,y,k;
  int ciclo;

  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    scanf("%d %d %d",&x,&y,&k);
    
    necessarios(x,y);
    
    if(k > comeco)
      k = (k-comeco)%tamanho;
    
    for(int j = 0; j < k; j++)
      x = calculados[x];
    
    printf("%d\n",x);
    calculados.clear();
  }
  return 0; // \n
}

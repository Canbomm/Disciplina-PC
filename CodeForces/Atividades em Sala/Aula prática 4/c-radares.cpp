// CODIGO ESTA ERRADO
#include <bits/stdc++.h>
 
using namespace std;
typedef long long int llint;
 
int main(){
  int n,t,max,esq,dir,med; // esq -> esquerda, dir -> direita, med -> media
  scanf("%d %d %d",&n,&t,&max);
  vector<int> rodovia(n+2,0);
  for(int i = 0; i < t; i++){
    scanf("%d %d %d",&esq,&dir,&med);
    if(med >= max){
      rodovia[esq] += 1;
      rodovia[dir+1] -= 1;
    }
  }
 
  vector<llint> infracoes(n+1,0);
  int maior = 0;
  int comprimento = 0;
  int maiorcomp = -1;
  for(int i = 1; i < n+1; i++){
    infracoes[i] = infracoes[i-1] + rodovia[i];
    if(infracoes[i] > maior){
      maior = infracoes[i];
      comprimento = 0;
      comprimento++;
    }
    else if(infracoes[i] == maior){
      comprimento++;
    }
    else{
      if(maiorcomp < comprimento)
        maiorcomp = comprimento;
      comprimento = 0;
    }
  }
  printf("%d\n",maiorcomp);
  return 0;
}

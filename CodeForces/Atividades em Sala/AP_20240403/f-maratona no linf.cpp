#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  const int valida = 3;
  int n,c; // equipes inscritas, max pessoas
  scanf("%d %d",&n,&c);
  int aux,invalidos = 0, total = 0;
  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    if(aux == valida)
      total += 1;
    else
      invalidos += aux;
  }
  int vagas = (c/valida)-total;
  int times_montaveis = invalidos/valida;
  if(vagas > times_montaveis)
    total += times_montaveis;
  else
    total += vagas;
  printf("%d\n",total);
  
  return 0; // \n
}

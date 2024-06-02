#include <bits/stdc++.h>
// Incompleto

using namespace std;

void addMapa(map<int,int> &mapa, int chave){
  if(mapa.count(chave))
    mapa[chave]++;
  else
    mapa[chave] = 1;
}

void subMapa(map<int,int> &mapa, int chave){
  mapa[chave]--;
  if(mapa[chave] == 0)
    mapa.erase(chave);
}

void printMapa(map<int,int> &mapa){
  for(auto& p : mapa){
    printf("{%d:%d} ",p.first,p.second);
  }
  printf("\n");
}

int main(){
  int n,opA,opB;
  scanf("%d %d %d",&n,&opA,&opB);
  map<int, int> mapa;
  vector<int> arrayA(n);

  int aux,diferenca;
  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    arrayA[i] = aux;
  }
  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    diferenca = abs(arrayA[i] - aux);
    addMapa(mapa,diferenca);
  }

  // realizando operacoes
  int iguais = min(opA,opB); // vou tentar aproximar dos dois lados
  int indicador;
  for(int i = 0; i < max(opA,opB); i++){
    if(i < iguais)
      indicador = 2; // aproxima pelos dois lados
    else
      indicador = 1; // aproxima por apenas um lado

    diferenca = mapa.rbegin()->first;
    if(diferenca == 0 && indicador == 1){
      subMapa(mapa,diferenca);
      addMapa(mapa,indicador); // quebra a harmonia
    }
    else if(diferenca == 1){
      if(mapa.rbegin()->second > 1){
        subMapa(mapa,diferenca);
        if(indicador == 2)
          subMapa(mapa,diferenca);
        addMapa(mapa,0);
      }
      else if(indicador == 1 && mapa.rbegin()->second == 1){
        subMapa(mapa,diferenca);
        addMapa(mapa,0);
      }
    }
    else if(diferenca > 1){
      subMapa(mapa,diferenca);
      diferenca = abs(diferenca-indicador);
      addMapa(mapa,diferenca);
    }
  }

  long long int minimo = 0;
  for(auto& p : mapa){
    minimo += p.second*(p.first*p.first);
  }
  printf("%lld\n",minimo);

  return 0; // \n
}

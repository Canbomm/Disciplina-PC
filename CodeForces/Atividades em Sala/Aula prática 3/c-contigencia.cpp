#include <bits/stdc++.h>

using namespace std;

int testa_m(set<int> regioes, int passo){
  set<int>::iterator it = regioes.begin();
  set<int>::iterator treze,aux;
  //printf("---- Passo %d -----\n",passo);
  while(!regioes.empty()){
    treze = regioes.find(13);
    //printf("Size:%d! Treze:%d, It:%d\n",(int) regioes.size(),*treze,*it);
    if(treze == it && regioes.size() > 1)
      return -1;
    aux = it;
    // avanca o iterator !! PROBLEMA !!
    //printf("Avançando iterator: %d ",*it);
    for(int i = 0; i < passo; i++){
      it++;
      if(it == regioes.end()){
        it = regioes.begin(); // volta pro comeco
        if(it == aux)
          it++;
      }
      if(it == aux){
        it++;
        if(it == regioes.end())
          it = regioes.begin();
      }
      //printf("%d ",*it);
    }
    //printf("\n");
    regioes.erase(aux);
  }
  return passo;
}

int main(){
  set<int> regioes;
  int n;
  scanf("%d",&n);
  for(int i = 1; i <= n; i++){
    regioes.insert(i);
  }
  
  int m,teste = 1;
  do{
    m = testa_m(regioes,teste);
    teste++;
  }while(m == -1);

  printf("%d\n",m);

  return 0; // \n
}

#include <bits/stdc++.h>
// Esse codigo ficou muito feio kkkkkkk

int main(){
  int atual,bonito = -1; // ano atual, ano bonito
  int milhar,centena,dezena,unidade;
  scanf("%d",&atual);
  for(int i = atual+1; i < 10000; i++){
    // o ano so vai ate 9999
    int unidade = i%10;
    int dezena = (i%100-unidade)/10;
    int centena = (i%1000-dezena)/100;
    int milhar = (i%10000-centena)/1000;
    if(unidade != milhar && unidade != centena && unidade != dezena){
      if(dezena != milhar && dezena != centena){
        if(centena != milhar){
          bonito = i;
          break;
        }
      }
    }
  }
  if(bonito < 0){
    bonito = 10234;
  }
  printf("%d\n",bonito);
  return 0;
}

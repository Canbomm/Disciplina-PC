#include <bits/stdc++.h>
 
using namespace std;
 
int MDC(int a, int b){
  // Algoritmo de Euclides
  if(a == b)
    return a;
 
  int div = max(a,b);
  int divisor = min(a,b);
  int aux;
  while(div%divisor != 0){
    aux = divisor;
    divisor = div%divisor;
    div = aux;
  }
  return divisor;
}
 
int main(){
  int doce,sal,fit;
  scanf("%d %d %d",&doce,&sal,&fit);
  int teste = MDC(MDC(doce,sal),MDC(sal,fit));
  printf("%d\n",teste);
  return 0; // \n
}

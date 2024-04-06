#include <bits/stdc++.h>
// \n
// scanf("%d",&a);
// printf("%d\n",a);
// g++ script.cpp -std=c++17 -o exec
 
int main(){
  int altura,largura,col1,col2;
  long long int azulejos;
  scanf("%d %d",&altura,&largura);

  // Calculando colunas
  if(altura%2==0){
    col1 = altura/2;
  }
  else{
    col1 = altura/2 + 1;
  }
  col2 = altura/2;

  // Calculando tudo
  if(largura%2==0){
    azulejos = (long long int)(col1+col2)*(largura/2);
  }
  else{
    azulejos = (long long int)(col1+col2)*(largura/2);
    azulejos = azulejos + col1;
  }
  printf("%lld\n",azulejos);
  return 0;
}

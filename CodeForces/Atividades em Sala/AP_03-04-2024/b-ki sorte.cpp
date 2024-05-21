#include <bits/stdc++.h>
 
using namespace std;
 
int power(int number,int base){
  if(base != 2){
    return number*power(number,base-1);
  }
  return number*number;
}
 
int main(){
  int a,b,c,sorte,premiado;
  scanf("%d %d %d",&a,&b,&c);
  int menor = 2147483647;
  for(int x = 1; x < 100; x++){
    sorte = abs(x-a) + power(abs(x-b),2) + power(abs(x-c),3);
    if(sorte < menor){
      menor = sorte;
      premiado = x;
    }
  }
  printf("%d\n",premiado);
  return 0; // \n
}

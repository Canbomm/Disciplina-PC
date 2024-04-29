#include <cstdio>

int soma_digitos(int num){
  int soma = 0;
  if(num >= 10)
    soma = soma + soma_digitos(num / 10);
  soma = soma + (num % 10);
  return soma;
}
 
int main(){
  int n,a,b,soma,total = 0;
  scanf("%d %d %d",&n,&a,&b);

  for(int i = 1; i <= n; i++){
    soma = soma_digitos(i);
    if(soma >= a && soma <= b){
      total = total + i;
    }
  }
  printf("%d\n",total);
  return 0;
}

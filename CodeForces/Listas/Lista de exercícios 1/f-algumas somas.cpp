#include <bits/stdc++.h>

// #define llint long long int
// #define desync ios::sync_with_stdio(false)
// g++ script.cpp -std=c++17 -o exec
// \n

using namespace std;

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
    for(int j = i; j <= n; j++){
      soma = soma_digitos(i);
      if(soma >= a && soma <= b){
        total++;
      }
      soma = soma_digitos(j);
      if(soma >= a && soma <= b){
        total++;
      }
    }
  }
  printf("Resultado: %d\n",total);
  return 0;
}

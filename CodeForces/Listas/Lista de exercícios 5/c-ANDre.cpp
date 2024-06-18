#include <bits/stdc++.h>

using namespace std;

int bitsnecessarios(int n){
  int bits = 1;
  int atual = 2;
  while((atual-1) < n){
    atual = atual * 2;
    bits++;
  }
  return bits;
}

int menornum(int n){
  int bits = bitsnecessarios(n);

  int quant_1 = 0;
  for(int i = 0; i < bits; i++){
    if((n & (1 << i)) > 0)
      quant_1++; // Hamming Weight
  }

  for(int i = 1; i < quant_1; i++)
    n = n & (n - 1);

  return n-1; // prox and que iria dar 0
}

int main(){
  int t,n;
  scanf("%d",&t); // t <= 3*10^4
  for(int i = 0; i < t; i++){
    scanf("%d",&n); // n <= 10^9
    printf("%d\n",menornum(n));
  }
  return 0; // \n
}

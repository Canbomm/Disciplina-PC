#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int n, valor,atual = 0,min = 0;
  scanf("%d %d",&n,&valor);
  for(int i = n; i > 0;i=i){
    if(atual + i <= valor){
      atual = atual + i;
      min++;
    }
    else{
      i--;
    }
  }
  printf("%d\n",min);
  return 0;
}

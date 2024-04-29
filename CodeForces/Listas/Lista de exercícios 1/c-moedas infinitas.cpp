#include <bits/stdc++.h>
 
int main(){
  int yen1,objetivo;
  scanf("%d %d",&objetivo,&yen1);
  int resto = objetivo%500;
  if(resto > yen1){
    printf("Nao\n");
  }
  else{
    printf("Sim\n");
  }
  return 0;
}

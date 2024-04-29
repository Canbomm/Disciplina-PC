#include <bits/stdc++.h>
 
int min(int num1,int num2,int num3){
  int menor = num1;
  if(menor>num2){
    menor = num2;
  }
  if(menor>num3){
    menor = num3;
  }
  return menor;
}
 
int maxdc(int num1,int num2, int num3){
  int result = 1;
  int max = min(num1,num2,num3);
  for(int ind = 1;ind <= max;ind++){
    if(num1 % ind == 0 && num2 % ind == 0 && num3 % ind == 0){
      result = ind;
    }
  }
  return result;
}
 
int main(){
  int doces,salgadas,fit; // 10^9 int
  scanf("%d %d %d",&doces,&salgadas,&fit);
  int result = maxdc(doces,salgadas,fit);
  printf("%d\n",result);
    
  return 0;
}


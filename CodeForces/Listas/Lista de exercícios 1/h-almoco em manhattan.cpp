#include <bits/stdc++.h>
 
int main(){
  const int taxi = 2;
  int restaurantes,chicox,chicoy,gasto,melhorrest,maisbarato = 2147483647;
  int restx,resty,preco;
  scanf("%d %d %d",&restaurantes,&chicox,&chicoy);
  for(int i = 0; i < restaurantes; i++){
    scanf("%d %d %d",&restx,&resty,&preco);
    gasto = (abs(chicox - restx) + abs(chicoy - resty))*taxi + preco;
    if(gasto < maisbarato){
      maisbarato = gasto;
      melhorrest = i;
    }
  }
  printf("%d %d\n",maisbarato,melhorrest+1);
  return 0;
}

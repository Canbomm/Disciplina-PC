#include <bits/stdc++.h>
#define llint long long int
 
using namespace std;
// \n
// scanf("%d",&a);
// printf("%d\n",a);
// g++ script.cpp -std=c++17 -o exec
 
int main(){
  int reg_unid,reg_preco; // Regular
  int pro_unid,pro_preco; // Promocao
  int teste_reg,teste_pro;

  scanf("%d %d",&reg_unid,&reg_preco);
  scanf("%d %d",&pro_unid,&pro_preco);

  teste_reg = pro_unid*reg_preco;
  teste_pro = reg_unid*pro_preco;

  if(teste_pro < teste_reg)
    printf("Promocao\n");
  else
    printf("Enganacao\n");

  return 0;
}

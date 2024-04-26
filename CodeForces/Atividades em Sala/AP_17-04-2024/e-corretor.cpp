#include <bits/stdc++.h>
#define llint long long int
 
using namespace std;
// \n
// scanf("%d",&a);
// printf("%d\n",a);
// g++ script.cpp -std=c++17 -o exec
 
int main(){
  int questoes;
  int acertos = 0;
  double nota;
 
  scanf("%d",&questoes);
  getchar();
 
  for(int i = 0; i < questoes;i++){
    char gab,resp;
    scanf("%c %c",&gab,&resp);
    if(gab == resp)
      acertos++;
    getchar();
  }
 
  nota = (double) acertos*10/questoes;
  printf("Nota: %.2f\n",nota);
 
  return 0;
}

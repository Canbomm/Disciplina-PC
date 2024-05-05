#include <cstdio>

int mdc(int a, int b) {
  if (b == 0)
    return a;
  return mdc(b, a % b);
}

int triplo_mdc(int a, int b, int c){
  int teste1 = mdc(a,b);
  int teste2 = mdc(b,c);
  int teste3 = mdc(a,c);
}
 
int main(){
  int doces,salgadas,fit; // 10^9 int
  scanf("%d %d %d",&doces,&salgadas,&fit);
  int total = (doces+salgadas+fit);
  int teste = mdc(doces,salgadas);

  printf("Teste: %d\n",teste);

  return 0;
}


#include <bits/stdc++.h>
 
using namespace std;
 
int main (){
  set<int> criancas;
  int n,k;
  scanf("%d %d",&n,&k);
  for(int i = 1; i <= n; i++){
    criancas.insert(i);
  }
 
  set<int>::iterator lider = criancas.begin();
  set<int>::iterator it;
  int passo,aux;
  for(int i = 0; i < k; i++){
    scanf("%d",&passo);
    aux = passo%criancas.size();
    for(int j = 0; j < aux; j++){
      lider++;
      if(lider == criancas.end())
        lider = criancas.begin();
    }
    it = lider;
    printf("%d ",*it);
    lider++;
    if(lider == criancas.end())
        lider = criancas.begin();
    criancas.erase(it);
  }
  printf("\n");
  return 0;
}

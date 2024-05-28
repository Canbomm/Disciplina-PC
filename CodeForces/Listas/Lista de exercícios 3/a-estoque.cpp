#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  map<int, int> estoque;
  int q,t,m;
  scanf("%d",&q);
  for(int i = 0; i < q; i++){
    scanf("%d %d",&t,&m);
    if(t == 1){
      estoque[m] = 1; 
    }
    else{
      if(estoque.count(m))
        printf("Sim\n");
      else
        printf("Nao\n");
    }
  }
  return 0;
}

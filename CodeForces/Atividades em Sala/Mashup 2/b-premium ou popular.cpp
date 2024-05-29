#include <bits/stdc++.h>
 
using namespace std;
typedef pair<int,int> pii;
 
int main (){
  int p,n; // preco, reunioes
  scanf("%d %d",&p,&n);
  set<pii> atas;
  int aux,novo;
  pii pair;
  for(int i = 0; i < n; i++){
    scanf("%d %d",&aux,&novo);
    if(aux == 1){ // preco aumentou em novo
      pair = make_pair(i,novo);
      atas.insert(pair);
    }
    else{ // revogou ultimos "novo" aumentos
      for(int j = 0; j < novo; j++){
        pair = *(prev(atas.end()));
        atas.erase(prev(atas.end()));
      }
    }
  }
  for(auto& pair : atas){
    p += pair.second;
  }
  printf("%d\n",p);
  return 0;
}

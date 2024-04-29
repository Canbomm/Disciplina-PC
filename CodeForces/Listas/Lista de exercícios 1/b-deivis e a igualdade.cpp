#include <bits/stdc++.h>

using namespace std;
 
int main(){
  int cidadaos,temp;
  int maisrico = -1;
  int gasto = 0;
  scanf("%d",&cidadaos);
  vector<int> dinheiros;
  for(int i = 0;i < cidadaos;i++){
    scanf("%d",&temp);
    dinheiros.push_back(temp);
    if(maisrico < temp){
      maisrico = temp;
    }
  }
  for(int i = 0;i < cidadaos;i++){
    temp = dinheiros[i];
    if(temp < maisrico){
      gasto = gasto + (maisrico-temp);
    }
  }
  printf("%d\n",gasto);

  return 0;
}

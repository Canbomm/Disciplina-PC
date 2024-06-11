#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t,cubes,indfav,remove,aux,fav,lowest,biggest;
  scanf("%d",&t);
  vector<int> table;
  vector<int>::iterator ind;
  for(int i = 0; i < t; i++){
    scanf("%d %d %d",&cubes,&indfav,&remove);
    remove--; // working with indices
    indfav--;
    for(int j = 0; j < cubes; j++){
      scanf("%d",&aux);
      table.push_back(aux);
      if(j == indfav)
        fav = aux;
    }
    sort(table.begin(),table.end(), greater<int>());
 
    ind = lower_bound(table.begin(),table.end(),fav,greater<int>());
    lowest = distance(table.begin(),ind);
    ind = upper_bound(table.begin(),table.end(),fav,greater<int>())-1;
    biggest = distance(table.begin(),ind);
 
    if(lowest > remove)
      printf("No\n");
    else if(biggest <= remove)
      printf("Yes\n");
    else
      printf("Maybe\n");
    table.clear();
  }
  return 0;
}

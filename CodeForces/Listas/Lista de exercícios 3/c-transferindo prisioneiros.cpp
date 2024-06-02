#include <bits/stdc++.h>
// Incompleto

// ios::sync_with_stdio(false);
// cin.tie(0);
// cout.tie(0);
// typedef ORIGINAL NEW;

using namespace std;

int main(){
  int n,max,transferir;
  scanf("%d %d %d",&n,&max,&transferir);
  vector<int> prisioneiros;
  int aux;
  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    if(aux <= max)
      prisioneiros.push_back(aux);
  }

  printf("Prisioneiros a serem transferidos: %d\n",prisioneiros.size());

  return 0; // \n
}

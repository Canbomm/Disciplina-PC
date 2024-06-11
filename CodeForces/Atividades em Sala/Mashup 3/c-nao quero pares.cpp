#include <bits/stdc++.h>
 
using namespace std;
typedef long long int llint;
 
void printVector(vector<int> vetor){
  for(int i = 0; i < vetor.size(); i++){
    printf("%d ",vetor[i]);
  }
  printf("\n");
}
 
int main(){
  int t;
  scanf("%d",&t);
 
  int n,aux;
  set<int, greater<int>> pares;
  for(int i = 0; i < t; i++){
    scanf("%d",&n);
    for(int j = 0; j < n; j++){
      scanf("%d",&aux);
      if(aux%2 == 0)
        pares.insert(aux);
    }
    int total = 0;
    while(!pares.empty()){
      aux = (*pares.begin())/2;
      pares.erase(pares.begin());
      if(aux%2 == 0)
        pares.insert(aux);
      total++;
    }
    printf("%d\n",total);
  }
  return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
typedef pair<int,int> pii;
 
int main (){
  map<int, int> votos; // num_votos, candidatos com esse num_votos
  set<int, greater<int>> maiores;
  int n,candidato;
  scanf("%d",&n);
  int sananduva;
  scanf("%d",&sananduva); 
  votos[sananduva] = 1;
  maiores.insert(sananduva);
  for(int i = 1; i < n; i++){
    scanf("%d",&candidato);
    maiores.insert(candidato);
    if(votos.count(candidato))
      votos[candidato] += 1;
    else
      votos[candidato] = 1;
  }
 
  int comprados = 0;
  int maior = *maiores.begin();
  if(sananduva == maior && votos[maior] == 1)
    printf("%d\n",comprados);
  else{
    while(sananduva <= maior){
      votos[maior] -= 1;
      votos[maior-1] += 1;
      // printf("%d prefeitos tem %d votos\n",votos[maior],maior);
      if(votos[maior] == 0)
        maiores.erase(maior);
      maiores.insert(maior-1);
      comprados += 1;
      sananduva += 1;
      maior = *maiores.begin();
      // printf("Sananduva: %d - Maior: %d\n",sananduva,*maiores.begin());
    }
    printf("%d\n",comprados);
  }
 
  return 0;
}

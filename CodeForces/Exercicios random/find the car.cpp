// https://codeforces.com/problemset/problem/1971/E
#include <bits/stdc++.h>

// ios::sync_with_stdio(false);
// cin.tie(0);
// cout.tie(0);
// typedef ORIGINAL NEW;

using namespace std;

int main(){
  // Estrutura
  vector<int> distancias;
  vector<int> tempos;
  // Entrada
  int t;
  scanf("%d",&t);
  int n,k,q; // destino final, conhecido, consultas
  // Processamento
  int aux,ind,resposta;
  int distancia,tempo;
  double velocidade;
  vector<int>::iterator it;
  for(int i = 0; i < t; i++){
    scanf("%d %d %d",&n,&k,&q);
    for(int j = 0; j < k; j++){
      scanf("%d",&aux);
      distancias.push_back(aux);
    }
    for(int j = 0; j < k; j++){
      scanf("%d",&aux);
      tempos.push_back(aux);
    }
    for(int j = 0; j < q; j++){
      scanf("%d\n",&aux);
      if(aux == n)
        printf("Ultimo: %d\n",tempos[k-1]);
      else{
      it = lower_bound(distancias.begin(),distancias.end(),aux);
      ind = distance(distancias.begin(),it);
      distancia = distancias[ind+1] - distancias[ind];
      tempo = tempos[ind+1] - tempos[ind];
      velocidade = distancia/tempo;
      resposta = ((aux-distancias[ind])/velocidade) + tempos[ind];
      printf("Calculado: %d\n",resposta);
      }
    }
    printf("Mudei!\n");
  }
  return 0; // \n
}

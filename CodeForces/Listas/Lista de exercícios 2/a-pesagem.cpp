#include <bits/stdc++.h>

using namespace std;
 
int main(){
  int max_peso; // peso em kg
  int fator_f; // amostragem de F em F
  int caminhoes; // total de caminhoes
  int t_total = 0; // tempo total gasto
  const int descarte = 2; // 2kg descartados caso passem do limite
  const int t_direto = 1; // tempo gasto quando um veiculo nao e abordado
  const int t_honesto = 5; // veiculo abordado, mas dentro do limite
  const int t_desonesto = 10; // veiculo abordado, mas fora do limite
  queue<int> pesos; // pesos dos caminhoes
  int peso; // peso de um caminhao
  int indice = 1; // usado junto com o fator
  int prox_indice = 1; // usado junto com o fator

  scanf("%d %d %d",&caminhoes,&fator_f,&max_peso);
  for(int i = 0; i < caminhoes; i++){
    scanf("%d",&peso);
    pesos.push(peso);
  }

  while(!pesos.empty()){
    if(indice == prox_indice){
      prox_indice += fator_f;
      indice++;
      peso = pesos.front();
      pesos.pop();
      if(peso > max_peso){
        t_total += t_desonesto;
        peso -= descarte;
        pesos.push(peso);
      }
      else{
        t_total += t_honesto;
      }
    }
    else{
      pesos.pop();
      t_total += t_direto;
      indice++;
    }
  };

  printf("%d\n",t_total);

  return 0;
}

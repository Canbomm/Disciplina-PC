#include <bits/stdc++.h>

using namespace std;
typedef tuple<int, int, int> cashier; // identificador, processamento, prox disponibilidade

class comparator{
	public:
		bool operator()(cashier a, cashier b){
      if(get<2>(b) < get<2>(a)){
				return true; // caixa livre primeiro
      }
      else if(get<2>(b) == get<2>(a) && get<0>(b) < get<0>(a)){
        return true; // menor identificador
      }
			return false;
		}
};

int main(){
  // Estrutura
  int n,m; // numero de caixas e clientes
  cashier caixa;
  priority_queue<cashier, vector<cashier>, comparator> caixas;
  queue<int> clientes;

  // Entrada
  int aux;
  scanf("%d %d",&n,&m);
  for(int i = 1; i <= n; i++){
    scanf("%d",&aux);
    caixa = make_tuple(i,aux,0);
    caixas.push(caixa);
  }
  for(int i = 1; i <= m; i++){
    scanf("%d",&aux);
    clientes.push(aux);
  }

  // Processamento
  int tempo = -1;
  while(!clientes.empty()){
    // Atendendo o cliente
    aux = clientes.front();
    clientes.pop();
    caixa = caixas.top();
    caixas.pop();
    // Atualizando disponibilidade do caixa
    caixa = make_tuple(get<0>(caixa),get<1>(caixa),get<2>(caixa)+get<1>(caixa)*aux);
    caixas.push(caixa);
    // O tempo vai ser o do caixa que demorar mais
    if(tempo < get<2>(caixa)){
      tempo = get<2>(caixa);
    }
  }
  printf("%d\n",tempo);

  return 0; // \n
}

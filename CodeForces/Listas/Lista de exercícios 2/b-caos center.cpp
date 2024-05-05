#include <bits/stdc++.h>

// #define llint long long int
// #define desync ios::sync_with_stdio(false)
// g++ script.cpp -std=c++17 -o exec
// \n

using namespace std;
 
int main(){
  int total; // total de clientes
  int tempo; // tempo total gasto pelo operador
  int minutos; // tempo que demora pra resolver o problema
  int paciencia; // tempo que o cliente aguenta esperar
  int retorno; // tempo de retorno ate outra ligacao
  int disponivel = 0; // tempo que o cliente voltara
  tuple <int, int, int, int> cliente;
  queue<tuple <int, int, int, int>> clientes;

  scanf("%d",&total);
  for(int i = 0; i < total; i++){
    scanf("%d %d %d",&minutos,&paciencia,&retorno);
    cliente = make_tuple(minutos,paciencia,retorno,disponivel);
    clientes.push(cliente);
  }

  cliente = clientes.front();
  clientes.pop();
  tempo = get<0>(cliente); // sempre vai atender o 1 cliente da fila

  int esperando = 0;
  while(!clientes.empty()){
    cliente = clientes.front();
    clientes.pop();
    minutos = get<0>(cliente);
    paciencia = get<1>(cliente);
    retorno = get<2>(cliente);
    disponivel = get<3>(cliente);
    printf("Cliente: (%d %d %d %d) __ ",minutos,paciencia,retorno,disponivel);

    if(tempo > disponivel && tempo <= (disponivel+paciencia)){
      printf("Saiu da fila\n");
      esperando = 0;
      tempo += minutos;
    }
    else if(((int) clientes.size()) == esperando){
      printf("Entrou no else if - %d == %d\n",((int) clientes.size()),esperando);
      disponivel += paciencia + retorno;
      tempo = disponivel + 1;
      cliente = make_tuple(minutos,paciencia,retorno,disponivel);
      clientes.push(cliente);
    }
    else{
      printf("%d == %d\n",((int) clientes.size()),esperando);
      disponivel += paciencia + retorno;
      cliente = make_tuple(minutos,paciencia,retorno,disponivel);
      clientes.push(cliente);
      esperando += 1;
    }
  }

  printf("%d\n",tempo);

  return 0;
}

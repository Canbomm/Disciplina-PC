#include <bits/stdc++.h>

// #define llint long long int
// #define desync ios::sync_with_stdio(false)
// g++ script.cpp -std=c++17 -o exec
// \n

using namespace std;

int main(){
  int n,tempo=0;
  scanf("%d\n",&n);

  queue<tuple<int,int,int,int>> clientes;
  tuple<int,int,int,int> cliente;
  int t,p,r,cmax,cmin;
  for(int ind=0;ind < n;ind++){
    scanf("%d %d %d",&t,&p,&r);
    cliente = make_tuple(t,p+r,p,0);
    clientes.push(cliente);
  }

  int total = 0;
  while(!clientes.empty()){
    cliente = clientes.front();
    clientes.pop();

    t = get<0>(cliente);
    p = get<1>(cliente);
    cmax = get<2>(cliente);
    cmin = get<3>(cliente);
    printf("Fila: %d, tempo: %d, cliente: (%d %d %d %d) status: ",(int) clientes.size()+1,tempo,t,p,cmax,cmin);
    if(tempo > cmax || tempo < cmin && total != (int) clientes.size()+1){
      // cliente nao disponivel
      printf("cliente nao disponivel\n");
      cmax += p;
      cmin += p;
      cliente = make_tuple(t,p,cmax,cmin);
      clientes.push(cliente);
      total += 1;
    }
    else if(tempo > cmax || tempo < cmin && total == (int) clientes.size()+1){
      // operador tem que esperar
      printf("operador esperando\n");
      tempo = cmin + t;
      total = 0;
    }
    else{
      // cliente atendido
      printf("cliente atendido\n");
      total = 0;
      tempo += t;
    }
  }
  printf("Tempo total: %d\n",tempo);

  return 0;
}

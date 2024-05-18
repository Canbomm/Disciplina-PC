#include <bits/stdc++.h>

using namespace std;
typedef tuple<int, int, int, int, int> client; // i, t, p + r, max, min (5 var)

class comparator{
  public:
    bool operator()(client a, client b){
      int ai,at,apr,amax,amin;
      int bi,bt,bpr,bmax,bmin;
      tie(ai,at,apr,amax,amin) = a;
      tie(bi,bt,bpr,bmax,bmin) = b;
      if(bmin < amin)
        return true;
      else if(bmin == amin){
        if(bi < ai)
          return true;
      }
      return false;
    }
};
 
int main(){
  // Estrutura
  client cliente;
  priority_queue<client, vector<client>, comparator> clientes;

  // Entrada
  int n,t,p,r,max,min;
  scanf("%d",&n);
  for(int i = 1; i <= n; i++){
    scanf("%d %d %d",&t,&p,&r);
    // printf("Entrada: (%d %d %d)\n",t,p,r);
    cliente = make_tuple(i,t,p+r,p,0);
    clientes.push(cliente);
  }

  // Processamento
  int i,pr, tempo = 0;
  while(!clientes.empty()){
    cliente = clientes.top();
    clientes.pop();
    tie(i,t,pr,max,min) = cliente;
    // printf("Cliente %d: (%d %d), %d>t>%d\n",i,t,pr,max,min);
    if(max >= tempo && tempo >= min){
      // cliente disponivel
      tempo += t;
    }
    else if(min >= tempo){
      // operador tem que esperar
      tempo = min + t;
    }
    else{
      // cliente indisponivel
      cliente = make_tuple(i,t,pr,max+pr,min+pr);
      clientes.push(cliente);
    }
  }
  printf("%d\n",tempo);

  return 0; // \n
}

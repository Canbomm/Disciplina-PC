#include <bits/stdc++.h>
 
using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  int filhote,adulto,rei,consumo,inimigos; // F,A,R
  // tabela ascii: {F:70} {A:65} {R:82}
  string ordem;
 
  cin >> filhote >> adulto >> rei;
  cin >> consumo >> inimigos;
  cin >> ordem;
 
  map<char,int> cupins;
  cupins['F'] = filhote;
  cupins['A'] = adulto;
  cupins['R'] = rei;
 
  int cupim,total = 0;
  vector<int> tamanduas(inimigos,consumo);
  for(int i = 0; i < inimigos; i++){
    cupim = cupins[ordem[i]];
    for(int j = 0; j < inimigos; j++){
      if(tamanduas[j] >= cupim){
        tamanduas[j] -= cupim;
        if(j > total)
          total = j;
        break;
      }
    }
  }
  cout << total+1 << "\n";
  return 0;
}

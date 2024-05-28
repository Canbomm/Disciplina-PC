#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  map<int, int> tradutor;
  string teclado;
  string pressionado;
  
  getline(cin,teclado);
  getline(cin,pressionado);
  
  for(int i = 0; i < 26; i++){
    tradutor[teclado[i]] = pressionado[i];
    tradutor[teclado[i]-32] = pressionado[i]-32;
  }
  for(int i = 48; i < 58; i++){ // numeros na tabela ASCII
    tradutor[i] = i;
  }
  
  int n;
  string traduzir;
  cin >> n;
  getline(cin, teclado); // limpando buffer
  for(int i = 0; i < n; i++){
    getline(cin, traduzir);
    for(int j = 0; j < traduzir.size(); j++){
      cout  << (char) tradutor[traduzir[j]];
    }
    cout << "\n";
  }
 
  return 0;
}

#include <bits/stdc++.h>
/* 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
*/
 
using namespace std;
 
int main(){
  int tamanho;
  scanf("%d",&tamanho);
  queue<char> presente;
  char parentese;
  string resposta = "Yes";
 
  getchar();
  for(int ind = 0; ind < tamanho; ind++){
    scanf("%c",&parentese);
    presente.push(parentese);
  }
 
  int abridos = 0,fechados = 0;
  int trocas = 0;
  while(!presente.empty()){
    parentese = presente.front();
    presente.pop();
    if(parentese == '('){
      abridos += 1;
    }
    else{
      if(abridos < fechados)
        resposta = "No";
      fechados += 1;
    }
  }
  if(abridos != fechados){
    resposta = "No";
  }
 
  printf("%s\n",resposta.c_str());
  return 0;
}

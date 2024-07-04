#include <bits/stdc++.h>
 
using namespace std;
typedef pair<int,int> pii;
 
const int maxsize = 12;
char bolo[maxsize][maxsize];
bool visitados[maxsize][maxsize];
 
void resetaBolo(){
  for(int i = 0; i < maxsize; i++){
    for(int j = 0; j < maxsize; j++){
      bolo[i][j] = 'L';
      visitados[i][j] = false;
    }
  }
}
 
 
int bfs(int r, int c){
  int comidosl = 0;
  int comidosr = 0;
  int linha, coluna;
  int x,y;
 
  // explorando linhas
  coluna = 1;
  for(linha = 1; linha <= r; linha++){
    if(bolo[linha][coluna] == '.'){
      priority_queue<pii> explorar;
      
      explorar.push({linha,coluna});
      
      while(!explorar.empty()){
        tie(x,y) = explorar.top();
        explorar.pop();
 
        if(bolo[x][y+1] == 'S'){
          y = 0;
          break;
        }
 
        if(bolo[x][y+1] == '.')
          explorar.push({x,y+1});
      }
      
      if(y > 0){
        for(int j = 0; j < maxsize; j++)
          visitados[linha][j] = true;
      }
      comidosl += y;
    }
  }
 
  // Explorando colunas
  linha = 1;
  for(coluna = 1; coluna <= c; coluna++){
    if(bolo[linha][coluna] == '.'){
      comidosr = 0;
      priority_queue<pii> explorar;
      
      explorar.push({linha,coluna});
      
      while(!explorar.empty()){
        tie(x,y) = explorar.top();
        explorar.pop();
        if(!visitados[x][y])
          comidosr++;
 
        visitados[x][y] = true;
 
        if(bolo[x+1][y] == 'S'){
          comidosr = 0;
          break;
        }
 
        if(bolo[x+1][y] == '.')
          explorar.push({x+1,y});
      }
      comidosl += comidosr;
    }
  }
 
  return comidosl;
}
 
int main(){
  int row,column;
  char fatia;
 
  scanf("%d %d",&row,&column);
  getchar(); // buffer
 
  resetaBolo();
  for(int i = 1; i <= row; i++){
    for(int j = 1; j <= column; j++){
      scanf("%c",&fatia);
      bolo[i][j] = fatia;
    }
    getchar();
  }
 
  printf("%d\n",bfs(row,column));
 
  return 0;
}

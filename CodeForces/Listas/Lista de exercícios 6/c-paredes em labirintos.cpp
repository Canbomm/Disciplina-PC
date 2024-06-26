// Extremamente ineficiente
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pii;

const int max_size = 502;
char mapa[max_size][max_size];
bool visitados[max_size][max_size];

void resetaMapa(int n, int m){
  for(int i = 0; i < n+2; i++){
    for(int j = 0; j < m+2; j++)
      mapa[i][j] = '#';
  }
}

void resetaVisitados(int n, int m){
  for(int i = 0; i < n+2; i++){
    for(int j = 0; j < m+2; j++){
      visitados[i][j] = false;
    }
  }
}

void printMapa(int n, int m){
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      printf("%c",mapa[i][j]);
    }
    printf("\n");
  }
}

bool contaGrupos(int n, int m){
  int grupos = 0;
  queue<pii> atual;
  int x,y;
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      if(mapa[i][j] == '.' && !visitados[i][j]){
        grupos++;
        if(grupos > 1)
          return false;
        visitados[i][j] = true;
        atual.push({i,j});
        while(!atual.empty()){
          tie(x,y) = atual.front();
          atual.pop();
          if(mapa[x+1][y] == '.' && !visitados[x+1][y]){
            atual.push({x+1,y});
            visitados[x+1][y] = true;
          }
          if(mapa[x-1][y] == '.' && !visitados[x-1][y]){
            atual.push({x-1,y});
            visitados[x-1][y] = true;
          }
          if(mapa[x][y+1] == '.' && !visitados[x][y+1]){
            atual.push({x,y+1});
            visitados[x][y+1] = true;
          }
          if(mapa[x][y-1] == '.' && !visitados[x][y-1]){
            atual.push({x,y-1});
            visitados[x][y-1] = true;
          }
        }
      }
    }
  }
  return true;
}

void pareda(int n, int m, int k){
  while(k > 0){
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= m; j++){
        if(mapa[i][j] == '.'){
          mapa[i][j] = 'X';
          if(!contaGrupos(n,m)){
            mapa[i][j] = '.';
          }
          else{
            k--;
            if(k < 1)
              return;
          }
          resetaVisitados(n,m);
        }
      }
    }
  }
}

int main(){
  int n,m,k;
  char aux;
  scanf("%d %d %d",&n,&m,&k);
  getchar();
  
  resetaMapa(n,m);
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= m; j++){
      scanf("%c",&aux);
      mapa[i][j] = aux;
    }
    getchar();
  }

  pareda(n,m,k);

  printMapa(n,m);

  return 0; // \n
}

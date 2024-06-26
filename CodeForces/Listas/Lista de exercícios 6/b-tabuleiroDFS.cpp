// Nao funciona
#include <bits/stdc++.h>

using namespace std;

char tabuleiro[102][102];
map<char,char> inverso;
int problemas = 0;

void printTabuleiro(int lin, int col){
  for(int i = 1; i <= lin; i++){
    for(int j = 1; j <= col; j++)
      printf("%c",tabuleiro[i][j]);
    printf("\n");
  }
}

void resetaTabuleiro(){
  for(int i = 0; i < 102; i++){
    for(int j = 0; j < 102; j++)
      tabuleiro[i][j] = '-';
  }
}

bool verifica(int lin, int col, char peca){
  // cima
  if(tabuleiro[lin-1][col] == peca)
    return false;
  // baixo
  if(tabuleiro[lin+1][col] == peca)
    return false;
  // esquerda
  if(tabuleiro[lin][col-1] == peca)
    return false;
  // direita
  if(tabuleiro[lin][col+1] == peca)
    return false;
  return true;
}

void dfs(int lin, int col,int posX, int posY, char tentativa){
  char peca;
  for(int i = posX; i <= lin; i++){
    for(int j = posY; j <= col; j++){
      peca = tabuleiro[i][j];
      if(peca == '.'){
        tabuleiro[i][j] = tentativa;
        if(!verifica(i,j,tentativa)){
          problemas++;
          tabuleiro[i][j] = '.';
          if(problemas < 1)
            dfs(lin,col,i,j,inverso[tentativa]);
          else{
            problemas = 0;
            return;
          }
        }
      }
    }
  }
}

int main(){
  inverso['B'] = 'W';
  inverso['W'] = 'B';

  int lin,col; // linha e coluna
  char peca;
  scanf("%d %d",&lin,&col);
  getchar();
  
  resetaTabuleiro();
  for(int i = 1; i <= lin; i++){
    for(int j = 1; j <= col; j++){
      scanf("%c",&peca);
      tabuleiro[i][j] = peca;
    }
    getchar();
  }
  
  dfs(lin,col,1,1,'B');
  
  printTabuleiro(lin,col);
  return 0; // \n
}

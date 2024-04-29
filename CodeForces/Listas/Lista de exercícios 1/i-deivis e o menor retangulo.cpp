#include <bits/stdc++.h>
 
int main(){
  int linhas,colunas,temp; // max (ambas) = 10
  scanf("%d %d",&linhas,&colunas);
  int cima = 15,baixo = -15,esquerda = 15,direita = -15; // lados do retangulo, menor J = cima, maior J = baixo

  for(int i = 0; i < linhas;i++){
    for(int j = 0; j < colunas;j++){
      scanf("%1d",&temp);
      if(temp == 1){
        if(j < esquerda){
          esquerda = j;
        }
        if(j > direita){
          direita = j;
        }
        if(i < cima){
          cima = i;
        }
        if(i > baixo){
          baixo = i;
        }
      }
    }
  }

  // adicionando UM a tudo, pra ir de indice pra posicao
  cima++;
  baixo++;
  esquerda++;
  direita++;

  if(cima > 9){
    printf("0x0\n"); // nao tem nenhum 1 na matriz
  }
  else{
    int vertical = baixo - cima + 1; // +1 pois eu quero a distancia
    int horizontal = direita - esquerda + 1; // mesma logica acima
    printf("%dx%d\n",horizontal,vertical);
  }
  return 0;
}

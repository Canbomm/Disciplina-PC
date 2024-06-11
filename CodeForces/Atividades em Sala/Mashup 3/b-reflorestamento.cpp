#include <bits/stdc++.h>
 
using namespace std;
typedef long long int llint;
 
void printVector(vector<int> vetor){
  for(int i = 0; i < vetor.size(); i++){
    printf("%d ",vetor[i]);
  }
  printf("\n");
}
 
int main(){
  int regioes,especies,queries;
  int left,right,x,muda;
 
  scanf("%d %d %d",&regioes,&especies,&queries);
 
  vector<int> original; // arvores de cada regiao
  vector<llint> plantadas(regioes+1,0);
 
  for(int i = 0; i < regioes; i++){
    scanf("%d",&left); // left esta sendo usada como aux
    original.push_back(left);
  }
 
  for(int i = 0; i < queries; i++){
    scanf("%d %d %d %d",&left,&right,&x,&muda);
    left--; // pos -> indice
    right--; // pos -> indice
    if(1 <= muda && muda <= 5){
      // especie nativa
      plantadas[left] += x;
      plantadas[right+1] -= x;
    }
  }
 
  vector<llint> psum(regioes+1,0);
  for(int i = 1; i <= regioes; i++){
    psum[i] = psum[i-1] + plantadas[i-1];
    original[i-1] += psum[i];
  }
  printVector(original);
  
  return 0;
}

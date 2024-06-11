#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  map<char,int> problems;
  int t,bank,rounds,needed;
  char aux;
  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    needed = 0;
    scanf("%d %d",&bank,&rounds);
    getchar();
    for(int j = 0; j < bank; j++){
      scanf("%c",&aux);
      if(problems.count(aux))
        problems[aux]++;
      else
        problems[aux] = 1;
    }
    for(char j = 65; j <= 71; j++){
      // 65 = A
      // 71 = G
      if(problems.count(j)){
        aux = (rounds - problems[j]);
        if(aux > 0)
          needed += aux;
      }
      else
        needed += rounds;
    }
    printf("%d\n",needed);
    problems.clear();
  }
  return 0;
}

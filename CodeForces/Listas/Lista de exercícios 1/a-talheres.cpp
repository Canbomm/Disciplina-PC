#include <bits/stdc++.h>

int menorval(int primeiro, int segundo){
  if(primeiro > segundo){
    return segundo;
  }
  return primeiro;
}
 
int main(){
  int pessoas,garfos,facas,colheres; // um par de garfo e faca OU uma colher
  int buffet = 0;

  scanf("%d %d %d %d",&pessoas,&garfos,&facas,&colheres);
  buffet = buffet + menorval(garfos,facas) + colheres;

  buffet = menorval(buffet,pessoas);

  printf("%d\n",buffet);
  return 0;
}

#include <cstdio>

char winner(int a, int b){
  if(a > b)
    return 'x';
  return 'y';
}

int main(){
  int t,sx,ex,sy,ey; // s = start; e = end
  char winning;

  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    scanf("%d %d",&sx,&sy);
    winning = winner(sx,sy);

    scanf("%d %d",&ex,&ey);
    if(winning == winner(ex,ey))
      printf("YES\n");
    else
      printf("NO\n");
  }
  
  return 0; // \n
}

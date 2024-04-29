#include <cstdio>
 
int main(){
  int t;
  long long int x,y;
  scanf("%d",&t);
  for(int i = 0; i < t;i++){
    scanf("%lld %lld",&x,&y);
    if((x-y) == 1)
      printf("NO\n");
    else
      printf("YES\n");
  }
  return 0;
}

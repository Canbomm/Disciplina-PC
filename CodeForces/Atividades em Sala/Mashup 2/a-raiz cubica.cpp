// essa daqui foi upsolving
#include <bits/stdc++.h>

using namespace std;
typedef long long int llint;

llint cube (llint number){
  return number*number*number;
}

int main(){
  llint n;
  scanf("%lld",&n);
  llint raiz = 0;
  while(cube(raiz) < n)
    raiz++;
  if(cube(raiz) == n)
    printf("%lld\n",raiz);
  else
    printf("-1\n");

  return 0; // \n
}

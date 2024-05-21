#include <iostream>

int main(){
  long long int n;
  scanf("%lld", &n);
  while(n % 2 ==0)
    n = (n/2);
  printf("%lld\n",n);
  return 0;
}

#include <bits/stdc++.h>
#define llint long long int
// \n
// scanf("%d",&a);
// printf("%d\n",a);
// g++ script.cpp -std=c++17 -o exec
 
int main(){
    llint individuos;
    int result = -1;
    scanf("%lld",&individuos);
    if(individuos <= 2){
      result = 1;
    }
    else{
      for(int divisor = 2;divisor < individuos;divisor++){
          if(individuos%divisor == 0 && (individuos/divisor)%2 != 0){
              result = individuos/divisor;
          }
      }
      if(result == -1){
        result = individuos;
      }
    }
    printf("%d\n",result);

    return 0;
}

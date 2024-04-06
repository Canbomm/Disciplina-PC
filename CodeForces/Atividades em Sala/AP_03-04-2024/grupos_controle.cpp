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
    for(int divisor=2;individuos%divisor == 0 && (individuos/divisor)%2 == 0 && divisor < individuos;divisor++){
        printf("Procurando\n");
        result = individuos/divisor;
    }
    printf("%d\n",result);

    return 0;
}

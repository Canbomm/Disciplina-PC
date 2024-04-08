#include <bits/stdc++.h>
#define llint long long int
// \n
// scanf("%d",&a);
// printf("%d\n",a);
// g++ script.cpp -std=c++17 -o exec
 
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    llint total = (llint)n*m;
    llint result;
    if(total%2 == 0){
        result = (llint)total/2;
    }
    else{
        result = (llint)total/2 + 1;
    }
    printf("%lld\n",result);
    
    return 0;
}

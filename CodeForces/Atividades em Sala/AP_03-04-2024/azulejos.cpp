#include <bits/stdc++.h>
#define llint long long int
 
int main(){
    int n,m;
    std::cin >> n;
    std::cin >> m;
    llint total = (llint)n*m;
    llint result;
    if(total%2 == 0){
        result = (llint)total/2;
    }
    else{
        result = (llint)total/2 + 1;
    }
    // printf("%d",&result);
    std::cout << result << "\n";
    
    return 0;
}
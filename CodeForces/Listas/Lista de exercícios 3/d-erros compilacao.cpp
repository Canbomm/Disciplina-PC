#include <bits/stdc++.h>

// ios::sync_with_stdio(false);
// cin.tie(0);
// cout.tie(0);

using namespace std;
typedef long long int llint;

int main(){
  int n; // num erros inicial
  int aux;
  llint sum1 = 0;
  llint sum2 = 0;
  scanf("%d",&n);

  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    sum1 += aux;
  }
  for(int i = 1; i < n; i++){
    scanf("%d",&aux);
    sum2 += aux;
  }
  printf("%lld\n",sum1-sum2);
  sum1 = 0;
  for(int i = 2; i < n; i++){
    scanf("%d",&aux);
    sum1 += aux;
  }
  printf("%lld\n",sum2-sum1);

  return 0; // \n
}

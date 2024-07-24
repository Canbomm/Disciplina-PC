#include <bits/stdc++.h>
 
using namespace std;
typedef long long int llint;
typedef pair<int, int> pii;
 
void desync(){
  ios_base::sync_with_stdio(false);
  // cin.tie(nullptr); // >>
  // cout.tie(nullptr); // <<
}
 
int main(){
  int q;
  llint n;
  int op;
  scanf("%d",&q);
 
  for(int i = 0; i < q; i++){
    op = 0;
    scanf("%lld",&n);
    while(n > 1 && (n%2 == 0 || n%3 == 0 || n%5 == 0)){
      if(n%2 == 0){
        n = n/2;
        op++;
      }
      if(n%3 == 0){
        n = (2*n)/3;
        op++;
      }
      if(n%5 == 0){
        n = (4*n)/5;
        op++;
      }
    }
    if(n == 1)
      printf("%d\n",op);
    else
      printf("-1\n");
  }
 
  return 0;
}

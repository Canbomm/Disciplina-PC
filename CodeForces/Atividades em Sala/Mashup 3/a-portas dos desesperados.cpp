#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int c,aux;
  scanf("%d",&c);
  vector<int> psum(c+1,0);
  for(int i = 1; i <= c; i++){
    scanf("%d",&aux);
    psum[i] = psum[i-1] + aux;
  }
  sort(psum.begin(),psum.end());
  printf("%d\n",psum[c]+100);
  return 0;
}

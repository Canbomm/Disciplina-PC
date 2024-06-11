#include <bits/stdc++.h>

using namespace std;

int main(){
  int t,n,aux, biggest = 0;
  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    scanf("%d",&n);
    vector<int> original(n+1,0);
    vector<int> maximum(n,0);
    for(int j = 1; j <= n; j++){
      scanf("%d",&aux);
      original[j] = aux;
      biggest = max(original[j-1],original[j]);
      maximum[j-1] = biggest;
    }
    biggest = 0;
    sort(maximum.begin()+1,maximum.end()); // first element is the biggest with 0
    printf("%d\n",maximum[1]-1);

  }
  return 0; // \n
}

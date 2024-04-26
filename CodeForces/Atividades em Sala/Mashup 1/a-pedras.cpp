#include <bits/stdc++.h>
#define llint long long int
 
using namespace std;
 
int main(){
  int n, swaps = 0;
  char temp;
  vector<char> rocks;
 
  scanf("%d",&n);
  getchar();
  for(int i = 0; i < n; i++){
    scanf("%c",&temp);
    rocks.push_back(temp);
    if(i > 0 && rocks[i-1] == rocks[i])
      swaps++;
  }
  printf("%d\n",swaps);
  return 0;
}

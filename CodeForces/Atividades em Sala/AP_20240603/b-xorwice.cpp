#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t,a,b,result;
  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    scanf("%d %d",&a,&b);
    result = a^b;
    printf("%d\n",result);
  }
  return 0;
}

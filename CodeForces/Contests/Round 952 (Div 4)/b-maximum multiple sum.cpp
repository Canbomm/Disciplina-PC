#include <bits/stdc++.h>

using namespace std;

int calculatesum(int x, int n){
  int sum = 0;
  int multi = 1;
  while((x*multi) <= n){
    sum += x*multi;
    multi++;
  }
  return sum;
}

int main(){
  int t,n,sum,x=2,bigX,bigSum = -1;
  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    scanf("%d",&n);
    while(x <= n){
      sum = calculatesum(x,n);
      if (sum > bigSum){
        bigSum = sum;
        bigX = x;
      }
      x++;
    }
    printf("%d\n",bigX);
    x = 2;
    bigSum = -1;
  }
  return 0; // \n
}

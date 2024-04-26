#include <bits/stdc++.h>
#define llint long long int
 
using namespace std;
 
bool divide_primo(llint num){
  llint primo = 3;
  llint test = 3;
  while(primo <= num){
    if(num%primo == 0){
      return true;
    }
    primo = primo + 2;
    test = 3;
    while(test < primo){
      if(primo%test == 0){
        primo = primo + 2;
        test = 3;
      }
      else{
        test = test + 2;
      }
    }
  }
  return false;
}
 
int main(){
  int cases;
  llint x,y;
  scanf("%d",&cases);
  getchar();
  for(int i = 0; i < cases; i++){
    scanf("%lld %lld",&x,&y);
    llint diff = x - y;
    if(diff == 1){
      printf("NO\n");
    }
    else if(diff%2 == 0){
      printf("YES\n");
    }
    else if(divide_primo(diff)){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
    
  }
  return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
typedef long long int llint;
 
int main(){
  int minutes, tech, aux;
  scanf("%d %d",&minutes,&tech);
 
  vector<int> teorems;
  for(int i = 0; i < minutes; i++){
    scanf("%d",&aux);
    teorems.push_back(aux);
  }
 
  vector<llint> lost(minutes+1,0);
  llint written = 0;
  for(int i = 0; i < minutes; i++){
    scanf("%d",&aux);
    if(aux == 0){
      lost[i] += teorems[i];
 
      if((i+tech) > minutes)
        lost[minutes] -= teorems[i];
      else
        lost[i+tech] -= teorems[i];
    }
    else
      written += teorems[i];
  }
 
  vector<llint> psum(minutes+1,0);
  llint saved = -1;
  for(int i = 1; i <= minutes; i++){
    psum[i] = psum[i-1] + lost[i-1];
    if(psum[i] > saved)
      saved = psum[i];
  }
 
  printf("%lld\n",written+saved);
 
  return 0;
}

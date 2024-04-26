#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t;
  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    int n;
    char temp;
    scanf("%d",&n);
    vector<int> problems(26,0);
    getchar();
    int balloons = n;
    for(int j = 0; j < n;j++){
      scanf("%c",&temp);
      temp = temp - 65;
      if(problems[temp] == 0){
        balloons++;
        problems[temp] = 1;
      }
    }
    printf("%d\n",balloons);
  }
  return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
typedef pair<int, int> pii;
 
int main(){
  int n,m,clicks = 0;
  scanf("%d %d",&n,&m);
  queue<pii> mytree;
  set<int> possibilities;
  mytree.push({n,clicks});
  
  while(!mytree.empty()){
    tie(n,clicks) = mytree.front();
    mytree.pop();
 
    if(n == m)
      break;
 
    if((n*2) <= (m+1) && !possibilities.count(n*2)){
      possibilities.insert(n*2);
      mytree.push({n*2,clicks+1});
    }
    if((n - 1) >= 0 && !possibilities.count(n-1)){
      possibilities.insert(n-1);
      mytree.push({n-1,clicks+1});
    }
  }
  printf("%d\n",clicks);
 
  return 0; // \n
}

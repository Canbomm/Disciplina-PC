#include <bits/stdc++.h>
 
using namespace std;
     
set<string> possibilidades;
     
void dfs(string original){
  possibilidades.insert(original);
  string temp;
  for(int i = 0; i < original.size(); i++){
    temp = original;
    temp.erase(i,1);
    if(temp != "" && !possibilidades.count(temp))
      dfs(temp);
  }
}
     
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  string original,modified;
  cin >> original;
 
  dfs(original);
     
  for(string elem : possibilidades)
    cout << elem << "\n";
 
  return 0; // \n
}

#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  int n,left,right;
  string original;
  set<string> formados;
 
  cin >> n;
  cin >> original;
 
  left = 0;
  right = 1;
  while(right < n){
    if(original[left] == original[right]){
      formados.insert(original.substr(left,right-left));
      right++;
    }
    else{
      formados.insert(original.substr(left,right-left));
      left = right;
      right = left + 1;
    }
  }
  formados.insert(original.substr(left,right-left));
 
  cout << formados.size() << "\n";
  
  return 0; // \n
}

#include <bits/stdc++.h>
 
using namespace std;
 
int contavk(string original){
  int total = 0;
  for(int i = 1; i < original.size(); i++){
    if(original[i] == 'K' and original[i-1] == 'V')
      total++;
  }
  // cout << "string: " << original << ", possui " << total << " VK's\n";
  return total;
}
 
char inverteCHAR(char c){
  if(c == 'V')
    return 'K';
  return 'V';
}
 
string invertePOS(string original, int pos){
  original[pos] = inverteCHAR(original[pos]);
  return original;
}
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  
  string original,modified;
  cin >> original;
  int current,maxim = contavk(original);
 
  for(int i = 0; i < original.size(); i++){
    modified = invertePOS(original,i);
    current = contavk(modified);
    if(current > maxim){
      maxim = current;
    }
  }
 
  cout << maxim << "\n";
  
  return 0; // \n
}


#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
 
  int t,n;
  int count,begin,end;
  char aux;
  
  cin >> t;
  for(int i = 0; i < t; i++){
    cin >> n;
    string finalstring;
    count = 0;
    begin = 0;
    end = n-1;
 
    cin >> finalstring;
 
    while(finalstring[begin] != finalstring[end] && n > count){
      count+= 2;
      begin++;
      end--;
    }
 
    cout << n-count << "\n";
  }
  
  return 0; // \n
}

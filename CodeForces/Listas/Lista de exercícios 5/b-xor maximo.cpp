#include <bits/stdc++.h>
 
using namespace std;
typedef unsigned long long int llint;
 
llint notMSB(llint num){
  llint msb = log2(num) + 1;
 
  if(msb > 64)
    msb = 64;
  
  for (llint i = 0; i < msb; i++)
    num = (num ^ ((llint) 1 << i)); // toggle bitmask
  
  return num;
}
 
int main(){
  llint a,b;
  cin >> a;
  b = notMSB(a);
  cout << a << " " << b << "\n";
  return 0;
}

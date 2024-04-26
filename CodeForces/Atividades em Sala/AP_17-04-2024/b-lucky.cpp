#include <bits/stdc++.h>
#define llint long long int
 
using namespace std;
// \n
// scanf("%d",&a);
// printf("%d\n",a);
// g++ script.cpp -std=c++17 -o exec
 
int str_sum(string ticket){
  int result = 0;
  for(int i = 0; i < ticket.size();i++){
    result = result + (ticket[i] - 48);
  }
  return result;
}
 
int main(){
  ios_base::sync_with_stdio(false);
 
  int test_cases;
  string ticket;
  string sub1,sub2;
  int test1,test2;
 
  cin >> test_cases;
  for(int _ = 0;_ < test_cases;_++){
    cin >> ticket;
    sub1 = ticket.substr(0,3);
    sub2 = ticket.substr(3,5);
    test1 = str_sum(sub1);
    test2 = str_sum(sub2);
 
    if(test1 == test2)
      cout << "YES" << "\n";
    else
      cout << "NO" << "\n";
  }
 
  return 0;
}

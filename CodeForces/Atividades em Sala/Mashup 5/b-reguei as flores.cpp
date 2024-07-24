#include <bits/stdc++.h>
 
using namespace std;
typedef long long int llint;
typedef pair<int, int> pii;
 
void descync(){
  ios_base::sync_with_stdio(false);
  // cin.tie(nullptr); // >>
  // cout.tie(nullptr); // <<
}
 
int main(){
  int minimum, month;
  vector<int> months;
  
  scanf("%d",&minimum);
  for(int i = 0; i < 12; i++){
    scanf("%d",&month);
    months.push_back(month);
  }
 
  sort(months.begin(),months.end(),greater<int>());
 
  int length = 0;
  int ind = 0;
  while(length < minimum && ind < 12){
    length += months[ind];
    ind++;
  }
 
  if(length < minimum)
    printf("-1\n");
  else
    printf("%d\n",ind);
 
  return 0;
}

#include <bits/stdc++.h>
#define llint long long int

using namespace std;
// \n
// scanf("%d",&a);
// printf("%d\n",a);
// g++ script.cpp -std=c++17 -o exec

int main(){
  int n,timur,temp,result;

  scanf("%d",&n);

  for(int count = 0; count < n; count++){
    vector<int> participants;
    int in_front;
    vector<int>::iterator upper;

    for(int i = 0; i < 4; i++){
      scanf("%d",&temp);
      participants.push_back(temp);
    }
    timur = participants[0];

    sort(participants.begin(),participants.end());

    upper = upper_bound(participants.begin(), participants.end(), timur);

    in_front = participants.end() - upper;

    printf("%d\n",in_front);
  }
  
  return 0;
}

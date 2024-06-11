#include <bits/stdc++.h>

using namespace std;

typedef long long int lli;
typedef tuple<int, int, long long int> tiii;

class comparator{
  public:
    bool operator()(tiii a, tiii b){
      if(get<2>(b) < get<2>(a)) // ordenacao crescente
        return true;
      return false;
    }
};

int main(){
  int t;
  scanf("%d",&t);
  int bosshealth,nattacks;
  lli available,turns = 1;
  int damage,basecooldown;
  tiii attack;
  vector<int> temp;
  for(int unu = 0; unu < t; unu++){
    priority_queue<tiii, vector<tiii>, comparator> attacks; // damage, basecooldown, available at 
    scanf("%d %d",&bosshealth,&nattacks);
    for(int i = 0; i < nattacks; i++){
      scanf("%d",&damage);
      temp.push_back(damage);
    }
    for(int i = 0; i < nattacks; i++){
      scanf("%d",&basecooldown);
      damage = temp[i];
      attacks.push(make_tuple(damage,basecooldown,1));
    }
    while(bosshealth > 0){
      while(get<2>(attacks.top()) <= turns){
        attack = attacks.top();
        attacks.pop();
        damage = get<0>(attack);
        basecooldown = get<1>(attack);
        available = turns + basecooldown;

        attack = make_tuple(damage,basecooldown,available);
        attacks.push(attack);
        bosshealth -= damage;
      }
      if(bosshealth > 0)
        turns = get<2>(attacks.top());
    }
    printf("%lld\n",turns);
    turns = 1;
    temp.clear();
  }
  return 0; // \n
}

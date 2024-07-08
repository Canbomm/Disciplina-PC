// Infelizmente so pensei nesse metodo depois do prazo, mas ainda assim achei que valia a pena tentar
// Ficou uma solucao bem elegante e passou em todos os casos de teste

#include <bits/stdc++.h>

using namespace std;
typedef long long int llint;

bool isneg(int a){
  if(a < 0)
    return true;
  return false;
}

bool opposites(int a, int b){
  if(isneg(a) && !isneg(b))
    return true;
  if(!isneg(a) && isneg(b))
    return true;
  return false;
}

void alternating(vector<int> &sequence, vector<int> &positive, vector<int> &negative, llint &sumpos, llint &sumneg){
  int original;
  int posind = 0; // indice of positive vector
  int negind = 0; // indice of negative vector
  for(int i = 0; i < sequence.size(); i++){
    original = sequence[i];
    
    if(opposites(positive[posind],original)){
      positive.push_back(original);
      posind++;
      sumpos += original;
    }
    else if(positive[posind] < original){
      sumpos -= positive[posind];
      sumpos += original;
      positive[posind] = original; // Making it as big as possible
    }

    if(opposites(negative[negind],original)){
      negative.push_back(original);
      negind++;
      sumneg += original;
    }
    else if(negative[negind] < original){
      sumneg -= negative[negind];
      sumneg += original;
      negative[negind] = original; // Making it as big as possible
    }
  }
}

int main(){
  int n,t,aux;
  llint sumpos,sumneg;

  scanf("%d",&t);
  for(int z = 0; z < t; z++){
    sumneg = 0;
    sumpos = 0;
    vector<int> sequence;

    scanf("%d",&n);
    for(int i = 0; i < n; i++){
      scanf("%d",&aux);
      sequence.push_back(aux);
    }

    vector<int> positive(1,-1); // first actual element is positive
    vector<int> negative(1,1); // first actual element is negative
    
    alternating(sequence, positive, negative, sumpos, sumneg);

    if(positive.size() > negative.size())
      printf("%lld\n",sumpos);
    else
      printf("%lld\n",sumneg);
  }

  return 0; // \n
}

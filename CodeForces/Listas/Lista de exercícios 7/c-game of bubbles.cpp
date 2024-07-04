#include <bits/stdc++.h>

using namespace std;

vector<int> permutation;
int swaps = 0;

void mergeSort(int left, int right){
  if(left == right)
    return; // only 1 element

  int mid = (left+right)/2;
  mergeSort(left,mid);
  mergeSort(mid+1,right);
  
  // merging
  vector<int> sorting;
  int inda = left;
  int indb = mid+1;
  while(inda <= mid && indb <= right){
    if(permutation[inda] > permutation[indb]){
      sorting.push_back(permutation[indb]);
      indb++;
      swaps += mid-inda+1;
    }
    else{
      sorting.push_back(permutation[inda]);
      inda++;
    }
  }
  while(inda <= mid){
    sorting.push_back(permutation[inda]);
    inda++;
  }
  while(indb <= right){
    sorting.push_back(permutation[indb]);
    indb++;
  }
  // updating original array
  for(int i = 0; i < sorting.size(); i++){
    permutation[left] = sorting[i];
    left++;
  }
}

int main(){
  int n,aux;
  scanf("%d",&n);

  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    permutation.push_back(aux);
  }

  mergeSort(0,n-1);

  if(swaps%2 != 0)
    printf("Marcelo\n");
  else
    printf("Carlos\n");

  return 0; // \n
}

#include <bits/stdc++.h>

// ios::sync_with_stdio(false);
// cin.tie(0);
// cout.tie(0);
// typedef ORIGINAL NEW;

using namespace std;

vector<int> permutation;
int swaps = 0;

void printVector(int left, int right){
  if(left == -1 or right == -1){
    for(int i = 0; i < permutation.size(); i++)
      printf("%d ",permutation[i]);
    printf("\n");
  }
  else{
    for(int i = left; i <= right; i++)
      printf("%d ",permutation[i]);
    printf("\n");
  }
}

void mergeSort(int left, int right){
  if(left == right)
    return; // only 1 element

  if((right-left) == 1){
    int temp;
    if(permutation[left] > permutation[right]){
      printf("--- Trocando ordem entre %d e %d\n",left,right);
      printVector(left,left);
      printVector(right,right);
      temp = permutation[left];
      permutation[left] = permutation[right];
      permutation[right] = temp;
      swaps++;
    }
    return;
  }

  int mid = (left+right)/2;

  printf("--- Dividindo vetor em (%d,%d) e (%d,%d)\n",left,mid,mid+1,right);
  printVector(left,mid);
  printVector(mid+1,right);

  if((right-left) > 1){
    mergeSort(left,mid);
    mergeSort(mid+1,right);
    // merging
    int a;
    int b;
    int begin = mid+1; // begin of 2nd vector

    printf("-- Comecando a comparar l=%d m=%d b=%d r=%d.\n",left,mid,begin,right);
    printVector(-1,-1);

    while(left <= mid && begin <= right){
      a = permutation[left];
      b = permutation[begin];
      printf("- Comparando %d com %d",a,b);
      if(a > b){
        permutation[left] = b;
        permutation[begin] = a;
        swaps++;
        left++;
      }
      else
        begin++;
    }

    printf("-- Vetor completo: ");
    printVector(-1,-1);
    printf("-- l=%d m=%d b=%d r=%d. E estado do vetores:\n",left,mid,begin,right);
    printVector(left,mid);
    printVector(begin,right);

    a = mid-left+1;
    for(int i = 0; i < a; i++){
      b = permutation[left];
      permutation[left] = permutation[mid];
      permutation[mid] = a;
      swaps++;
      mid--;
      if(left > 0)
        left--;
    }

    b = right-begin+1;
    for(int i = 0; i < b; i++){
      a = permutation[right];
      permutation[right] = permutation[begin];
      permutation[begin] = a;
      swaps++;
      right--;
      if(begin > 0)
        begin--;
    }
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

  printf("-- Foram feitas %d trocas\n",swaps);
  printVector(0,n-1);

  if(swaps%2 == 0)
    printf("Carlos\n");
  else
    printf("Marcelo\n");

  return 0; // \n
}

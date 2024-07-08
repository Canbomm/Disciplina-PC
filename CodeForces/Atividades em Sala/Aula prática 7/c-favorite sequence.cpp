#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
  int t,n,alternating = 0;
  int left,right,aux;
  
  scanf("%d",&t);
  for(int i = 0; i < t; i++){
    alternating = 0;
    scanf("%d",&n);
 
    vector<int> whiteboard(n,0);
    vector<int> original(n,0);
    left = 0;
    right = n-1;
 
    for(int j = 0; j < n; j++){
      scanf("%d",&aux);
      whiteboard[j] = aux;
    }
 
    for(int j = 0; j < n; j++){
      if(alternating == 0){
        original[j] = whiteboard[left];
        left++;
      }
      else{
        original[j] = whiteboard[right];
        right--;
      }
      alternating = alternating ^ 1;
    }
 
    for(int j = 0; j < n; j++)
      printf("%d ",original[j]);
    printf("\n");
  }
  
  return 0; // \n
}

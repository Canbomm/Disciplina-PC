#include <bits/stdc++.h>

using namespace std;

int main(){
  int t,height,width;
  char symbol;
  int top = 200001,bottom = -1,left = 200001,right = -1; // furthest in each category
  scanf("%d",&t);
  getchar(); // cleaning buffer
  for(int unused = 0; unused < t; unused++){
    scanf("%d %d",&height,&width);
    getchar();
    for(int i = 1; i <= height; i++){
      for(int j = 1; j <= width; j++){
        scanf("%c",&symbol);
        if(symbol == '#'){
          if(top > i)
            top = i;
          if(bottom < i)
            bottom = i;
          if(left > j)
            left = j;
          if(right < j)
            right = j;
        }
      }
      getchar();
    }
    printf("%d %d\n",(top+bottom)/2,(left+right)/2);
    top = 200001;
    bottom = -1;
    left = 200001;
    right = -1;
  }
  return 0; // \n
}

#include <bits/stdc++.h>

using namespace std;

vector<int> books;

int binarySearch(int valor){
  int price;
  int pos = 0;
  int left = 0;
  int right = books.size()-1;
  int mid = (left+right)/2;

  while(left <= right){
    if(books[mid] <= valor)
      pos = mid;
    
    if(books[mid] <= valor)
      left = mid + 1;

    if(books[mid] > valor)
      right = mid - 1;

    mid = (left+right)/2;
  }
  price = books[pos];
  books.erase(books.begin()+pos); // purchased the book
  return price;
}

int main(){
  int n,money,aux; // n books
  scanf("%d %d",&n,&money);

  for(int i = 0; i < n; i++){
    scanf("%d",&aux);
    books.push_back(aux);
  }
  sort(books.begin(),books.end());

  int x,y;
  while(x+y != money){
    x = binarySearch(money/2);
    y = binarySearch(money-x);
    if(x+y != money){
      // cannot purchase book x
      books.push_back(y); // returning book y
      sort(books.begin(),books.end());
    }
  }

  // not sure if this if is even necessary
  if(x <= y)
    printf("%d %d\n",x,y);
  else
    printf("%d %d\n",y,x);

  return 0; // \n
}

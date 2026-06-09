#include <stdio.h>

int somaN(int);

int main(){
  int n;
  printf("N: ");
  scanf("%d",&n);
  printf("Soma: %d",somaN(n));
}

int somaN(int n){
  if(n==0 || n==1)
    return n;
  return somaN(n-1)+n;
}

#include <stdio.h>

int fatorial(int);

int main(){
  int n1, n2;
  printf("N1: ");
  scanf("%d",&n1);
  printf("Fatorial de %d: %d",n1,fatorial(n1));
  printf("\nN2: ");
  scanf("%d",&n2);
  printf("Fatorial de %d: %d",n2,fatorial(n2));
}

int fatorial(int n){
  if(n==1 || n==0)
    return 1;
  return n*fatorial(n-1);
}

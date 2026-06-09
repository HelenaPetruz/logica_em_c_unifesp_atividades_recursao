#include <stdio.h>

int fibonacci(int);

int main(){
  int n;

  printf("N: ");
  scanf("%d",&n);
  printf("%d-ésimo termo da sequência de Fibonacci: %d",n,fibonacci(n));
}

int fibonacci(int n){
  if(n==1 || n==2)
    return n-1;
  return fibonacci(n-1) + fibonacci(n-2);
}

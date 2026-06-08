#include <stdio.h>

int somaCubos(int);

int main(){
	int n;
	printf("Digite um valor para n: ");
	scanf("%d", &n);
	printf("Resultado = %d", somaCubos(n));
}

int somaCubos(int n){
	if(n==0)
		return 0;
	return (n*n*n)+somaCubos(n-1);
}
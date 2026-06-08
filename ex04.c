#include <stdio.h>

int potenciacao(int, int);

int main(){
	int k, n;
	printf("Digite um valor para k: ");
	scanf("%d", &k);
	printf("Digite um valor para n: ");
	scanf("%d", &n);
	printf("Resultado = %d", potenciacao(k, n));
}

int potenciacao(int k, int n){
	if(n==0)
		return 1;
	return k*potenciacao(k, n-1);
}
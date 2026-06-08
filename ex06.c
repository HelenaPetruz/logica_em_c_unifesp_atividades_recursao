#include <stdio.h>

int multiplicacao(int, int);

int main(){
	int n1, n2;
	printf("Digite um valor para n1: ");
	scanf("%d", &n1);
	printf("Digite um valor para n2: ");
	scanf("%d", &n2);
	
	int negativo = 0;
    if ((n1 < 0 && n2 > 0) || (n1 > 0 && n2 < 0))
        negativo = 1;
    if (n1 < 0)
        n1 = -n1;
    if (n2 < 0)
        n2 = -n2;
    int resultado = multiplicacao(n1, n2);
    if (negativo)
        resultado = -resultado;

    printf("Resultado = %d\n", resultado);
}

int multiplicacao(int n1, int n2){
	if(n2==0)
		return 0;
	return n1+multiplicacao(n1, n2-1);
}
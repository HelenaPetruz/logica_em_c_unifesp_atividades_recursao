#include <stdio.h>

int fatorialQuadruplo(int, int);

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("Resultado = %d", fatorialQuadruplo(2*n, n));
}

int fatorialQuadruplo(int atual, int n) {
    if (atual == n)
        return 1;
    return atual * fatorialQuadruplo(atual - 1, n);
}

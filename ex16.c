#include <stdio.h>

int fatorialDuplo(int);

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("Resultado = %d", fatorialDuplo(n));
}

int fatorialDuplo(int n) {
    if (n == 1)
        return 1;
    return n * fatorialDuplo(n - 2);
}

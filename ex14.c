#include <stdio.h>

void ImprimeSerie(int, int, int);

int main() {
    int i, j, k;
    printf("Digite o valor inicial: ");
    scanf("%d", &i);
    printf("Digite o valor final: ");
    scanf("%d", &j);
    printf("Digite o incremento: ");
    scanf("%d", &k);
    ImprimeSerie(i, j, k);
}

void ImprimeSerie(int i, int j, int k) {
    if (i > j)
        return;
    printf("%d ", i);
    ImprimeSerie(i + k, j, k);
}

#include <stdio.h>

int SomaSerie(int, int, int);

int main() {
    int i, j, k;
    printf("Digite o valor inicial: ");
    scanf("%d", &i);
    printf("Digite o valor final: ");
    scanf("%d", &j);
    printf("Digite o incremento: ");
    scanf("%d", &k);
    printf("Soma = %d", SomaSerie(i, j, k));
}

int SomaSerie(int i, int j, int k) {
    if (i > j)
        return 0;
    return i + SomaSerie(i + k, j, k);
}

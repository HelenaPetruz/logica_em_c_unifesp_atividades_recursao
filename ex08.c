#include <stdio.h>

void numeros(int n);

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    numeros(n);
}

void numeros(int n) {
    if (n == 0) {
        printf("0 ");
        return;
    }
    printf("%d ", n);
    numeros(n - 1);
}
#include <stdio.h>

int fibg(int, int, int);

int main() {
    int f0, f1, n;
    printf("Digite f0: ");
    scanf("%d", &f0);
    printf("Digite f1: ");
    scanf("%d", &f1);
    printf("Digite n: ");
    scanf("%d", &n);
    printf("Resultado = %d", fibg(f0, f1, n));
}

int fibg(int f0, int f1, int n) {
    if (n == 0)
        return f0;
    if (n == 1)
        return f1;
    return fibg(f0, f1, n - 1) + fibg(f0, f1, n - 2);
}

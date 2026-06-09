#include <stdio.h>

float serie(int);

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("S = %.2f", serie(n));
}

float serie(int n) {
    if (n == 1)
        return 2;
    return serie(n - 1) + (1.0 + n * n) / n;
}

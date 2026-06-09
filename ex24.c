#include <stdio.h>

int tribonacci(int);

int main() {
    int n;
    printf("Digite um valor para n: ");
    scanf("%d", &n);
    printf("Resultado = %d", tribonacci(n));
}

int tribonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 0;
    if (n == 2)
        return 1;
    return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}

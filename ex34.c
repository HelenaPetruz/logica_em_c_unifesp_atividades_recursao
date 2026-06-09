#include <stdio.h>

int inverter(int, int);

int main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    printf("Invertido = %d", inverter(n, 0));
}

int inverter(int n, int inv) {
    if(n == 0)
        return inv;
    return inverter(n / 10, inv * 10 + n % 10);
}

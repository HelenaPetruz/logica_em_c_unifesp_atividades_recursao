#include <stdio.h>

int menor(int v[], int i);

int main() {
    int v[10];
    for(int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &v[i]);
    }
    printf("Menor elemento: %d\n", menor(v, 9));
}

int menor(int v[], int i) {
    if(i == 0)
        return v[0];
    int m = menor(v, i - 1);

    if(v[i] < m)
        return v[i];

    return m;
}
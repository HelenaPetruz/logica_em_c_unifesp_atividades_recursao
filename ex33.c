#include <stdio.h>

void inverter(float[], int, int);

int main() {
    float v[100];
    for(int i = 0; i < 100; i++) {
        printf("Digite um valor: ");
        scanf("%f", &v[i]);
    }
    inverter(v, 0, 99);
    printf("\nVetor invertido:\n");
    for(int i = 0; i < 100; i++)
        printf("%.2f ", v[i]);
}

void inverter(float v[], int inicio, int fim) {
    if(inicio >= fim)
        return;
    float aux = v[inicio];
    v[inicio] = v[fim];
    v[fim] = aux;
    inverter(v, inicio + 1, fim - 1);
}

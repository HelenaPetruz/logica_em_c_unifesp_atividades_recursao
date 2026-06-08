#include <stdio.h>

void array(int [ ], int);

int main() {
    int v[10];
    for(int i=0; i<10; i++){
    	printf("Digite um valor: ");
    	scanf("%d", &v[i]);
    }
    array(v, 10);
}

void array(int v[ ], int i) {
    if (i == -1) {
        return;
    }
    array(v, i-1);
    printf("%d ", v[i]);
}
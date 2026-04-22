#include <stdio.h>
#include <stdlib.h>

void trocar(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b, c;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a < b) trocar(&a, &b);
    if (a < c) trocar(&a, &c);
    if (b < c) trocar(&b, &c);

    printf("Ordem decrescente: %d, %d, %d\n", a, b, c);

    system("pause");
    return 0;
}

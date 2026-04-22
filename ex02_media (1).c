#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c;
    double media;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);

    media = (a + b + c) / 3.0;

    printf("Media dos valores %d, %d e %d = %.2f\n", a, b, c, media);

    system("pause");
    return 0;
}

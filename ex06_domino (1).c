#include <stdio.h>
#include <stdlib.h>

int main() {
    int soma = 0;
    int i;

    for (i = 0; i <= 6; i++) {
        soma += 4 + i;
    }

    soma -= 4;

    printf("Soma de todos os valores das pecas com o numero 4 no domino: %d\n", soma);

    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sorteado, tentativa, contador = 0;

    srand((unsigned int)time(NULL));
    sorteado = rand() % 101;

    printf("=== Adivinhe o numero (0 a 100) ===\n");

    do {
        printf("Sua tentativa: ");
        scanf("%d", &tentativa);
        contador++;

        if (tentativa < sorteado) {
            printf("O numero sorteado e MAIOR do que %d.\n", tentativa);
        } else if (tentativa > sorteado) {
            printf("O numero sorteado e MENOR do que %d.\n", tentativa);
        }
    } while (tentativa != sorteado);

    printf("Parabens! Voce acertou em %d tentativa(s)!\n", contador);

    system("pause");
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    letra = tolower(letra);

    if (letra < 'a' || letra > 'z') {
        printf("'%c' nao e uma letra.\n", letra);
    } else if (letra == 'a' || letra == 'e' || letra == 'i' ||
               letra == 'o' || letra == 'u') {
        printf("'%c' e uma VOGAL.\n", letra);
    } else {
        printf("'%c' e uma CONSOANTE.\n", letra);
    }

    system("pause");
    return 0;
}

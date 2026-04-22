#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    unsigned long long fatorial = 1;

    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Fatorial nao e definido para numeros negativos.\n");
    } else {
        for (i = 2; i <= n; i++) {
            fatorial *= i;
        }
        printf("%d! = %I64u\n", n, fatorial);
    }

    system("pause");
    return 0;
}

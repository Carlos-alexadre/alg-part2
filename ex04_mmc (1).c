#include <stdio.h>
#include <stdlib.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    int mmc = (a / mdc(a, b)) * b;

    printf("MMC(%d, %d) = %d\n", a, b, mmc);

    system("pause");
    return 0;
}

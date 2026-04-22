#include <stdio.h>
#include <stdlib.h>

int main() {
    int segundos, horas, minutos, seg;

    printf("Digite a quantidade de segundos: ");
    scanf("%d", &segundos);

    horas   = segundos / 3600;
    minutos = (segundos % 3600) / 60;
    seg     = segundos % 60;

    printf("%d segundo(s) equivale(m) a: %dh %dm %ds\n", segundos, horas, minutos, seg);

    system("pause");
    return 0;
}

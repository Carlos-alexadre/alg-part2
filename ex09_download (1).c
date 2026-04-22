#include <stdio.h>
#include <stdlib.h>

int main() {
    double tamanho_mb, velocidade_mbps, tempo_segundos, tempo_minutos;

    printf("Tamanho do arquivo (MB): ");
    scanf("%lf", &tamanho_mb);
    printf("Velocidade da conexao (Mbps): ");
    scanf("%lf", &velocidade_mbps);

    tempo_segundos = (tamanho_mb * 8) / velocidade_mbps;
    tempo_minutos  = tempo_segundos / 60.0;

    printf("Tempo estimado de download: %.2f minuto(s) (%.1f segundo(s))\n",
           tempo_minutos, tempo_segundos);

    system("pause");
    return 0;
}

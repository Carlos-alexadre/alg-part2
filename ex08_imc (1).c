#include <stdio.h>
#include <stdlib.h>

int main() {
    double peso, altura, imc;

    printf("Digite seu peso (kg): ");
    scanf("%lf", &peso);
    printf("Digite sua altura (m): ");
    scanf("%lf", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5)
        printf("Classificacao: Abaixo do peso\n");
    else if (imc < 25.0)
        printf("Classificacao: Peso normal\n");
    else if (imc < 30.0)
        printf("Classificacao: Sobrepeso\n");
    else if (imc < 35.0)
        printf("Classificacao: Obesidade grau I\n");
    else if (imc < 40.0)
        printf("Classificacao: Obesidade grau II\n");
    else
        printf("Classificacao: Obesidade grau III (morbida)\n");

    system("pause");
    return 0;
}

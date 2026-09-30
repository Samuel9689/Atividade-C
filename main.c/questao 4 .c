#include <stdio.h>

int main() {

    int passos;
    int total = 0;
    int horas = 0;

    while (total < 10000) {

        printf("Digite a quantidade de passos dados nesta hora: ");
        scanf("%d", &passos);

        total = total + passos;
        horas++;

        printf("Total de passos: %d\n\n", total);
    }

    printf("Meta de 10.000 passos atingida!\n");
    printf("Foram necessarias %d horas.\n", horas);

    return 0;
}
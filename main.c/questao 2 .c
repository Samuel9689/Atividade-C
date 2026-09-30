#include <stdio.h>

int main() {

    int opcao = 0;
    float total = 0;

    while (opcao != 4) {

        printf("\nCOFRINHO DIGITAL\n");
        printf("1 - Adicionar R$ 0,50\n");
        printf("2 - Adicionar R$ 1,00\n");
        printf("3 - Adicionar R$ 2,00\n");
        printf("4 - Parar\n");

        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                total = total + 0.50;
                printf("R$ 0,50 adicionado!\n");
                break;

            case 2:
                total = total + 1.00;
                printf("R$ 1,00 adicionado!\n");
                break;

            case 3:
                total = total + 2.00;
                printf("R$ 2,00 adicionado!\n");
                break;

            case 4:
                printf("Encerrando o cofrinho...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    }
    printf("\nTotal acumulado: R$ %.2f\n", total);

    return 0;
}
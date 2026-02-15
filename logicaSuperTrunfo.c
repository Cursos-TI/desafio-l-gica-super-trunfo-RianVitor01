#include <stdio.h>

// Função para comparar valores
void comparar(char pais1[], char pais2[], float v1, float v2, int menorVence) {

    printf("%s: %.2f\n", pais1, v1);
    printf("%s: %.2f\n", pais2, v2);

    if (menorVence) {
        if (v1 < v2)
            printf("Resultado: %s venceu!\n", pais1);
        else if (v2 < v1)
            printf("Resultado: %s venceu!\n", pais2);
        else
            printf("Resultado: Empate!\n");
    } else {
        if (v1 > v2)
            printf("Resultado: %s venceu!\n", pais1);
        else if (v2 > v1)
            printf("Resultado: %s venceu!\n", pais2);
        else
            printf("Resultado: Empate!\n");
    }
}

int main() {

    char pais1[] = "Brasil";
    char pais2[] = "Argentina";

    int pop1 = 203000000, pop2 = 46000000;
    int pontos1 = 50, pontos2 = 30;
    float area1 = 8515767, area2 = 2780400;
    float pib1 = 1600000, pib2 = 600000;

    float dens1 = pop1 / area1;
    float dens2 = pop2 / area2;

    int opcao;

    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("\nComparação entre %s e %s\n", pais1, pais2);

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            comparar(pais1, pais2, pop1, pop2, 0);
            break;

        case 2:
            printf("Atributo: Área\n");
            comparar(pais1, pais2, area1, area2, 0);
            break;

        case 3:
            printf("Atributo: PIB\n");
            comparar(pais1, pais2, pib1, pib2, 0);
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            comparar(pais1, pais2, pontos1, pontos2, 0);
            break;

        case 5:
            printf("Atributo: Densidade Demográfica\n");
            comparar(pais1, pais2, dens1, dens2, 1);
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

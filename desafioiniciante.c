#include <stdio.h>

struct Carta {
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {
    struct Carta carta1, carta2;
    int escolha;

    // Entrada de dados da primeira carta
    printf("Digite os dados da primeira carta:\n");
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área em km²: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Entrada de dados da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área em km²: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Escolha do atributo para comparação
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
    scanf("%d", &escolha);

    if (escolha == 1) {
        if (carta1.populacao > carta2.populacao) {
            printf("A primeira carta tem maior população.\n");
        } else if (carta1.populacao < carta2.populacao) {
            printf("A segunda carta tem maior população.\n");
        } else {
            printf("As cartas têm a mesma população.\n");
        }
    } else if (escolha == 2) {
        if (carta1.area > carta2.area) {
            printf("A primeira carta tem maior área.\n");
        } else if (carta1.area < carta2.area) {
            printf("A segunda carta tem maior área.\n");
        } else {
            printf("As cartas têm a mesma área.\n");
        }
    } else if (escolha == 3) {
        if (carta1.pib > carta2.pib) {
            printf("A primeira carta tem maior PIB.\n");
        } else if (carta1.pib < carta2.pib) {
            printf("A segunda carta tem maior PIB.\n");
        } else {
            printf("As cartas têm o mesmo PIB.\n");
        }
    } else if (escolha == 4) {
        if (carta1.pontos_turisticos > carta2.pontos_turisticos) {
            printf("A primeira carta tem mais pontos turísticos.\n");
        } else if (carta1.pontos_turisticos < carta2.pontos_turisticos) {
            printf("A segunda carta tem mais pontos turísticos.\n");
        } else {
            printf("As cartas têm o mesmo número de pontos turísticos.\n");
        }
    } else {
        printf("Opção inválida.\n");
    }

    return 0;
}

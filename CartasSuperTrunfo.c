#include <stdio.h>
#include <stdlib.h>
#include "carta/carta.h"

int main() {

    Carta* carta1;
    Carta* carta2;

    char codigo[4];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("========\n");

    printf("Digite o codigo da carta (ex.: A01): ");
    scanf("%3s", &codigo);

    printf("Digite a populacao: ");
    scanf("%1u", &populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    carta1 = cadastroCarta(codigo, populacao, area, pib, pontosTuristicos);

    printf("========\n");

    printf("========\n");

    printf("Digite o codigo da carta (ex.: A01): ");
    scanf("%3s", &codigo);

    printf("Digite a populacao: ");
    scanf("%1u", &populacao);

    printf("Digite a area (em km2): ");
    scanf("%f", &area);

    printf("Digite o PIB: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    carta2 = cadastroCarta(codigo, populacao, area, pib, pontosTuristicos);

    printf("========\n");

    carta1->densidade = calculoDensidade(carta1->populacao, carta1->area);
    carta1->pibPerCapita = calculoPibPerCapita(carta1->pib, carta1->populacao);
    carta1->superPoder = calculoSuperPoder(carta1);

    carta2->densidade = calculoDensidade(carta2->populacao, carta2->area);
    carta2->pibPerCapita = calculoPibPerCapita(carta2->pib, carta2->populacao);
    carta2->superPoder = calculoSuperPoder(carta2);

    exibirCarta(carta1);
    exibirCarta(carta2);

    exibirVencedor(carta1, carta2);

    free(carta1);
    free(carta2);

    system("pause");
    return 0;
}

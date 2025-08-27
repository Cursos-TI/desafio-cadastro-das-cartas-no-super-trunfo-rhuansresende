#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "../carta/carta.h"

Carta* cadastroCarta(const char* codigo, unsigned long int populacao, float area, float pib, int pontosTuristicos) {
	Carta* carta = (Carta*)malloc(sizeof(Carta));
	strcpy(carta->codigo, codigo);
	carta->populacao = populacao;
	carta->area = area;
	carta->pib = pib;
	carta->pontosTuristicos = pontosTuristicos;
	return carta;
}

void exibirCarta(Carta* c) {
    printf("\n============= CARTA =============\n");
    printf("Codigo : %s\n", c->codigo);
    printf("Populacao : %lld hab\n", c->populacao);
    printf("Area : %.2f km2\n", c->area);
    printf("PIB : %.2f\n", c->pib);
    printf("Pontos Tur. : %d\n", c->pontosTuristicos);
    printf("========\n");
}

void exibirVencedor(Carta* carta1, Carta* carta2) {
    printf("\n=== Comparacao ===\n");
    printf("Populacao: %d\n", (carta1->populacao > carta2->populacao));
    printf("Area: %d\n", (carta1->area > carta2->area));
    printf("PIB: %d\n", (carta1->pib > carta2->pib));
    printf("Pontos Turisticos: %d\n", (carta1->pontosTuristicos > carta2->pontosTuristicos));
    printf("Densidade Populacional: %d\n", (carta1->densidade < carta2->densidade));
    printf("PIB per Capita: %d\n", (carta1->pibPerCapita > carta2->pibPerCapita));
    printf("Super Poder: %d\n", (carta1->superPoder > carta2->superPoder));
}

float calculoDensidade(unsigned long int populacao, float area) {
	return (float)populacao / area;
}

float calculoPibPerCapita(float pib, unsigned long int populacao) {
	return pib / (float)populacao;
}

float calculoSuperPoder(Carta* carta) {
	return carta->populacao + carta->area + carta->pib + carta->pontosTuristicos + carta->pibPerCapita + (1.0f / carta->densidade);
}
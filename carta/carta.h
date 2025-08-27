#ifndef CARTA_H
#define CARTA_H

typedef struct {
	char codigo[4];
	unsigned long int populacao;
	float area;
	float pib;
	int pontosTuristicos;
	float densidade;
	float pibPerCapita;
	float superPoder;
} Carta;

Carta* cadastroCarta(const char* codigo, unsigned long int populacao, float area, float pib, int pontosTuristicos);
void exibirCarta(Carta* carta);
float calculoDensidade(unsigned long int populacao, float area);
float calculoPibPerCapita(float pib, unsigned long int populacao);
float calculoSuperPoder(Carta* carta);
void exibirVencedor(Carta* carta1, Carta* carta2);

#endif


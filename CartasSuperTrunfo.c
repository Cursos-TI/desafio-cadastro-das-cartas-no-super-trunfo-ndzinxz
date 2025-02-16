#include <stdio.h>

int main() {
    
    char codigo[4];
    char cidade[20];
    int populacao;
    float densidade;
    int pib_percapita;
    float area; 
    float pib;
    int pontos_turisticos;
    

    printf("Digite o Codigo: "); // Codigo da carta
    scanf("%s", &codigo);

    printf("Digite a Cidade: "); // Ciadade do estado 
    scanf("%s", &cidade);

    printf("Digite a Populaçao: "); // População
    scanf(" %d", &populacao);

    printf("Digite a Area: "); // Área da cidade
    scanf(" %f", &area);

    printf("Digite o PIB (em bilhões): "); // PIB da cidade
    scanf("%f", &pib);

    printf("A quantidade de pontos turisticos na cidade: "); // Pontos turisticos
    scanf("%d", &pontos_turisticos);

    densidade = (float)(populacao / area);
    pib_percapita = (int)((pib *1000000000) / populacao);

    printf("\n");

    printf("Codigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km²\nDensidade Populacional: %.2f pessoas/km²\nPIB: %.2f bilhoes de reais\nPIB per Capita: %d reais\nPontos turisticos: %d\n", codigo, cidade, populacao, area, densidade, pib, pib_percapita, pontos_turisticos);

    printf("\n");

    return 0;
}



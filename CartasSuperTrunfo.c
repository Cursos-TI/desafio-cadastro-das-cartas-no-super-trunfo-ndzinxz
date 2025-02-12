#include <stdio.h>

int main() {
    
    char codigo[4];
    char cidade[30];
    int populacao;
    float area; 
    float pib;
    int pontos_turisticos;
    

    printf("Digite o Codigo: "); // Codigo da carta
    scanf("%s", &codigo);

    printf("Digite a Cidade: "); // Ciadade do estado 
    scanf("%s", &cidade);

    printf("Digite a Populaçao: "); // População
    scanf("%d", &populacao);

    printf("Digite a Area: "); // Área da cidade
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): "); // PIB da cidade
    scanf("%f", &pib);

    printf("A quantidade de pontos turisticos na cidade: "); // Pontos turisticos
    scanf("%d", &pontos_turisticos);

    printf("\n");

    printf("Codigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km²\nPIB: %.3f bilhoes\nPontos turisticos: %d\n", codigo, cidade, populacao, area, pib, pontos_turisticos);


    return 0;
}



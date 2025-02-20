#include <stdio.h>

int main() {
    char codigo_1[4], cidade_1[20];
    int populacao_1, pib_percapita_1, pontos_turisticos_1;
    float densidade_1, area_1, pib_1;
    
    char codigo_2[4], cidade_2[20];
    int populacao_2, pib_percapita_2, pontos_turisticos_2;
    float densidade_2, area_2, pib_2;
    char codigo[4];
    char cidade[20];
    int populacao;
    float densidade;
    int pib_percapita;
    float area; 
    float pib;
    int pontos_turisticos;
    
    printf("--- CARTA 1 ---\n");
    printf("Digite o Codigo: ");
    scanf("%s", codigo_1);
    printf("Digite a Cidade: ");
    scanf("%s", cidade_1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao_1);
    printf("Digite a Area: ");
    scanf("%f", &area_1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_1);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("\n--- CARTA 2 ---\n");
    printf("Digite o Codigo: ");
    scanf("%s", codigo_2);
    printf("Digite a Cidade: ");
    scanf("%s", cidade_2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao_2);
    printf("Digite a Area: ");
    scanf("%f", &area_2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib_2);
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%d", &pontos_turisticos_2);
    printf("Digite o Codigo: "); // Codigo da carta
    scanf("%s", &codigo);

    // Cálculo das propriedades
    densidade_1 = populacao_1 / area_1;
    pib_percapita_1 = (pib_1 * 1000000000) / populacao_1;
    printf("Digite a Cidade: "); // Ciadade do estado 
    scanf("%s", &cidade);

    densidade_2 = populacao_2 / area_2;
    pib_percapita_2 = (pib_2 * 1000000000) / populacao_2;
    printf("Digite a Populaçao: "); // População
    scanf(" %d", &populacao);

    printf("\n--- COMPARACAO DAS CARTAS ---\n");
    printf("Digite a Area: "); // Área da cidade
    scanf(" %f", &area);

    // Comparação das propriedades
    printf("Densidade Populacional: ");
    if (densidade_1 < densidade_2)
        printf("Vencedora: %s (Menor densidade)\n", cidade_1);
    else if (densidade_1 > densidade_2)
        printf("Vencedora: %s (Menor densidade)\n", cidade_2);
    else
        printf("Empate\n");
    printf("Digite o PIB (em bilhões): "); // PIB da cidade
    scanf("%f", &pib);

    printf("Populacao: ");
    if (populacao_1 > populacao_2)
        printf("Vencedora: %s\n", cidade_1);
    else if (populacao_1 < populacao_2)
        printf("Vencedora: %s\n", cidade_2);
    else
        printf("Empate\n");
    printf("A quantidade de pontos turisticos na cidade: "); // Pontos turisticos
    scanf("%d", &pontos_turisticos);

    printf("PIB: ");
    if (pib_1 > pib_2)
        printf("Vencedora: %s\n", cidade_1);
    else if (pib_1 < pib_2)
        printf("Vencedora: %s\n", cidade_2);
    else
        printf("Empate\n");
    densidade = (float)(populacao / area);
    pib_percapita = (int)((pib *1000000000) / populacao);

    printf("PIB per Capita: ");
    if (pib_percapita_1 > pib_percapita_2)
        printf("Vencedora: %s\n", cidade_1);
    else if (pib_percapita_1 < pib_percapita_2)
        printf("Vencedora: %s\n", cidade_2);
    else
        printf("Empate\n");
    printf("\n");

    printf("Pontos Turisticos: ");
    if (pontos_turisticos_1 > pontos_turisticos_2)
        printf("Vencedora: %s\n", cidade_1);
    else if (pontos_turisticos_1 < pontos_turisticos_2)
        printf("Vencedora: %s\n", cidade_2);
    else
        printf("Empate\n");
    printf("Codigo: %s\nCidade: %s\nPopulacao: %d\nArea: %.2f km²\nDensidade Populacional: %.2f pessoas/km²\nPIB: %.2f bilhoes de reais\nPIB per Capita: %d reais\nPontos turisticos: %d\n", codigo, cidade, populacao, area, densidade, pib, pib_percapita, pontos_turisticos);

    printf("\n");

    return 0;
}
#include <stdio.h>

int main() {
    
    char estado;
    char codigo[4];
    char cidade[30];
    int populacao;
    float area; 
    float pib;
    int pontos_turisticos;
    

    printf("Digite o Estado: ");
    scanf("%c", &estado);

    printf("Digite o código: ");
    scanf("%s", &codigo);

    printf("Digite a Cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população: ");
    scanf("%d", &populacao);

    printf("Digite a área: ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib);

    printf("A quantidade de pontos turisticos na cidade: ");
    scanf("%d", &pontos_turisticos);

    printf("\n");

    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões\nPontos turisticos: %d\n", estado, codigo, cidade, populacao, area, pib, pontos_turisticos);


    return 0;
}



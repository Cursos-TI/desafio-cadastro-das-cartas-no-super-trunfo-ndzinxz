#include <stdio.h>

int main() {
    
    char estado;
    char codigo[4];
    char cidade[30];
    int populacao;
    float area; 
    float pib;
    int pontos_turisticos;
    

    printf("Digite o Estado:\n");
    scanf(" %c", &estado);

    printf("Digite o código:\n");
    scanf("%s", &codigo);

    printf("Digite a Cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a população:\n");
    scanf("%d", &populacao);

    printf("Digite a área:\n");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões):\n");
    scanf("%f", &pib);

    printf("A quantidade de pontos turisticos na cidade:\n");
    scanf("%d", &pontos_turisticos);

    printf("\n");

    printf("Estado: %c\nCódigo: %s\nCidade: %s\nPopulação: %d\nÁrea: %f km²\nPIB: %f bilhões\nPontos turisticos: %d\n", estado, codigo, cidade, populacao, area, pib, pontos_turisticos);


    return 0;
}



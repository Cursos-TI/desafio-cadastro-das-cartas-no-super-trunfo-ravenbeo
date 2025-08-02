#include <stdio.h>

struct Carta {
    char estado;
    char codigo[20];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    // Cadastro da primeira carta
    printf("Cadastro da primeira carta:\n");

    printf("Estado (1): ");
    scanf(" %c", &carta1.estado);

    printf("Código da carta: ");
    scanf(" %s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);

    printf("População: ");
    scanf("%d", &carta1.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta1.area);

    printf("PIB: ");
    scanf("%f", &carta1.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Cálculo automático da densidade e PIB per capita
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    // Cadastro da segunda carta
    printf("\nCadastro da segunda carta:\n");

    printf("Estado (2): ");
    scanf(" %c", &carta2.estado);

    printf("Código da carta: ");
    scanf(" %s", carta2.codigo);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("População: ");
    scanf("%d", &carta2.populacao);

    printf("Área em km²: ");
    scanf("%f", &carta2.area);

    printf("PIB: ");
    scanf("%f", &carta2.pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Cálculo automático da densidade e PIB per capita
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibição dos dados
    printf("\n--- Dados da Primeira Carta ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código da carta: %s\n", carta1.codigo);
    printf("Nome da cidade: %s\n", carta1.nomeCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f\n", carta1.pib);
    printf("Número de pontos turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta1.pibPerCapita);

    printf("\n--- Dados da Segunda Carta ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código da carta: %s\n", carta2.codigo);
    printf("Nome da cidade: %s\n", carta2.nomeCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f\n", carta2.pib);
    printf("Número de pontos turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.2f\n", carta2.pibPerCapita);

    return 0;
}

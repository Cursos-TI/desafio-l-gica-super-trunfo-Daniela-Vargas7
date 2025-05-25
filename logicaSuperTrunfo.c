#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    //Carta 1:
    char estado1;
    char codigo1[3];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1; 

    //Carta 2:
    char estado2;
    char codigo2[3];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    

    // Cadastro das Cartas:
    //Carta 1:
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // Espaço antes do %c para consumir a quebra de linha anterior
    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigo1);
    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    //Carta 2:
    printf("Cadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta (ex: A01): ");
    scanf("%s", &codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", &nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // Comparação de Cartas:
    // Atributo escolhido para comparação: População
    // Regra: Maior valor vence

    printf("--- Comparação de Cartas ---\n");
    printf("Atributo de Comparação: População\n\n");

    printf("Carta 1 - %s (%c): %d habitantes\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d habitantes\n", nomeCidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 venceu!\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    // Exibição dos Resultados:
    //Carta 1:
    printf("Dados da Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // Cálculo e exibição da Densidade Populacional e PIB per capita da Carta 1
    if (area1 > 0) { // Evita divisão por zero
        densidadePopulacional1 = (float)populacao1 / area1;
        printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional1);
    } else {
        printf("Densidade Populacional: Não calculável (Área zero)\n");
    }
    if (populacao1 > 0) { // Evita divisão por zero
        pibPerCapita1 = pib1 / populacao1;
        printf("PIB per capita: %f bilhões de reais/hab\n", pibPerCapita1);
    } else {
        printf("PIB per capita: Não calculável (População zero)\n");
    }
    printf("\n");

    //Carta 2:
    printf("Dados da Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Cálculo e exibição da Densidade Populacional e PIB per capita da Carta 2
    if (area2 > 0) { // Evita divisão por zero
        densidadePopulacional2 = (float)populacao2 / area2;
        printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional2);
    } else {
        printf("Densidade Populacional: Não calculável (Área zero)\n");
    }
    if (populacao2 > 0) { // Evita divisão por zero
        pibPerCapita2 = pib2 / populacao2;
        printf("PIB per capita: %f bilhões de reais/hab\n", pibPerCapita2);
    } else {
        printf("PIB per capita: Não calculável (População zero)\n");
    }
    printf("\n");



    return 0;
}

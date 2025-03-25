#include <stdio.h>

// Programa Super Trunfo: Nível Mestre - Batalha de Cartas
int main() {
    // Declaração de variáveis para a Carta 1 (Seul)
    char estado1;
    char codigo1[4];
    char nome1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float pib_per_capita1;
    float super_poder1;

    // Declaração de variáveis para a Carta 2 (Nova York)
    char estado2;
    char codigo2[4];
    char nome2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float pib_per_capita2;
    float super_poder2;

    // Instruções para o usuário
    printf("Bem-vindo ao Super Trunfo de Cidades!\n");
    printf("Insira os dados das duas cartas a seguir.\n\n");

    // Leitura dos dados da Carta 1 (Seul)
    printf("=== Carta 1 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome1); // Lê string com espaços
    printf("Populacao (em habitantes): ");
    scanf("%lu", &populacao1);
    printf("Area (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de dolares): ");
    scanf("%f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Leitura dos dados da Carta 2 (Nova York)
    printf("\n=== Carta 2 ===\n");
    printf("Estado (A a H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome2); // Lê string com espaços
    printf("Populacao (em habitantes): ");
    scanf("%lu", &populacao2);
    printf("Area (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de dolares): ");
    scanf("%f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 1
    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1; // PIB em dólares por habitante

    // Cálculo da Densidade Populacional e PIB per Capita para Carta 2
    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / (float)populacao2; // PIB em dólares por habitante

    // Cálculo do Super Poder para Carta 1
    super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1);

    // Cálculo do Super Poder para Carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // Exibição dos dados da Carta 1 (Seul)
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de dolares\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f dolares\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da Carta 2 (Nova York)
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de dolares\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f dolares\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparação dos atributos entre as cartas
    printf("\n=== Comparacao de Cartas ===\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2));
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2));
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 < densidade2) ? 1 : 2, (densidade1 < densidade2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2));

    return 0;
}

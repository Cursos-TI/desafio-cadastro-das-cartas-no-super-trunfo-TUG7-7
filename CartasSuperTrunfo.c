#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
       // Carta 1
    char estado1[50];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superpoder1;



    // Carta 2
    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superpoder2;


    //Entrada dos dados da Carta 1
   printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado: ");
    scanf(" %s", estado1);

    printf("Digite o Codigo da Carta (ex: A01):");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area (km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Calculo da Densidade Demografica e PIB per Capita da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superpoder1 = (float)populacao1 + area1 + (pib1 * 1000000000.0f) 
                  + (float)pontosTuristicos1 + pibPerCapita1 
                  + (1.0f / densidade1);



    // Entrada dos dados da Carta 2
     printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estadoa: ");
    scanf(" %s", estado2);

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area (km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Digite o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    // Calculo da Densidade Demografica e PIB per Capita da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superpoder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0f) 
                  + (float)pontosTuristicos2 + pibPerCapita2 
                  + (1.0f / densidade2);
    
    // -------- Exibir atributos calculados --------
    printf("\n--- Carta 1 (%s) ---\n", cidade1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    printf("\n--- Carta 2 (%s) ---\n", cidade2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // -------- Comparações --------
printf("\nComparacao de Cartas:\n");
printf("Populacao: %s venceu\n", (populacao1 > populacao2) ? "Carta 1" : "Carta 2");
printf("Area: %s venceu\n", (area1 > area2) ? "Carta 1" : "Carta 2");
printf("PIB: %s venceu\n", (pib1 > pib2) ? "Carta 1" : "Carta 2");
printf("Pontos Turisticos: %s venceu\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1" : "Carta 2");
printf("Densidade Populacional: %s venceu\n", (densidade1 < densidade2) ? "Carta 1" : "Carta 2"); // menor vence
printf("PIB per Capita: %s venceu\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1" : "Carta 2");
printf("Super Poder: %s venceu\n", (superpoder1 > superpoder2) ? "Carta 1" : "Carta 2");

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Saída formatada

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);



    return 0;
}

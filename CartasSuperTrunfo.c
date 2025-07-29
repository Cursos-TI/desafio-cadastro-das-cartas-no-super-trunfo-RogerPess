#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado, estado2, codigo[5], codigo2[5], nome[50], nome2[50];
    int  pontosTuristicos, pontosTuristicos2;
    float populacao, populacao2, area, area2, pib, pib2;
    float densPop, densPop2, pibPerCapita1, pibPerCapita2;

    printf("Digite a siglas do estado: \n");
    scanf(" %c", &estado);

    printf("Digite o código da cidade: \n");
    scanf("%s", codigo);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area);

    printf("Qual é o PIB: \n");
    scanf("%f", &pib);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos);

    densPop = populacao / area;
    pibPerCapita1 = (pib * 1000000000) / populacao;

    printf("Digite a siglas do estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o código da cidade: \n");
    scanf(" %s", codigo2);

    printf("Digite o Nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a quantidade da população: \n");
    scanf("%f", &populacao2);

    printf("Digite o tamanho da área: \n");
    scanf("%f", &area2);

    printf("Qual é o PIB: \n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos: \n");
    scanf("%d", &pontosTuristicos2);

    densPop2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\nCarta 1: \n");
    printf("Estado: %c \n", estado);
    printf("Código: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %.2f \n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/Km² \n", densPop);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %.2f \n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d \n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/Km² \n", densPop2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}

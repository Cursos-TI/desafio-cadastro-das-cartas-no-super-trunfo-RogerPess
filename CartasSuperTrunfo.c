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
    float superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite a sigla do estado: \n");
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
    superPoder1 = populacao + area + pib + pontosTuristicos + pibPerCapita1 + (1/densPop);

    printf("Digite a sigla do estado: \n");
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
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1/densPop2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

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
    printf("Super Poder: %.2f \n", superPoder1);

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
    printf("Super Poder: %.2f \n", superPoder2);

    float valorPopulacao = populacao > populacao2;
    float valorArea = area > area2;
    float valorPIB = pib > pib2;
    int valorPontoTuristicos = pontosTuristicos > pontosTuristicos2;
    float valorDensPop = (1 / densPop) > (1 / densPop2);
    float valorPibPerCap = pibPerCapita1 > pibPerCapita2;
    float valorSuperPoder = superPoder1 > superPoder2;

    printf("\nComparação de cartas: \n");

    if (populacao > populacao2) {
        printf("\nPopulação: Carta 1 venceu\n");
    } else {
        printf("População: Carta 2 venceu\n");
    };

    if (area > area2) {
        printf("Área: Carta 1 venceu\n");
    } else {
        printf("Área: Carta 2 venceu\n");
    };

    if (pib > pib2) {
        printf("PIB: Carta 1 venceu\n");
    } else {
        printf("PIB: Carta 2 venceu\n");
    };

    if (pontosTuristicos > pontosTuristicos2) {
        printf("Pontos Turísticos: Carta 1 venceu\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu\n");
    };

    if (densPop < densPop2) {
        printf("Densidade Populacional: Carta 1 venceu\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu\n");
    };

    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu\n");
    };

    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu\n");
    } else {
        printf("Super Poder: Carta 2 venceu\n");
    };
    

    printf("\nComparação de cartas (Atributo: População) \n");

    printf("\nCarta 1 - São Paulo (%s): %.2f \n",nome, populacao );
    printf("Carta 2 - Rio de Janeiro (%s): %.2f \n",nome2, populacao2 );

    if(populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu\n ", nome);
    } else {
        printf("Resultado: Carta 2 (%s) venceu\n", nome2);
    }

    return 0;
}
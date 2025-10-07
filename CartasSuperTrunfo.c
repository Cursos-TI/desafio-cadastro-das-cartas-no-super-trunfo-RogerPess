#include <stdio.h>

// Desafio Super Trunfo - Países
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado, estado2, codigo[5], codigo2[5], nome[50], nome2[50];
    int pontosTuristicos, pontosTuristicos2;
    float populacao, populacao2, area, area2, pib, pib2;
    float densPop, densPop2, pibPerCapita1, pibPerCapita2;
    float superPoder1, superPoder2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite a sigla do estado da primeira cidade: ");
    scanf(" %c", &estado);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome);

    printf("Digite a quantidade da populacao: ");
    scanf("%f", &populacao);

    printf("Digite o tamanho da area (em km2): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    densPop = populacao / area;
    pibPerCapita1 = (pib * 1000000000) / populacao;
    superPoder1 = populacao + area + pib + pontosTuristicos + pibPerCapita1 + (1.0f / densPop);

    printf("\nDigite os dados da segunda cidade:\n");

    printf("Digite a sigla do estado: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo da cidade: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);

    printf("Digite a quantidade da populacao: ");
    scanf("%f", &populacao2);

    printf("Digite o tamanho da area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densPop2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densPop2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("Populacao: %.2f\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km2\n", densPop);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("Super poder: %.2f\n", superPoder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %.2f\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densPop2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("Super poder: %.2f\n", superPoder2);

    // Comparação interativa das cartas
    int opcao1, opcao2, i;
    float somaCarta1 = 0, somaCarta2 = 0;
    char atributo1[50], atributo2[50];

    float valorPopulacao = populacao;
    float valorPopulacao2 = populacao2;
    float valorArea = area;
    float valorArea2 = area2;
    float valorPIB = pib;
    float valorPIB2 = pib2;
    float valorPontoTuristicos = pontosTuristicos;
    float valorPontoTuristicos2 = pontosTuristicos2;
    float valorDensPop = densPop;
    float valorDensPop2 = densPop2;
    float valorPibPerCap = pibPerCapita1;
    float valorPibPerCap2 = pibPerCapita2;
    float valorSuperPoder = superPoder1;
    float valorSuperPoder2 = superPoder2;

    printf("\nEscolha o primeiro atributo para comparacao:\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    if (opcao1 < 1 || opcao1 > 7)
    {
        printf("Opcao invalida!\n");
        return 0;
    }

    printf("\nAgora escolha o segundo atributo (diferente do primeiro):\n");
    for (i = 1; i <= 7; i++)
    {
        if (i != opcao1)
        {
            switch (i)
            {
            case 1:
                printf("1. Populacao\n");
                break;
            case 2:
                printf("2. Area\n");
                break;
            case 3:
                printf("3. PIB\n");
                break;
            case 4:
                printf("4. Pontos Turisticos\n");
                break;
            case 5:
                printf("5. Densidade Populacional\n");
                break;
            case 6:
                printf("6. PIB per Capita\n");
                break;
            case 7:
                printf("7. Super Poder\n");
                break;
            }
        }
    }
    scanf("%d", &opcao2);

    if (opcao2 < 1 || opcao2 > 7 || opcao2 == opcao1)
    {
        printf("Opcao invalida ou repetida!\n");
        return 0;
    }

    float valorEscolhido1_C1, valorEscolhido1_C2;
    float valorEscolhido2_C1, valorEscolhido2_C2;

    // Primeiro atributo
    switch (opcao1)
    {
    case 1:
        sprintf(atributo1, "Populacao");
        valorEscolhido1_C1 = valorPopulacao;
        valorEscolhido1_C2 = valorPopulacao2;
        break;
    case 2:
        sprintf(atributo1, "Area");
        valorEscolhido1_C1 = valorArea;
        valorEscolhido1_C2 = valorArea2;
        break;
    case 3:
        sprintf(atributo1, "PIB");
        valorEscolhido1_C1 = valorPIB;
        valorEscolhido1_C2 = valorPIB2;
        break;
    case 4:
        sprintf(atributo1, "Pontos Turisticos");
        valorEscolhido1_C1 = valorPontoTuristicos;
        valorEscolhido1_C2 = valorPontoTuristicos2;
        break;
    case 5:
        sprintf(atributo1, "Densidade Populacional");
        valorEscolhido1_C1 = valorDensPop;
        valorEscolhido1_C2 = valorDensPop2;
        break;
    case 6:
        sprintf(atributo1, "PIB per Capita");
        valorEscolhido1_C1 = valorPibPerCap;
        valorEscolhido1_C2 = valorPibPerCap2;
        break;
    case 7:
        sprintf(atributo1, "Super Poder");
        valorEscolhido1_C1 = valorSuperPoder;
        valorEscolhido1_C2 = valorSuperPoder2;
        break;
    }

    somaCarta1 += valorEscolhido1_C1;
    somaCarta2 += valorEscolhido1_C2;

    // Segundo atributo
    switch (opcao2)
    {
    case 1:
        sprintf(atributo2, "Populacao");
        valorEscolhido2_C1 = valorPopulacao;
        valorEscolhido2_C2 = valorPopulacao2;
        break;
    case 2:
        sprintf(atributo2, "Area");
        valorEscolhido2_C1 = valorArea;
        valorEscolhido2_C2 = valorArea2;
        break;
    case 3:
        sprintf(atributo2, "PIB");
        valorEscolhido2_C1 = valorPIB;
        valorEscolhido2_C2 = valorPIB2;
        break;
    case 4:
        sprintf(atributo2, "Pontos Turisticos");
        valorEscolhido2_C1 = valorPontoTuristicos;
        valorEscolhido2_C2 = valorPontoTuristicos2;
        break;
    case 5:
        sprintf(atributo2, "Densidade Populacional");
        valorEscolhido2_C1 = valorDensPop;
        valorEscolhido2_C2 = valorDensPop2;
        break;
    case 6:
        sprintf(atributo2, "PIB per Capita");
        valorEscolhido2_C1 = valorPibPerCap;
        valorEscolhido2_C2 = valorPibPerCap2;
        break;
    case 7:
        sprintf(atributo2, "Super Poder");
        valorEscolhido2_C1 = valorSuperPoder;
        valorEscolhido2_C2 = valorSuperPoder2;
        break;
    }
    somaCarta1 += valorEscolhido2_C1;
    somaCarta2 += valorEscolhido2_C2;

    // Impressão final corrigida
    printf("\n==================== RESULTADO FINAL ====================\n");
    printf("1) Paises: %s (Carta 1)  x  %s (Carta 2)\n", nome, nome2);
    printf("2) Atributos usados: %s e %s\n", atributo1, atributo2);

    printf("3) Valores de cada atributo:\n");
    printf("   - %s: Carta 1 = %.2f | Carta 2 = %.2f\n", atributo1, valorEscolhido1_C1, valorEscolhido1_C2);
    printf("   - %s: Carta 1 = %.2f | Carta 2 = %.2f\n", atributo2, valorEscolhido2_C1, valorEscolhido2_C2);

    printf("4) Soma total dos dois atributos:\n");
    printf("   - Carta 1 (%s) = %.2f\n", nome, somaCarta1);
    printf("   - Carta 2 (%s) = %.2f\n", nome2, somaCarta2);

    printf("5) Resultado: ");
    (somaCarta1 == somaCarta2)
        ? printf("Empate!\n")
        : printf("Carta %d venceu (%s)\n",
                 somaCarta1 > somaCarta2 ? 1 : 2,
                 somaCarta1 > somaCarta2 ? nome : nome2);

    return 0;
}
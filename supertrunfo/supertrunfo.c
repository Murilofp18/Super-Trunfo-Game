#include <stdio.h>

// estrutura para agrupar os dados de uma carta
typedef struct {
    char estado;
    char codigoDaCarta[50];
    char nomeDaCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
} Carta;

int main(){
    // Criação de duas cartas como variaveis
    Carta carta1, carta2;
    int opcao;
    printf("Bem-vindo ao jogo Super Trunfo - Cidades Brasileiras!\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

switch (opcao)
{
case 1:
    // Cadastro da Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta1.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta1.codigoDaCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeDaCidade);
    printf("Digite a população: ");
    scanf("%d", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);
    carta1.densidadePopulacional = (float)carta1.populacao / carta1.area;

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &carta2.estado);
    printf("Digite o código da carta: ");
    scanf("%s", carta2.codigoDaCarta);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeDaCidade);
    printf("Digite a população: ");
    scanf("%d", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);
    printf("Digite os pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    carta2.densidadePopulacional = (float)carta2.populacao / carta2.area;

    // Super poder das cartas
    float superPoderCarta1 = carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.densidadePopulacional;
    float superPoderCarta2 = carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.densidadePopulacional;

    // Exibição dos dados com todas as informações cadastradas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoDaCarta);
    printf("Nome da Cidade: %s\n", carta1.nomeDaCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f habitantes/km²\n", carta1.densidadePopulacional);
    printf ("Pib per capita: %.2f reais\n", (carta1.pib * 1000000000) / carta1.populacao);
    printf("Super Poder: %.2f\n", superPoderCarta1);
    printf("--------------------------------------------------\n");

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoDaCarta);
    printf("Nome da Cidade: %s\n", carta2.nomeDaCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f habitantes/km²\n", carta2.densidadePopulacional);
    printf ("Pib per capita: %.2f reais\n", (carta2.pib * 1000000000) / carta2.populacao);
    printf("Super Poder: %.2f\n", superPoderCarta2);
    printf("--------------------------------------------------\n");

    printf("\n--- Resultado da Batalha ---\n");

    int escolha1, escolha2;
    float valor1Carta1, valor1Carta2;
    float valor2Carta1, valor2Carta2;
    char nomeAtributo1[30], nomeAtributo2[30];

    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    printf("Opção: ");
    scanf("%d", &escolha2);

    // Primeiro Switch para definir o Atributo 1
    switch (escolha1) {
        case 1:
            valor1Carta1 = (float)carta1.populacao;
            valor1Carta2 = (float)carta2.populacao;
            sprintf(nomeAtributo1, "População");
            break;
        case 2:
            valor1Carta1 = carta1.area;
            valor1Carta2 = carta2.area;
            sprintf(nomeAtributo1, "Área");
            break;
        case 3:
            valor1Carta1 = carta1.pib;
            valor1Carta2 = carta2.pib;
            sprintf(nomeAtributo1, "PIB");
            break;
        case 4:
            valor1Carta1 = (float)carta1.pontosTuristicos;
            valor1Carta2 = (float)carta2.pontosTuristicos;
            sprintf(nomeAtributo1, "Pontos Turísticos");
            break;
        case 5:
            valor1Carta1 = carta1.densidadePopulacional;
            valor1Carta2 = carta2.densidadePopulacional;
            sprintf(nomeAtributo1, "Densidade");
            break;
        default:
            printf("Atributo 1 inválido!\n");
            break;
    }

    // Segundo Switch para o Atributo 2
    switch (escolha2) {
        case 1:
            valor2Carta1 = (float)carta1.populacao;
            valor2Carta2 = (float)carta2.populacao;
            sprintf(nomeAtributo2, "População");
            break;
        case 2:
            valor2Carta1 = carta1.area;
            valor2Carta2 = carta2.area;
            sprintf(nomeAtributo2, "Área");
            break;
        case 3:
            valor2Carta1 = carta1.pib;
            valor2Carta2 = carta2.pib;
            sprintf(nomeAtributo2, "PIB");
            break;
        case 4:
            valor2Carta1 = (float)carta1.pontosTuristicos;
            valor2Carta2 = (float)carta2.pontosTuristicos;
            sprintf(nomeAtributo2, "Pontos Turísticos");
            break;
        case 5:
            valor2Carta1 = carta1.densidadePopulacional;
            valor2Carta2 = carta2.densidadePopulacional;
            sprintf(nomeAtributo2, "Densidade");
            break;
        default:
            printf("Atributo 2 inválido!\n");
            break;
    }

    // Comparação Final
    if (escolha1 != escolha2) {
        float soma1 = valor1Carta1 + valor2Carta1;
        float soma2 = valor1Carta2 + valor2Carta2;

        printf("\nComparando %s e %s:\n", nomeAtributo1, nomeAtributo2);
        printf("Carta 1 - %s: %.2f, %s: %.2f | Soma: %.2f\n", nomeAtributo1, valor1Carta1, nomeAtributo2, valor2Carta1, soma1);
        printf("Carta 2 - %s: %.2f, %s: %.2f | Soma: %.2f\n", nomeAtributo1, valor1Carta2, nomeAtributo2, valor2Carta2, soma2);

        // Lógica especial para Densidade (se um dos atributos for densidade, o menor valor contribui mais)
        if (soma1 > soma2) {
            printf("Resultado: Carta 1 VENCEU!\n");
        } else if (soma2 > soma1) {
            printf("Resultado: Carta 2 VENCEU!\n");
        } else {
            printf("Resultado: EMPATE!\n");
        }
    } else {
        printf("Erro: Você escolheu o mesmo atributo duas vezes.\n");
    }

    break;

case 2:
    printf("Saindo do jogo. Até a próxima!\n");
    break;

default:
    printf("Opção inválida!\n");
    break;
}

    return 0;
}
    
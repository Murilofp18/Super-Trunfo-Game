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

    printf("-- População --\n");
    if (carta1.populacao > carta2.populacao) {
        printf("Carta 1 venceu!\n");
    } else if (carta2.populacao > carta1.populacao) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("-- Area --\n");
    if (carta1.area > carta2.area) {
        printf("Carta 1 venceu!\n");
    } else if (carta2.area > carta1.area) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("-- PIB --\n");
    if (carta1.pib > carta2.pib) {
        printf("Carta 1 venceu!\n");
    } else if (carta2.pib > carta1.pib) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("-- Pontos Turísticos --\n");
    if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
        printf("Carta 1 venceu!\n");
    } else if (carta2.pontosTuristicos > carta1.pontosTuristicos) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("-- Densidade Populacional --\n");
    // No Super Trunfo, o menor valor de densidade vence
    if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
        printf("Carta 1 venceu!\n");
    } else if (carta2.densidadePopulacional < carta1.densidadePopulacional) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    printf("-- Super Poder Total --\n");
    if (superPoderCarta1 > superPoderCarta2) {
        printf("Carta 1 venceu!\n");
    } else if (superPoderCarta2 > superPoderCarta1) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
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
    
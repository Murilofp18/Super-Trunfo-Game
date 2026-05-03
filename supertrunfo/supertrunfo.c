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
} Carta;

int main(){
    // Criação de duas cartas como variaveis
    Carta carta1, carta2;

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

    // Exibição dos dados com todas as informações cadastradas
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigoDaCarta);
    printf("Nome da Cidade: %s\n", carta1.nomeDaCidade);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade populacional: %.2f habitantes/km²\n", carta1.populacao / carta1.area);
    printf ("Pib per capita: %.2f reais\n", (carta1.pib * 1000000000) / carta1.populacao);
    printf("--------------------------------------------------\n");

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigoDaCarta);
    printf("Nome da Cidade: %s\n", carta2.nomeDaCidade);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade populacional: %.2f habitantes/km²\n", carta2.populacao / carta2.area);
    printf ("Pib per capita: %.2f reais\n", (carta2.pib * 1000000000) / carta2.populacao);
    printf("--------------------------------------------------\n");

    return 0;
}
#include <stdio.h>
int main() {
    float nota1, nota2, nota3, media;
    
    printf("--- Calculadora de Média ---\n");
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    media = (nota1 + nota2 + nota3) / 3;
    
    printf("A média das notas é: %.2f\n", media);
    
    if (media >= 7) {
        printf("Parabéns! Você foi aprovado.\n");
    } else {
        printf("Infelizmente, você foi reprovado.\n");
    }
    
    return 0;
}
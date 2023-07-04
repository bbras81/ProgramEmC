#include <stdio.h>  
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    int idade;
    float peso;

    printf("<<< EX003 - Dados >>>\n \n");
    printf("Qual é o seu nome? ");
    gets(nome);

    printf("Quantos anos você tem? ");
    scanf("%i", &idade);
    printf("Qual é o seu peso? (Kg) ");
    scanf("%f", &peso);
    printf("\n \n");
    printf("-------<<< PROCESSANDO >>>-------\n");
    printf("Muito prazer, %s. Você tem %i anos e pesa %.3fkg correto?\n", nome, idade, peso);
    printf("FIM");


}
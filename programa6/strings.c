#include <stdio.h>

void main(){
    char nome[30];
    char ender[40];
    printf("digite o seu nome: \n");
    fflush(stdin);
    gets(nome);
    printf("Insira a morada:");
    fflush(stdin);
    gets(ender);
    printf("O seu nome é : %s\n e mora na %s\n", nome, ender);

}
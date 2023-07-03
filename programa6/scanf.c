#include <stdio.h>

void main(){

    int num;
    float med;
    char resp;
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("Digite a Média: ");
    scanf("%f", &med);

    printf("Insira o seu nome: \n");
    // Colocar sempre um espaço antes do %c
    //scanf(" %c", &resp);
    //fflush(stdin);
    resp = getchar();

    

    printf("O numero é %d e a med é %.2f\n", num, med);
    printf("O seu nome é %c\n", resp);

}
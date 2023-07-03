#include <stdio.h>

void main(){
    int idade = 33;
    float peso = 85.9;
    char sexo = 'M';
    char *nome = "Juvenal";
    printf("%s é do sexo %c, tem %i anos e pesa %.1fkg.\n", nome, sexo, idade, peso);
}
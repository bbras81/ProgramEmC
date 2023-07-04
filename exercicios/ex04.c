#include <stdio.h>

main() {
    char nome1[15];
    char sexo1;
    float nota1;
    char nome2[15];
    char sexo2;
    float nota2;
    char nome3[15];
    char sexo3;
    float nota3;

    printf("<<< Ex004 - Listgem >>>\n\n\n");

    printf("Cadastrando a primeira pessoa:\n");
    printf("------------------------------\n\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome1);
    printf("SEXO [M/F]: ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);
    printf("Cadastrando a segunda pessoa:\n");
    printf("------------------------------\n\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);
    printf("Cadastrando a terceira pessoa:\n");
    printf("------------------------------\n\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("listtagem Completa\n");
    printf("------------------------------\n\n");
    printf("<NOME 30> ")


}
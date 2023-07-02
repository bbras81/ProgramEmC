#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("Oi \n");

    //"\n serve para quebrar a linha!"
    printf("Oi, \ntudo \nbem?");

    /*  CARACTERES DE ESCAPE
        \t Tabulaçao
        \b backspace
        \r retorno
        \\
        \"
        \?
        \a ou \7 beep
        %%
    */

    printf("Oi, \ttudo \tbem? \a \n");

    printf("C  \n\"super\"\nFacil!");
}

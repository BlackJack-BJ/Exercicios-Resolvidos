#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Eu amo essa palavra, "void"
void repetidor(char *txt, int vezes) 
{
    int c4; // É isso aí, C4
    for (c4 = 1; c4 <= vezes; c4++) 
    {
        printf("%s ", txt);
    }
}

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int numero, c, cont = 0;

    // É, usei o "c" porque o "i" precisava descansar
    printf("Digite um numero inteiro entre 0 e 8: ");
    scanf("%d", &numero);

    for (c = 0; c <= numero; c++) 
    {
        cont++;
        repetidor("*", cont);
        printf("\n");
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p;
    // Alocar região dinamicamente
    p = (int *)malloc(sizeof(int));
    /*A função malloc() vai vasculhar na memória do computador por uma região
    de memória livre, caso não consiga encontrar ela vai retornar NULL,
    por outro lado,  caso  o malloc encontre uma região disponível ele retornará VOID
    e se retorna VOID, será necessário o uso do (<cast *>)*/

    /*O espaço que o malloc encontrar será guardado no endereço
    na qual o ponteiro aponta*/
    if (p == NULL)
    {
        printf("Erro\n");
    }
    else
    {
        /*Para trabalhar com o conteúdo da
        variável alocada dinâmicamente vou precisar do ponteiro
        que armazena o endereço dela, junto do operador (*)*/
        *p = 10;
        printf("Variável dinâmica: %d\n", *p);
        free(p);
    }
}
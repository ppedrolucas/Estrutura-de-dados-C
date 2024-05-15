#include <stdio.h>
#include <stdlib.h>
// ALOCAÇÃO DINÂMICA DE MEMÓRIA.

// Declarando ponteiro com o *.
int *ptr;
int *ptrVetor;

int main()
{
    printf("Criando espaço de memória dinamicamente para variáveis simples.\n");
    // Criando espaço na mémória para ptr.
    ptr = (int *)malloc(sizeof(int));
    // MALLOC é a função responsável por reservar um bloco de BYTES na memória.
    /* SIZEOF é a função responsável
    por calcular o tamanho em BYTES daquele tipo de dado específico.*/
    if (ptr == NULL)
    {
        /*Se o MALLOC não encontrar nenhum espaço na memória,
        ele retornará NULL.*/
        printf("Erro!, espaço não encontrado\n");
    }
    else
    {
        // Alterando o conteúdo do ponteiro com *
        *ptr = 2024;
        // Imprimindo resultado na tela.
        printf("Enderço: %p\nValor: %d\n", ptr, *ptr);
        system("pause");
        free(ptr);
        // FREE desfaz a variável que foi reservada dinamicamente.
    }

    printf("Criando espaço de memória dinamicamente para vetores.\n");
    // Sintaxe
    ptrVetor = (int *)malloc(sizeof(int) * 8);
    /*A diferença em relação a variáveis simples é
    a multiplicação do tamanho do tipo do vetor com
    tamanho do próprio vetor, suas posições*/
}
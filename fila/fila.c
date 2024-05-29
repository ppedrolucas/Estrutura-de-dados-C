#include <stdio.h>
#include <stdlib.h>

#define tamanho 4

// Estrutura fila
struct tipo_fila
{
    int dados[tamanho];
    int inicio;
    int fim;
};

// Variável tipo fila
struct tipo_fila fila;

// Enfileirar push_back
void enfileira()
{
    // Para enfileirar elementos primeiro  é preciso verificar se há espaço disponível na fila.
    if (fila.fim == tamanho)
    // Se o fim da fila for igual ao tamanho total dela então não há espaço disponível
    {
        printf("Erro\n");
    }
    else
    {
        /*Campo dados da var fila na posição "fila.fim" vai receber o elemento*/
        printf("Digite o valor para a fila:\n");
        scanf("%d", fila.dados[fila.fim]);
        fila.fim++;
    }
}
// Desenfileirar pop
int desenfileira()
{
    if (fila.fim == fila.inicio)
    {
        printf("Fila vazia\n");
    }
    else
    {
        for (int i = 0; i < tamanho; i++)
        {
            fila.dados[i] = fila.dados[i + 1];
        }
        fila.dados[fila.fim] = 0;
        fila.fim++;
    }
}

// Mostrar o conteúdo da Fila
void fila_mostrar()
{
    int i;
    printf("[ ");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", fila.dados[i]);
    }
    printf("]\n\n");
}
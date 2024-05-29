#include <stdio.h>
#include <stdlib.h>

#define tamanho 8
// Estrutura da pilha
struct tipo_pilha
{
    /*Dados que serão armazenados*/
    int dado[tamanho];
    /*Início da pilha*/
    int inicio;

    /*Topo da pilha*/
    int topo;
};

// Variável  do tipo pilha
struct tipo_pilha pilha;

// Função para empilhar
void empilhar()
{
    if (pilha.topo == tamanho)
    {
        printf("Fila cheia.\n");
        system("pause");
    }
    else
    {
        printf("Digite o valor a ser empilhado:\n");
        scanf("%d", &pilha.dado[pilha.topo]);
        pilha.topo++;
    }
}

// Função para desempilhar
int desempilha()
{
    if (pilha.topo == pilha.inicio)
    {
        printf("Fila vazia");
        system("pause");
    }
    else
    {
        pilha.dado[pilha.topo - 1] = 0;
        pilha.topo--;
    }
}

// Mostrar o conteúdo da Pilha
void pilha_mostrar()
{
    int i;
    printf("[ ");
    // Percorrer todas as posições da pilha
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", pilha.dado[i]);
    }
    printf("]\n\n");
}

int main()
{
    int operacao = 0;

    pilha_mostrar();

    while (pilha.topo != tamanho)
    {
        empilhar();
    }

    printf("Digite 1 para desempilhar ou 2 para mostrar a pilha\n");
    scanf("%d", &operacao);

    switch (operacao)
    {
    case 1:
        desempilha();
        break;
    case 2:
        pilha_mostrar();
        break;

    default:
        printf("Formato inválido\n");
        break;
    }
    pilha_mostrar();
}
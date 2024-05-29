#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Lista dinâmica

// Estrutura  do Nó
typedef struct no
{
    int dado;           // Guardar informação
    struct no *proximo; // Guardar endereço do próximo nó
} no;

// Ponteiro responsável por alocar novo nó
typedef no *ptr_no;
// Variável que aponta para o início da lista
ptr_no lista;
int operacao;

/*A variável do tipo ponteiro lista foi criada para apontar para
a nossa lista encadeada. Como ela ainda não existe, vamos criar
o primeiro nó com o atributo dado valendo 0 e
o ponteiro proximo apontando para null*/

// Prototipação
void menu_mostrar();
void menu_selecionar(int op);
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);
void lista_mostrar(ptr_no lista);

int main()
{
    srand(time(NULL));
    operacao = 1;

    // Criar o primeiro elemento da lista
    lista = (ptr_no)malloc(sizeof(no));
    lista->dado = 0;
    lista->proximo = NULL;

    // Laço principal
    while (operacao != 0)
    {
        system("cls");
        menu_mostrar();
        scanf("%d", &operacao);
        menu_selecionar(operacao);
    }
    system("Pause");
    return (0);
}

// Mostra o menu de opções
void menu_mostrar()
{
    lista_mostrar(lista);
    printf("\n\nEscolha uma das opcoes:\n");
    printf("1 - Inserir no final da Lista\n");
    printf("2 - Remover um item da Lista\n");
    printf("0 - Sair\n\n");
}

// Função para executar a opção escolhida no menu
void menu_selecionar(int operacao)
{
    switch (operacao)
    {
    case 1:
        lista_inserir(lista);
        break;
    case 2:
        lista_remover(lista);
        break;
    }
}

// Função para imprimir o conteúdo da lista, recebe como parâmetro a variável lista
void lista_mostrar(ptr_no lista)
{
    system("cls");
    while (lista->proximo != NULL)
    {
        printf("%d, ", lista->dado);
        lista = lista->proximo;
    }
    printf("%d, ", lista->dado);
}

// Função para inserir elementos na lista
void lista_inserir(ptr_no lista)
{
    while (lista->proximo != NULL)
    {
        lista = lista->proximo;
    }
    lista->proximo = (ptr_no)malloc(sizeof(no));
    lista = lista->proximo;
    lista->dado = rand() % 100;
    lista->proximo = NULL;
}

// Função para remover elementos da lista
void lista_remover(ptr_no lista)
{
    int dado;
    ptr_no atual; // Variável para o backup do elemento que será removido
    atual = (ptr_no)malloc(sizeof(no));
    // Usuário vai esolher o elemento a ser removido
    printf("\n\nEscolha uma dos itens:\n");
    scanf("%d", &dado);
    while ((lista->dado != dado))
    {
        if (lista->proximo == NULL)
        {
            break;
        }
        atual = lista;
        lista = lista->proximo;
    }
    if (lista->dado == dado)
    {
        atual->proximo = lista->proximo;
    }
}

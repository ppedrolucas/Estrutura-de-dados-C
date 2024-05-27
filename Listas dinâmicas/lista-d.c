#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Criar estrutura no/ o elemento da lista dinamica
typedef struct no
{
    int dado;
    struct no *proximo;
} no;

// Definindo variáveis
//  Declarar ponteiro do tipo nó
typedef no *ptr_no;
// Variável do tipo "ponteiro de no" que apontará para o início da lista
ptr_no lista;
int op;

// Prototipação
void menu_mostrar();
void menu_selecionar();
void lista_inserir(ptr_no lista);
void lista_remover(ptr_no lista);
void lista_mostrar(ptr_no lista);

int main()
{
    // Inicializando máquina de números randômicos
    srand(time(NULL));
    op = 1;
    // Criando o primeiro nó da lista
    lista = (ptr_no)malloc(sizeof(no));
    lista->dado = 0;
    lista->proximo = NULL;
    // Laço principal
    while (op != 0)
    {
        system("cls");
        menu_mostrar();
        scanf("%d", &op);
        menu_selecionar(op);
    }
    system("Pause");
    return (0);

    /*lista = (ptr_no)malloc(sizeof(no));
    lista->dado = 0;
    lista->proximo = NULL;*/
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
// Executa a opção escolhida no menu
void menu_selecionar(int op)
{
    switch (op)
    {
    case 1:
        lista_inserir(lista);
        break;
    case 2:
        lista_remover(lista);
        break;
    }
}

// Inserir elementos no final da lista
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

// Remove um elemento da Lista
void lista_remover(ptr_no lista)
{
    int dado;
    ptr_no atual;
    atual = (ptr_no)malloc(sizeof(no));
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

// Mostrar lista na tela
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
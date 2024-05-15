#include <stdio.h>
#include <stdlib.h>
// PROPRIEDADES DE PONTEIROS.

int awp;
int *ponteiro_de_awp;

void imprimir()
{
    printf("Valor de awp = %d\n", awp);
    printf("Endereço da variável &awp = %p\n", &awp);
    printf("Endereço da variável para qual o ponteiro ponteiro_de_awp aponta = %p\n", ponteiro_de_awp + 2);
    printf("Conteúdo da variável para qual o ponteiro *ponteiro_de_awp aponta = %d\n", *ponteiro_de_awp - 1);
}

int main()
{
    // Aqui o ponteiro está recebendo o endereço da variável awp
    awp = 100;
    ponteiro_de_awp = &awp;
    imprimir();
    system("pause");
}
#include <stdio.h>
#include <stdlib.h>
// PONTEIROS.

int awp;
int *ponteiro_de_awp;

void imprimir()
{
    printf("Valor de awp = %d\n", awp);
    printf("Endereço da variável &awp = %p\n", &awp);
    printf("Endereço da variável para qual o ponteiro ponteiro_de_awp aponta = %p\n", ponteiro_de_awp);
    printf("Conteúdo da variável para qual o ponteiro *ponteiro_de_awp aponta = %d\n", *ponteiro_de_awp);
}

int main()
{
    // Aqui o ponteiro está recebendo o endereço da variável awp
    awp = 100;
    ponteiro_de_awp = &awp;
    imprimir();
    system("pause");

    // Aqui alteramos o conteúdo da variável awp
    awp = 64;
    imprimir();
    system("pause");

    // Aqui altermos o conteúdo da variável awp através do ponteiro dela
    *ponteiro_de_awp = 2024;
    imprimir();
    system("pause");
    /*
    int awp;
    int *ponteiro_de_awp;
    int pikaw;

    // Saber o endereço de variável na memória
    ponteiro_de_awp = &awp;
    printf("Endereço da variável: %p\n", ponteiro_de_awp);

    // Saber o conteúdo
    pikaw = *ponteiro_de_awp;
    printf("Conteúdo da variável para qual o ponteiro aponta: %d\n", pikaw);
    // Pikaw está recebendo o conteúdo da variável AWP, a qual o PONTEIRO está apontando.
    */
}
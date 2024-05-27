#include <stdio.h>
#include <stdlib.h>

int x;
int *ptr_x;

int main()
{
    x = 10;
    ptr_x = &x;

    printf("Conteúdo da variável: %d\n", x);
    printf("Endereço da variável: %p\n", ptr_x);
}
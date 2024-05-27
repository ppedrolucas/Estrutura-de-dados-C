#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ALOCAR VETOR DINAMICAMENTE
int main()
{
    int tamanho;
    int *vetor;

    printf("Escolha o tamanho do vetor: \n");
    scanf("%d", &tamanho);
    // Alocar região dinamicamente
    // Cria-se o espaço dinamicamente e multiplica pelo tamanho do vetor
    vetor = (int *)malloc(sizeof(int) * tamanho);
    if (vetor == NULL)
    {
        printf("Erro\n");
    }
    else
    {
        for (int i = 0; i < tamanho; i++)
        {
            vetor[i] = pow(2, i);
            printf("Posicao %d: %d\n", i, vetor[i]);
        }
    }
    free(vetor);
}
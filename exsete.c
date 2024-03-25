// Escreva um procedimento que receba dois vetores de inteiros e um terceiro vetor vazio. O procedimento deve preencher o terceiro vetor com a soma dos valores dos dois primeiros vetores nas respectivas posições.

#include <stdio.h>

void somaVetor(int vetor1[], int vetor2[], int total[], int tamanho)
{
    for(int i = 0; i < tamanho; i++){
        total[i] = vetor1[i] + vetor2[i];
    }
    return 0;
}

int main()
{
    int tamanho = 3;
    int vetor1[tamanho];
    int vetor2[tamanho];
    int total[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite 3 numeros inteiros para o vetor 1, um de cada vez [%d]:\n", i);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite 3 numeros inteiros para o vetor 2, um de cada vez [%d]:\n", i);
        scanf("%d", &vetor2[i]);
    }

    somaVetor(vetor1, vetor2, total, tamanho);

   printf("Vetor Resultado da Soma:\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", total[i]);
    }
    printf("\n");

    return 0;
}

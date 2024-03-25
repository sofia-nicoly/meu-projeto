// Escreva um procedimento que receba um vetor de inteiros e ordene o vetor em ordem crescente.

#include <stdio.h>

void ordemCrescente(int vetor[], int tamanho)
{
    int j, temp;
    for (int i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - i - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int tamanho = 3;
    int vetor[tamanho];
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite 3 numeros inteiros para serem adicionados ao vetor, um de cada vez [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    ordemCrescente(vetor, tamanho);

    printf("O vetor em ordem crescente e: ");
    for (i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
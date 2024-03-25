// Escreva uma função que receba um vetor de inteiros e retorne o maior valor presente no vetor.
#include <stdio.h>

int valorMaior(int vetor[], int tamanho)
{
    int maior = vetor[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    return maior;
}

int main()
{
    int tamanho = 3;
    int vetor[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite 3 numeros inteiros para serem adicionados ao vetor, um de cada vez [%d]:", i);
        scanf("%d", &vetor[i]);
    }

    int maior = valorMaior(vetor, tamanho);
    printf("O maior numero no vetor e: %d\n", maior);

    return (0);
}
#include <stdio.h>

void imprimirVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

int main()
{
    int tamanho = 4;
    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite 3 numeros inteiros para serem adicionados ao vetor, um de cada vez [%d]:\n", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nOs valores do vetor sao: ");
    imprimirVetor(vetor, tamanho);

    return 0;
}

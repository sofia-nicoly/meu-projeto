#include <stdio.h>

int fatorialNum(int num)
{
    int fat = 1;
    for (int i = 1; i <= num; i++)
    {
        fat *= i;
    }

    return fat;
}

int main()
{

    int num;
    printf("Digite um numero: ");
    scanf("%d", &num);

    if (num >= 0)
    {
        int fat = fatorialNum(num);
        printf("O fatorial de %d e %d\n", num, fat);
    }
    else
    {
        printf("Fatorial de numero negativo nao e definido!\n");
    }

    return 0;
}

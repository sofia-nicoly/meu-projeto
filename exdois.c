// Crie um procedimento que receba uma string e imprima a mesma invertida.
#include <stdio.h>
#include <string.h>

void stringInvertida(char *str)
{
    int tamanho = strlen(str);
    for (int i = 0; i < tamanho / 2; i++)
    {
        char temp = str[i];
        str[i] = str[tamanho - 1 - i];
        str[tamanho - 1 - i] = temp;
    }
}

int main()
{

    char palavra[100];
    printf("Escreva uma palavra: ");
    scanf("%s", palavra);

    stringInvertida(palavra);

    printf("A palavra invertida fica assim: %s\n", palavra);

    return (0);
}
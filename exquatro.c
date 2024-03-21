#include <stdio.h>

int multi(int x, int y){
    return x*y;
}

int main(){
    int n1, n2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    int resultado = multi(n1,n2);
    printf("O resultado da soma entre vale: %d", resultado);
}
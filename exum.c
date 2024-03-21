#include <stdio.h>

int soma(int x, int y) {
    return x + y;
}

int main() {
    int n1, n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
 
    int resultado = soma(n1, n2);
    printf("Resultado: %d\n", resultado);
    return 0;
}

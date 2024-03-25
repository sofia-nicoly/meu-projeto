//Crie uma função que receba um número inteiro e retorne a quantidade de dígitos presentes no número.


#include <stdio.h>

int numDigitos(int num){
    int cont = 0;

    while (num !=0)
    {
        cont++;
        num /= 10;
    }
    

    return cont;
}

int main(){
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    int digitos = numDigitos(num);
    printf("O número %d tem %d de digitos presentes nele", num, digitos);

    return 0;
}
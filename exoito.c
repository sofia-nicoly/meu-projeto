#include <stdio.h>
#include <stdbool.h>

bool primo(int num){
    if(num <= 1){
        //printf("Falso: numero nao e primo.\n");
        return false;
    }

    for (int i = 2; i * i <= num; i++){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    int num;

    printf("Digite um numero: \n");
    scanf("%d", &num);

    if(primo(num)){
        printf("E primo \n");
    } else {
        printf("Nao e primo \n");
    }
    return(0);
}
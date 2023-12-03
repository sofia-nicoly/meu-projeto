#include <iostream>
#include <math.h>
using namespace std;
int main(){

int n1, n2, soma, sub, multi, quoci, mod, divr, potenc;

cout<<"Informe o primeiro numero: ";
cin>>n1;
cout<<"Informe o segundo numero: ";
cin>>n2;

soma = n1+n2;
sub = n1 - n2;
multi = n1*n2;
quoci = n1/n2;
mod = n1%n2;
divr = (float)n1/n2;
potenc = pow(n1,n2);

cout<<"A soma dos numeros: "<<soma<<"\nA subtracao dos numeros: "<<sub<<"\nA multiplicacao dos numeros: "<<multi<<"\nO quociente inteiro da divisao: "<<quoci<<"\nO resto da divisao: "<<mod<<"\nO resultado da divisao real: "<<divr<<"\nO resultado da potenciacao do 1 numero elevado ao 2: "<<potenc;

    return 0;
}
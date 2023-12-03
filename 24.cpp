#include <iostream>
#include <iomanip>
using namespace std;
int main(){

float saldo, ret1, ret2, dep, saldof, rett;

cout<<"Qual o seu saldo atual do seu banco CITYBANK? ";
cin>>saldo;
cout<<"Digite o valor da primeira retirada: ";
cin>>ret1;
cout<<"Digite o valor da segunda retirada: ";
cin>>ret2;
cout<<"Digite o valor do seu deposito: ";
cin>>dep;

cout<<setprecision(2)<<fixed;
rett = ret1+ret2;
saldof = (dep + saldo) - rett;

cout<<"Saldo anterior: "<<saldo<<"\nTotal de retiradas: "<<rett<<"\nTotal de depositos: "<<dep<<"\nSaldo final apos as movimentacoes: "<<saldof;

    return 0;
}
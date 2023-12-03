#include <iostream>
using namespace std;
int main(){

string aluno;
//eu poderia criar um vetor mas nao vou fazer pq nao lembro direito porem vou refazer esse mini querido um dia
float n1,n2,n3, media, mediap; 

cout<<"Qual o nome do aluno? ";
cin>>aluno;

cout<<"Adicionea seguir os valores das provas de Portugues, Matematica e Direito respectivamente \n";
cin>>n1;
cin>>n2;
cin>>n3;

// eu poderia pedir pra add os pesos mas vou colocar direto por saber quais sao
mediap = ((n1*2)+(n2*4)+(n3*3))/9;
media = n1+n2+n3/3;

cout<<"A media de "<<aluno<<" e igual a "<<media<<" e a media ponderada e "<<mediap;

return 0;
}
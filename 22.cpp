#include <iostream>
using namespace std;
int main(){

float C, F;

cout<<"Qual a temperatura em Fahrenheit? \n";
cin>>F;

C=(F-32)*5/9;

cout<<"A temperatura em Celcius e "<<C;

return 0;
}
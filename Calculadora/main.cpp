#include <iostream>
#include "Calculadora.h"
using namespace std;

int main()
{
    Calculadora calc;
    cout<<"3+3= "<<calc.somar(3.0, 3.0)<<endl;
    cout<<"3-5= "<<calc.subtrair(3.0, 5.0)<<endl;
    cout<<"3*5= "<<calc.multiplicar(3.0, 5.0)<<endl;
    cout<<"8/3= "<<calc.dividir(8.0, 3.0)<<endl;
    cout<<"5 elevado a 7= "<<calc.potencia(5.0, 7.0)<<endl;
    cout<<"raiz quarta de 625= "<<calc.raiz(625.0, 4.0)<<endl;
    cout<<"log de 625 na base 5= "<<calc.logaritmo(625.0, 5.0)<<endl;

    return 0;
}

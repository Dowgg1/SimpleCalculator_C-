#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <cmath>

class Calculadora
{
    public:
        Calculadora();
        float somar(float a, float b);
        float subtrair(float a, float b);
        float multiplicar(float a, float b);
        float dividir(float a, float b);
        float potencia(float a, float b);//pow(base, expoente)
        float raiz(float a, float b);//sqrt(numero)... para ra�z n-�sima... pow(numero, 1/indice)... ex.: para raiz quinta de 32: pow(32, 1/5)(MAS... s� funciona com float ou double, com int n�o)
        float logaritmo(float a, float b);//para log as fun��es log(a) e log(b) retornam os logs naturais de cada um, para conseguir o log de a na base b basta dividir log(a)/log(b)
        ~Calculadora();
    private:
};

#endif // CALCULADORA_H

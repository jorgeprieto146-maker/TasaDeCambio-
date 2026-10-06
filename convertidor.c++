#include <iostream>
#include <conio.h>
using namespace std;
float bsAdolares(float tasa, float cantidad)
{

    return cantidad / tasa;
}

float dolaresAbs(float cantidad, float tasa)
{

    float resultado;
    resultado = cantidad * tasa;
    return resultado;
}
int main()
{
    int opcion;
    cout << "Opcion 1 Bs a dolares,\nopcion 2: dolares a bs" << endl;
    cin >> opcion;

    float cantidad, tasa, resultado;
    switch (opcion)
    {
    case 1:
        cout << "Tasa (bs/$) : ";
        cin >> tasa;
        cout << "cantidad de bs: ";
        cin >> cantidad;
        resultado = bsAdolares(tasa, cantidad);
        cout << "Tu cantidad en $$ es: " << resultado << endl;
        break;

    case 2:
        cout << "dolares: ";
        cin >> cantidad;
        cout << "tasa(bs): ";
        cin >> tasa;
        resultado = dolaresAbs(cantidad, tasa);
        cout << "tu cantidad en Bs es: " << resultado << endl;
        break;
    default:
        cout << "opcion no valida\n";
        break;
    }
}
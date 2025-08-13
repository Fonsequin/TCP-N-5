#include <iostream> // Solicitar biblioteca
using namespace std;

int main() // Inicio de la funcion
{ // Arranque de la funcion
    float numero;
    float suma_total_de_la_lista_1 = 0;
    float suma_total_de_la_lista_2 = 0;
    cout << "Este programa compara 2 listas de 15 valores cada una y dice cual es mayor a la otra" << endl;
    for(int i = 1; i <= 3; i++)
    {
        cout << "Ingrese el numero " << i << " de la primera lista: ";
        cin >> numero;
        suma_total_de_la_lista_1 = suma_total_de_la_lista_1 + numero;
    }
    cout << endl << "Ahora con la segunda lista:" << endl;
    for(int j = 1; j <= 3; j++)
    {
        cout << "Ingrese el numero " << j << " de la segunda lista: ";
        cin >> numero;
        suma_total_de_la_lista_2 = suma_total_de_la_lista_2 + numero;
    }
    cout << endl;
    if(suma_total_de_la_lista_1 == suma_total_de_la_lista_2)
    {
        cout << "Ambas listas son iguales";
    }
    if(suma_total_de_la_lista_2 < suma_total_de_la_lista_1)
    {
        cout << "La lista numero 1 es la mayor";
    }
    if(suma_total_de_la_lista_1 < suma_total_de_la_lista_2)
    {
        cout << "La lista numero 2 es la mayor";
    }
    return 0; // Fin de la funcion
} // Cierre de la funcion
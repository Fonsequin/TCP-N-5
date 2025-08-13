#include <iostream>
using namespace std;

int main()
{
    int empleados;
    float sueldos;
    float suma_total;
    int menos_de_300k = 0;
    int mas_de_300k = 0;
    int menos_de_100k = 0;
    cout << "Registradora de sueldos de los empleados" << endl;
    cout << "Ingrese la cantidad de empleados a registrar: ";
    cin >> empleados;
    cout << endl;
    for(int i = 1; i <= empleados; i++)
    {
        cout << "Ingrese el salario del empleado: ";
        cin >> sueldos;
        suma_total = suma_total + sueldos;
        if(100000 <= sueldos and sueldos <= 300000)
        {
            menos_de_300k = menos_de_300k + 1;
        }
        else if(300000 < sueldos)
        {
            mas_de_300k = mas_de_300k + 1;
        }
        else if(100000 > sueldos)
        {
            menos_de_100k = menos_de_100k + 1;
        }
    }
    cout << "Hay un total de " << menos_de_100k << " empleados que tienen un salario menor a 100k" << endl;
    cout << "Hay un total de " << menos_de_300k << " empleados que tienen un salario entre 100k y 300k" << endl;
    cout << "Hay un total de " << mas_de_300k << " empleados que tienen un salario mayor a 300k" << endl;
    return 0;
}
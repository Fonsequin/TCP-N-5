#include <iostream>
using namespace std;

int main()
{
   float temperatura;
   float suma_total;
   float promedio;
   float minimo;
   float maximo;
   int cantidad = 0;
   cout << "Este programa calcula el promedio de temperatura, la temperatura mas baja y la mas alta" << endl;
   cout << "Ingrese la temperatura exterior: ";
   cin >> temperatura;
   minimo = temperatura;
   maximo = temperatura;
   suma_total = temperatura;
   while(cantidad < 5)
   {
       cout << "Ingrese la temperatura exterior: ";
       cin >> temperatura;
       suma_total = temperatura + suma_total;
       if(maximo < temperatura)
       {
           maximo = temperatura;
       }
       else if(temperatura < minimo)
       {
           minimo = temperatura;
       }
       cantidad++;
   }
   promedio = suma_total / 6;
   cout << endl;
   cout << "El promedio de temperaturas es de: " << promedio << endl;
   cout << "La temperatura mas baja es de: " << minimo << endl;
   cout << "La temperatura mas alta es de: " << maximo;
}

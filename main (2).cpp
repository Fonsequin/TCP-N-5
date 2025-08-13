#include <iostream>
using namespace std;
int main()
{
	float nota;
	float nota1;
	float nota2;
	int estudiantes = 1;
	int alumnos_aprobadisimos = 0;
	int alumnos_intermedios = 0;
	int alumnos_no_tan_aprobadisimos = 0;
	int numero = 1;
	cout << "Este programa determina cuantos alumnos aprobaron dependiendo su notas y cual examen es" << endl;
	while(estudiantes <= 5)
	{
		cout << "Estudiante numero " << numero << endl;
		cout << endl;
		cout << "Ingrese su primer nota del examen: ";
		cin >> nota;
		cout << "Ingrese su segunda nota del examen: ";
		cin >> nota1;
		cout << "Ingrese su tercer nota del examen: ";
		cin >> nota2;
		if(nota >= 7 and nota1 >= 7 and nota2 >= 7)
		{
		    alumnos_aprobadisimos = alumnos_aprobadisimos + 1;
		}
		else if(nota2 >= 7 and nota < 7 and nota1 < 7)
		{
		    alumnos_no_tan_aprobadisimos = alumnos_no_tan_aprobadisimos + 1;
		    alumnos_intermedios = alumnos_intermedios + 1;
		}
		else if(nota >= 7)
		{
		    alumnos_intermedios = alumnos_intermedios + 1;
		}
		else if(nota1 >= 7)
		{
		    alumnos_intermedios = alumnos_intermedios + 1;
		}
		else if(nota2 >= 7)
		{
		    alumnos_intermedios = alumnos_intermedios + 1;
		}
		estudiantes = estudiantes + 1;
		numero = numero + 1;
		cout << endl;
	}
	cout << "Hay un total de " << alumnos_aprobadisimos << " estudiantes que aprobaron todos los examen" << endl;
	cout << "Hay un total de " << alumnos_intermedios << " estudiantes que aprobaron al menos un examen" << endl;
	cout << "Hay un total de " << alumnos_no_tan_aprobadisimos << " estudiantes que aprobaron solo el ultimo examen" << endl;
	return 0;
}
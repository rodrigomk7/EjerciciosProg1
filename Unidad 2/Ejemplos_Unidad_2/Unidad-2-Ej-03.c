/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 3
	Funciones definidas por el usuario:
		* recibe parámetros
		* devuelve  valor
*/

#include <stdio.h>

int sumar(int valor1, int valor2);

int main(int argc, char *argv[])
{
	int entero1, entero2, suma;
	printf("ingrese un entero: ");
	scanf("%d", &entero1);
	printf("ingrese otro entero: ");
	scanf("%d", &entero2);
	suma = sumar(entero1, entero2);
	printf("\n  %d + %d = %d",entero1, entero2, suma); 
	
printf("\n\n");	
return 0;
}



int sumar(int valor1, int valor2)
{
	int suma;
	suma = valor1 + valor2;
return suma;
}

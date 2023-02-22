/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 9
	Función con más de 1 return: 
	
	Ingresar por teclado un número entero, 
	devolver 0 si es par y uno si es impar.
*/

#include <stdio.h> 

int parImpar(int num);

int main(int argc, char *argv[])
{
	
	int numero, paridad;
	
	printf("\nIngresar en valor entero: ");
	scanf("%d", &numero);
	
	paridad = parImpar(numero);
	
	if (paridad)     //  0 si es par y 1 si es impar
		printf("\n\t El valor: %d es impar", numero);
	else
		printf("\n\t El valor: %d es par", numero);

printf("\n\n");	
return 0;
}

int parImpar(int num)
{
	if (num % 2 == 0)
		return 0;
	else 
		return 1;
}



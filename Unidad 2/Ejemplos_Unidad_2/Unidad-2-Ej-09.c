/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 9
	Funci�n con m�s de 1 return: 
	
	Ingresar por teclado un n�mero entero, 
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



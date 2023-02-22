/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 10
	Funci�n con m�s de 1 return:
	Ingresar un n�mero entero y devolver el caracter 'P' si es positivo,
	el caracter 'N' si es negativo y 'Z' si es cero.
*/

#include <stdio.h> 

char posNegCero(int num);

int main(int argc, char *argv[])
{
	
	int numero;
	char signo;
	
	printf("\nIngresar en valor entero: ");
	scanf("%d", &numero);
	
	signo = posNegCero(numero);
	
	if (signo =='P')
		printf("\n\t El valor: %d es positivo", numero);
	if (signo == 'N')
		printf("\n\t El valor: %d es negativo", numero);
	if (signo =='Z')
		printf("\n\t El valor ingresado es cero");

printf("\n\n");	
return 0;
}

char posNegCero(int num)
{
	if (num > 0)
		return 'P';
	if (num < 0)
		return 'N';
	
return 'Z';
}



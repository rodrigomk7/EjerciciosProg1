/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 13
	Ingresar un n�mero decimal y convertirlo a base 2.
*/

#include <stdio.h> 

int decimalBinario(int dec);

int main(int argc, char *argv[])
{
	
	int decimal, binario;
		
	do
	{
		printf("\nIngresar en entero en base 10: ");
		scanf("%d", &decimal);
	} while(decimal<=0);
	
	binario = decimalBinario(decimal);
	
	printf("\n\t El numero decimal %d", decimal);
	printf(" expresado en base 2 es: %d",binario);
		
printf("\n\n");	
return 0;
}

int decimalBinario(int dec)
{
	int bin = 0, p = 1;
	
	while (dec >0)
	{
		bin = bin + (dec % 2) * p;
		dec = dec / 2;
		p = p * 10;
	}
	
return bin;
}



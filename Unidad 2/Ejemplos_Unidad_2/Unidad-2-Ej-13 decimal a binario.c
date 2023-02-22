/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 13
	Ingresar un número decimal y convertirlo a base 2.
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



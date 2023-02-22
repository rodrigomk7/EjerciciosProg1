/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 1
		
	Problema 8: Ingresar un número decimal y convertirlo a base 2.
*/

#include <stdio.h> 



int main(int argc, char *argv[])
{
	
	int 	decimal, binario;
	int 	aux, pot = 1;
	int 	base;
		
	do
	{
		printf("\nIngresar en entero: ");
		scanf("%d", &decimal);
	} while(decimal<=0);
	
	do
	{
		printf("\n Ingrese la base: ");
		scanf("%d", &base);
	} while ( (base<2) || (base >9));
	
	aux = decimal;
	binario = 0;
	
	while (aux >0)
	{
		binario = binario + (aux % base) * pot;
		aux = aux / base;
		pot = pot * 10;
	}
	
	printf("\n\t El numero decimal %d", decimal);
	printf(" expresado en base %d es: %d",base, binario);
		
printf("\n\n");	
return 0;
}



/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 15
	Ingresar N números enteros positivos y formar un nuevo número 
	colocándolos en forma consecutiva. Por ejemplo: N = 5 y se ingresan los 
	siguientes valores 12 , 0 , 97, 0 , 501. La salida será: 120970501

*/

#include <stdio.h>

void numComp ( int x, int *nroComp);


int main(int argc, char *argv[])
{
	int x, i, n, dig;
	int nroComp;
	
	nroComp = 0;
	
	do {
		printf("\n Ingresar la cantidad de valores N : ");
		scanf("%d", &n);
	} while ( n <= 0 );

	
	for ( i = 1; i<= n; i++)
	{
		printf(" Ingrese un valor x: ");
		scanf("%d", &x);
		
		numComp(x, &nroComp);
	
	}
	
	printf("\n%d", nroComp);
printf("\n\n");	
return 0;
}

void numComp( int x, int *nroComp)
{
	int aux;
	int pot;
	
	aux = x;
	
	if (aux != 0)
	{
		pot = 1;
		while (aux >0)
		{
			pot = pot * 10;
			aux = aux / 10;
		}
	}
	else
		pot = 10;
	
	*nroComp = *nroComp * pot + x;
	
return;	
}

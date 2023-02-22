/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 20
	Variables estáticas. 
	Número compuesto
*/

#include <stdio.h>

long int nroComp(int);

int main(int argc, char* argv[])
{
	long int nro;
	int x, n, c = 1;
	
	do 
	{
		printf("\n Cantidad de numeros a ingresar: ");
		scanf("%d", &n);
	} while (n<=0);
	
	for( ; c<=n ; c++)
	{
		do 
		{
			printf("\n ingresar x : ");
			scanf("%d", &x);
		} while (x<0);
		
		nro = nroComp(x);
	}
	
	printf("\n %ld", nro);
	
	
printf("\n\n");
return 0;	
}

long int nroComp(int x)
{
	static long int nro;
	int pot10 = 1, aux;
	
	aux = x;
	printf("\n %ld", nro);
	if( x == 0 ) 
		pot10 = 10;
	
	while (aux >0)
	{
		aux = aux / 10;
		pot10 = pot10 * 10;
	}
	
	nro = nro * pot10 + x; 
	printf("\n %ld", nro);
return nro;
}

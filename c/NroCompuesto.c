/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 1
	
	Problema 5 : Ingresar N n�meros enteros positivos y formar un nuevo n�mero 
		     colocando, los ingresados, en forma consecutiva. 
		     Por ejemlo: N = 5 y se ingresan los siguientes valores 12 , 0 , 97, 0 , 501. 
		     La salida ser�: 120970501
	
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	int 	nroComp = 0;
	int 	x, n, c = 1;
	int 	aux, pot10 ;
	
	do {
		printf("\n Ingresar la cantidad de valores N : ");
		scanf("%d", &n);
	} while ( n <= 0 );
	
	
	
	while ( c <= n )
	{
		pot10 = 1;
		
		do 
		{
			printf("\n ingresar x : ");
			scanf("%d", &x);
		} while ( x < 0 );
		
		aux = x;
		
		if ( x == 0 ) 
		{
			pot10 = 10;
		}
		
		while ( aux > 0 )
		{
			aux = aux / 10;
			pot10 = pot10 * 10;
		}
	
		nroComp = nroComp * pot10 + x; 	
		c++;
	}
	
	printf("\n %d", nroComp);
	
printf("\n\n");
return 0;	
}


/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 48
	Leer una cadena, controlar que los caracteres sean num�ricos y convertir
	la cadena a entero
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int entero();

int main(int argc, char *argv[])
{
	int x;
	
	x = entero();
	printf("\n entero = %d\n\n",x);
return 0;
}

int entero()
{
	char cad[15];
	int b;
	int i;
	
	do  // ciclo que controla que los caracteres ingresados sean solo numericos
	{
		b = 0;
		printf("\n Ingresar un entero : ");
		fgets( cad , 12 , stdin);
		cad[strlen( cad) - 1 ] = '\0';
		
		for( i = 0 ; i<strlen(cad) ; i = i + 1 )
		{
			if ( !isdigit (cad[i]) )
			{
				b=1;
			}
			if ( (i==0)  &&  (cad[0] == '-') ) 
			{
				b=0;
			}
		}
	} while ( (b == 1 ) );
	
return (atoi(cad));
}

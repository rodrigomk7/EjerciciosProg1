/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 48
	Leer una cadena, controlar que los caracteres sean numéricos y convertir
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

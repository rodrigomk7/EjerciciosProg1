/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 47
	Leer una cadena de caracteres, controlar que los caracteres sean alfab�ticos y 
	poner la primera letra en may�scula y el resto en min�sculas
*/                                         

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void primeraMayusc(char pal[]);

int main(int argc, char *argv[])
{
	char palabra[15];
	int b, i;
	
	do    // ciclo que controla que la cadena de caracteres tenga s�lo caracteres alfabeticos
	{
		b = 0;
		printf("\nIngresar una cadena de caracteres alfabeticos: ");
		fgets(palabra, 14, stdin);
		palabra[strlen(palabra)-1] = '\0';
		for ( i=0 ; i < strlen(palabra) ; i++)
		{
			if ( !isalpha (palabra[i]) ) 
			{
				b = 1;
			}
		}
		
	} while(b == 1); 
	
	primeraMayusc(palabra);
	fputs(palabra, stdout);
	
return 0;
}

void primeraMayusc(char pal[])
{
	int i;
	
	pal[0] = toupper(pal[0]);
	for (i=1; i<strlen(pal); i++)
		pal[i] = tolower(pal[i]);
return;
}


/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 47
	Leer una cadena de caracteres, controlar que los caracteres sean alfabéticos y 
	poner la primera letra en mayúscula y el resto en minúsculas
*/                                         

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void primeraMayusc(char pal[]);

int main(int argc, char *argv[])
{
	char palabra[15];
	int b, i;
	
	do    // ciclo que controla que la cadena de caracteres tenga sólo caracteres alfabeticos
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


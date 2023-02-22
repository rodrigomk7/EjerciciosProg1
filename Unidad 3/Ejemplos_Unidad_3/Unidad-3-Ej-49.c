/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 49
	Leer una cadena, controlar que los caracteres sean numericos, excepto un
	punto decimal, y convertir a punto decimal flotante.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

float flotante();

int main(int argc, char *argv[])
{
	float x;
	
	x = flotante();
	printf("\n flotante = %8.2f\n\n",x);

return 0;
}

float flotante()
{
	char cad[15];
	int b, i, c;
	
	do
	{
		b=0;
		c=0;
		printf("\n Ingresar un flotante : ");
		scanf("%s",cad);
		for(i=0;i<strlen(cad);i++)
		{
			if(!isdigit(cad[i]))
			{
				if(cad[i]=='.') c++;
				else b=1;
			}
			if ((i==0) && ( cad[i] == '-')) b=0;
		}
	}while((b==1)||(c>1));

return (atof(cad));
}

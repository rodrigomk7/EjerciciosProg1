/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 51
	Parámetros de la función main()
	
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	
	int i;
	
	printf("\n valor de argc: %d", argc);
	
	printf("\n\n Los argumentos de llamada son: ");
	
	if (argc > 1)
	{
		if (strcmp(argv[1], "uno") == 0)
			{
			for(i=0; i< argc; i++)
			{
				fputs("\n\t", stdout);
				fputs(argv[i], stdout);
			}
		}
	}
	else
		fprintf(stdout," %s", argv[0]);
		
printf("\n\n");
return 0;	
}


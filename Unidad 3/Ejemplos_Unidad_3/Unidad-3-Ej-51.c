/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 51
	Par�metros de la funci�n main()
	
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


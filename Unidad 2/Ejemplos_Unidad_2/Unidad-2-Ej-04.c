/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 4
	Funciones definidas por el usuario:
		* recibe par�metros
		* No devuelve  valor
*/

#include <stdio.h>


void marcaPuntos(int valor1, int valor2);

int main(int argc, char *argv[])
{
	int entero1, entero2;
	
	do{
		printf("Ingrese cantidad de puntos por linea (<20): ");
		scanf("%d", &entero1);
	}while ( entero1 >= 20 );
	
	do{
		printf("Ingrese cantidad de lineas(<10): ");
		scanf("%d", &entero2);
	}while ( entero2 >= 10 );
	
	marcaPuntos(entero1, entero2);
	
	
printf("\n\n");	
return 0;
}

void marcaPuntos(int valor1, int valor2)
{
	int i = 0, j;
	
	for( ; i < valor2 ; i++)
	{
		printf("\n");
		for (j=0; j < valor1 ; j++)
		{
			printf(" . ");
		}
	}
	
return;
}

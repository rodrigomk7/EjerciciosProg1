/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 2
	Funciones est�ndar
*/

#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[])
{
	
	int 		i, j;
	time_t 		inicio, final;
	struct tm 	*tiempoInicio, *tiempoFinal;

	inicio = time( NULL );
	
	for( i=0; i<1000; i++ )
	{
		for (j=0 ; j < 60; j++)
			printf(".");
		printf("\n\n");
			
	}
	final = time( NULL );
	
	printf("\nInicio:              %ld seg.\n", inicio );
	tiempoInicio = gmtime( &inicio );
	printf("\nInicio (Hora GMT):   %s", asctime(tiempoInicio));
	tiempoInicio = localtime( &inicio );
	printf("Inicio (Hora local): %s", asctime(tiempoInicio));
	
	printf("\nFinal:               %ld seg.\n", final );
	tiempoFinal = gmtime( &final );
	printf("\nFinal (Hora GMT):    %s", asctime(tiempoFinal));
	tiempoFinal = localtime( &final );
	printf("Final (Hora local):  %s", asctime(tiempoFinal));
	
	
	printf("\nTiempo transcurrido desde el inicio del programa: ");
	printf("%lf seg.", difftime(final, inicio));
	printf("\n\n Desde el 1ro. de enero de 1970");
	printf(" transcurrieron %ld anios", final/3600/24/365);
	
printf("\n\n");
return 0;	
}

/*
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 25
	Argumentos de la funci�n main()
	
*/

#include <stdio.h>
  
int main(int argc, char *argv[])
{
	  printf( "\n La cantidad de parametros recibidos es: %d ", argc );
	   
	   printf( "\n El nombre del programa es: %s",argv[0] );
	   
	   printf( "\n El ultimo parametro es : %s", argv[argc-1]);
	
printf("\n\n");
return 0; 
} 

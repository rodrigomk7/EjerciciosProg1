/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 25
	Argumentos de la función main()
	
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

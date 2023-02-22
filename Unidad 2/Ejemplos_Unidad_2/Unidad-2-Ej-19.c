/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 19
	Variables estáticas
*/

#include <stdio.h> 

void varStatic();

int main(int argc, char *argv[])
{
	
	static int estatica;
		
	printf("\n Variable estatica de la funcion main(): %5d", estatica);
		
	varStatic();
	
	printf("\n Variable estatica de funcion main(): %5d ", estatica++);
	
	printf("\n\n");	
	
	varStatic();
	
	printf("\n Variable estatica  de funcion main(): %5d ", ++estatica);
		
printf("\n\n");	
return 0;
}

void varStatic()
{
	static int estatica1, estatica2 = 4;	
	
	printf("\n\t***************** En la funcion varStatic() ********");
	printf("\n\n Estatica 1: %5d",estatica1);
	printf("\n Estatica 2: %5d", estatica2);
	++estatica1, ++estatica2;
	
return;
}

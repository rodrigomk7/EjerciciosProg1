/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 2
	
	Arreglos
		Nombre del arreglo
		Direccion de memoria
*/
#include <stdio.h>

int main (int argc, char *argv[])
{
	char 	vectChar [18];
	int 	lista [15], vecInt[15];
	short	edades[7];
	float 	vector_1 [10], vector_2 [9];
		
	char	vecStr [8][18],  matChar [5][15];
	int	tablaActual [12][12];
	float	tablaMes [5][7];
	
	printf("\n vectChar: %p \t &vectChar[0]: %p", vectChar, &vectChar[0]);
	printf("\n lista: %p \t &lista[0]: %p", lista, &lista[0]);
	printf("\n edades: %p \t &edades[0]: %p", edades, &edades[0]);
	printf("\n tablaActual: %p \t &tablaActual: %p", tablaActual, &tablaActual[0]);
	printf("\n tablaMes: %p \t &tablaMes[0]: %p", tablaMes, &tablaMes[0]);
	
	edades[10] = 999;
	printf("\n\n Ultimo elemento: %d", edades[10]);
	vecInt[0] = 888;
	vecInt[1] = 777;
	vecInt[2] = 666;
	printf("\n Ultimo elemento: %d", edades[10]);
		
	//lista = vecInt;
	
printf("\n\n");
return 0;	
}

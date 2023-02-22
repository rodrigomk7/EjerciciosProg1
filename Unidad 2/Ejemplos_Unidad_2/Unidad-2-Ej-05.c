/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 5
	Funciones definidas por el usuario:
		* No recibe parámetros
		* No devuelve  valor
*/

#include <stdio.h> 

 
void mensaje();

int main(int argc, char *argv[])
{
	mensaje();
		
printf("\n\n");	
return 0;
}

void mensaje()
{
	system("cls"); 
	printf("\n\n\n\n\n\n");
	printf("\t\t\t PROGRAMACION I");
	printf("\n\t\t\t ============ =");
	printf("\n\n\n\n\n\n");
	printf("\t\t\t      2016");
	printf("\n\t\t\t      ====");
		
printf("\n\n\n\n\n\n");
return;
}

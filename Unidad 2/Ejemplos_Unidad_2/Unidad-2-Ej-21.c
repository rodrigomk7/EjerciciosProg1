/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 21
	Variables register
*/

#include <stdio.h> 

void varRegister();

int main(int argc, char *argv[])
{
	
	register int registro;
	int reg;
		
	printf("\n Ingresar un entero: ");
	scanf("%d", &reg);
	registro = reg;
	printf("\nEntero: %d", registro);
	
	//printf("\n Direccion de la variable registro: %p", &registro);
	
	varRegister();
	varRegister();
			
printf("\n\n");	
return 0;
}

void varRegister()
{
	register int reg1, reg2 = 2;	
	
	printf("\n\t*********Valores en la funcion varRegister() ********");
	printf("\n reg1: %d  , reg2 = %d", reg1, reg2);
	
	reg1++ , reg2++;
	
return;
}


/*
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
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


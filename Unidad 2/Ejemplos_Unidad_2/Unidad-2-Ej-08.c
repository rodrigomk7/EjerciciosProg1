/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 8
	Par�metros por referencia
*/

#include <stdio.h> 

void interc2(int *par1, int *par2);

int main(int argc, char *argv[])
{
	
	int arg1 = 15, arg2 = 27;
	
	printf("\nAntes de llamar la funcion: ");
	printf("   arg1 = %d, arg2 = %d", arg1, arg2);

	interc2(&arg1, &arg2);

	printf("\n\nLuego de llamar la funcion: ");
	printf("   arg1 = %d, arg2 = %d", arg1, arg2);
printf("\n\n");	
return 0;
}

void interc2( int *par1, int *par2)
{
	int aux;
	printf("\n\n\tAntes del intercambio: par1 = %d, par2 = %d", *par1, *par2);
	aux = *par1;  // (1)
	*par1 = *par2; // (2)
	*par2 = aux;  // (3)
	printf("\n\tLuego del intercambio: par1 = %d, par2 = %d", *par1, *par2);
	
return;
}



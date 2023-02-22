/*
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 18
	Variables autom�ticas
		
*/

#include <stdio.h> 

void varAuto();

int main(int argc, char *argv[])
{
	
	float 	auto1;
	auto int 	auto2;
	
	printf("\n\n\t***************** En la funcion main()*************");
	printf("\n Automatica por defecto (auto1): %5.2f",auto1);
	printf("\n Automatica declarada (auto2):   %5d",auto2);
	
	varAuto();
	
	printf("\n\n\t***************** En la funcion main()*************");
	printf("\n Automatica por defecto (auto1): %5.2f",auto1++);
	printf("\n Automatica declarada (auto2):   %5d",auto2++);
	
	varAuto();
	
	printf("\n\n\t***************** En la funcion main()*************");
	printf("\n Automatica por defecto (auto1): %5.2f",++auto1);
	printf("\n Automatica declarada (auto2):   %5d",++auto2);
	
printf("\n\n");	
return 0;
}

void varAuto()
{
	float	 var1, var2 = 2.2;
	auto int 	auto1, auto2 = 3;

	printf("\n\n\t***************** Inicio en la funcion varAuto()*************");
	printf("\n Automaticas por defecto (var1 y var2): %5.2f %5.2f", var1, var2);
	printf("\n Automaticas declaradas (auto1 y auto2):  %5d %5d", auto1, auto2);
	
	++var1, ++var2;
	
	++auto1, ++auto2;
	
	printf("\n\n\t***************** Final en la funcion varAuto()*************");
	printf("\n Automaticas por defecto (var1 y var2): %5.2f %5.2f", var1, var2);
	printf("\n Automaticas declaradas (auto1 y auto2):  %5d %5d", auto1, auto2);
return;
}

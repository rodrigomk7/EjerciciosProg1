/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 54
	Cadenas de caracteres: B�squeda binaria en vector de strings
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cadenas.h"

int busqBinVectStr(int n, char v[15][20], char cb[]);

int main (int argc, char *argv[])
{
	
	char	vectStr[15][20];
	char	cb[30];
	int 	cant, pos;
	
	cant = 5;	
	
	printf("\n\t\t Busqueda binaria en un vector de cadena de caracteres");
	printf("\n\t\t =====================================================\n");
	
	cargarVectStr(cant, vectStr);
	printf("\n\nVector sin ordenar");
	verVectStr(cant, vectStr);
	burbujaVectStr(cant, vectStr);
	printf("\n\nVector ordenado   ");
	verVectStr(cant, vectStr);
	printf("\n\n Ingresar la cadena a buscar: ");
	scanf("%s", cb);
	pos = busqBinVectStr(cant, vectStr, cb);
	
	if (pos>=0)
		printf("\n La cadena \"%s\" esta en la posicion: %d",cb,  pos);
	else
		printf("\n La cadena \"%s\" NO esta en el arreglo", cb);
	
printf("\n\n");	
return 0;	
}

int busqBinVectStr(int n, char v[15][20], char cb[])
{
	int central, izq, der;
	izq = 0;
	der = n-1;
	
	while (izq <= der)
	{
		central = (izq+der)/2;
		if (strcmp(cb , v[central]) > 0)
			izq = central + 1;
		else
			if (strcmp(cb , v[central]) < 0)
				der = central - 1;
			else
				return central;
	}
return -1;
}

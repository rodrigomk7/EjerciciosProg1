/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 58
	Cadenas de caracteres - Punteros a caracter.
	Busqueda binaria
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cadenas2.h"

void cargaPtrVecCh(int n, char *cad, int k);
void verPtrVecCh(int n, char *cad, int k);
int busqBinPtrVecCh(int n, char *cad, char *cb, int k);
void ordenarPtrVecCh(int n, char *cad, int k);

int main (int argc, char *argv[])
{
	
	char *ptrVecCh, *str;
	int cant, longFisica, pos;
	cant = 5;
	longFisica = 15;
	
	printf("\n\t\t Busqueda binaria en un vector de");
	printf("\n\t\t ===============================");
	printf("\n\t\t     cadena de caracteres");
	printf("\n\t\t     ====================");
	printf("\n\t\t   tratado como puntero a char");
	printf("\n\t\t   ===========================");
		
	ptrVecCh = (char*) malloc(cant * longFisica);
	str = (char*) malloc(15);
	
	printf("\n Carga del arreglo de cadenas\n");
	cargaPtrVecCh(cant, ptrVecCh, longFisica);
	printf("\n Arreglo cargado\n");
	verPtrVecCh(cant, ptrVecCh, longFisica);	
	
	ordenarPtrVecCh(cant, ptrVecCh, longFisica);
	printf("\n\nVector ordenado\n   ");
	verPtrVecCh(cant, ptrVecCh, longFisica);
	printf("\n\n Ingresar la cadena a buscar: ");
	scanf("%s", str);
	pos = busqBinPtrVecCh(cant, ptrVecCh, str, longFisica);
	
	if (pos>=0)
		printf("\n La cadena \"%s\" esta en la posicion: %d",str,  pos);
	else
		printf("\n La cadena \"%s\" NO esta en el arreglo", str);
	
	free(ptrVecCh);
	free(str);
	
printf("\n\n");	

return 0;	
}

int busqBinPtrVecCh(int n, char *cad, char *cb, int k)
{
	int central, izq, der;
	izq = 0;
	der = n-1;
	
	while (izq <= der)
	{
		central = (izq+der)/2;
		if (strcmp(cb , cad+central*k) > 0)
			izq = central + 1;
		else
			if (strcmp(cb , cad+central*k) < 0)
				der = central - 1;
			else
				return central;
	}
return -1;
}


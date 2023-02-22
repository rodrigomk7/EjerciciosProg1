/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	Unidad 3
	
	Ejemplo 56
	Cadenas de caracteres - Punteros a caracter.
	Ordenamiento: Método de la Burbuja
*/


#include <stdio.h>
#include <string.h>

void cargaPtrVecCh(int n, char *cad, int k);
void verPtrVecCh(int n, char *cad, int k);
void ordenarPtrVecCh(int n, char *cad, int k);

int main( int argc, char *argv[])
{
	char *ptrVecCh;
	int cant, longFisica;
	cant = 5;
	longFisica = 15;
	
	printf("\n\t\t Ordenamiento de un vector ");
	printf("\n\t\t =========================");
	printf("\n\t\t  de cadena de caracteres");
	printf("\n\t\t  =======================");
	printf("\n\t\t tratado como puntero a char");
	printf("\n\t\t ===========================");

	ptrVecCh = (char*) malloc(cant * longFisica);
	
	printf("\n Carga del arreglo de cadenas\n");
	cargaPtrVecCh(cant , ptrVecCh, longFisica);
	printf("\n Arreglo cargado\n");
	verPtrVecCh(cant , ptrVecCh, longFisica);
	
	ordenarPtrVecCh(cant , ptrVecCh, longFisica);
	printf("\n\n Arreglo ordenado\n");
	verPtrVecCh(cant, ptrVecCh, longFisica);
	
	free(ptrVecCh);
printf("\n\n");
return 0;	
}

void cargaPtrVecCh(int n, char *cad, int k)
{
	int i;
	char str[15];
	
	for ( i=0 ; i<n ; i++)
	{
		printf("Ingresar cadena [%d]: ", i);
		scanf("%s", cad+ k * i);
	}
}

void verPtrVecCh(int n, char *cad, int k)
{	
	int i;
	
	for ( i=0 ; i<n ; i++)
		fprintf(stdout, "    %s",(cad+k*i));
}

void ordenarPtrVecCh(int n, char *cad, int k)
{
	int i, j;
	char aux[15];
	
	for ( i=0 ; i<n-1 ; i++)
		for ( j=i+1 ; j<n ; j++)
			if ( strcmp((cad+k*j),(cad+k*i)) < 0 )
			{
				strcpy(aux, (cad+k*i));
				strcpy((cad+k*i) , (cad+k*j));
				strcpy((cad+k*j) , aux);
			}
}

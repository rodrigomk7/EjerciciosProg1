/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 52
	Cadenas de caracteres: Ordenamiento - Método de la Burbuja
*/

#include <stdio.h>
#include <string.h>

void cargarVectStr(int n, char str[15][20]);
void burbujaVectStr(int n, char str[15][20]);
void verVectStr(int n, char str[15][20]);

int main( int argc, char *argv[])
{
	char str[15][20];
	int cant;
	cant = 5;
	
	printf("\n\t\t Ordenamiento de un vector de cadenas de caracteres");
	printf("\n\t\t             Metodo de la burbuja");
	printf("\n\t\t =================================================\n\n");
	
	printf("\n Carga del arreglo de cadenas\n");
	cargarVectStr(cant, str);
	printf("\n Arreglo cargado\n\t");
	verVectStr(cant, str);
	burbujaVectStr(cant, str);
	printf("\n\n Arreglo ordenado\n\t");
	verVectStr(cant, str);
printf("\n\n");
return 0;	
}

void cargarVectStr(int n, char str[15][20])
{
	int i;
	
	for ( i=0 ; i<n ; i++)
	{
		printf("\tIngresar cadena [%d] de %d : ", i+1, n);
		fgets(str[i] , 15 , stdin);
		str[i][strlen(str[i]) -1] = '\0';
	}
}

void burbujaVectStr(int n, char str[15][20])
{
	int i, j;
	char temp[15];
	
	for ( i=0 ; i<n-1 ; i++)
		for ( j=i+1 ; j<n ; j++)
			if ( strcmp(str[j],str[i]) < 0 )
			{
				strcpy (temp, str[i]);
				strcpy (str[i], str[j]);
				strcpy (str[j], temp);
			}
}

void verVectStr(int n, char str[15][20])
{	
	int i;
	
	for ( i=0 ; i<n ; i++)
		printf("    %s", str[i]);
}

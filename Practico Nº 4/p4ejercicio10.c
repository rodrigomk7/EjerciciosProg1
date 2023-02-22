#include <stdio.h>

void cargar_matriz_int(int,int,int mat[][100]);
void mostrar_matriz_int(int,int,int mat[][100]);
void generar_matriz_transpuesta(int,int, int m1[][100],int m2[][100]);

int main (int argc , char *argv[])
{
int n,m;
int m1[100][100],m2[100][100];

do
{
printf("ingrese numero de filas:");
scanf("%d",&m);
}while(m<=0);

do
{
printf("ingrese numero de columnas:");
scanf("%d",&n);
}while(n<=0);

printf("\n");

printf("Ingrese matriz:\n"),
cargar_matriz_int(m,n,m1);

printf("Matriz ingresada:\n");
mostrar_matriz_int(m,n,m1);

generar_matriz_transpuesta(m,n,m1,m2);
printf("\nMatriz transpuesta:\n");
mostrar_matriz_int(n,m,m2);

return 0;
}


void cargar_matriz_int( int m, int n, int mat[][100])
{
int i,j;

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("Ingrese elemento fila:%d-columna:%d :  ",i,j);
scanf("%d",&mat[i][j]);
}
printf("\n");
}
}

void mostrar_matriz_int(int m,int n, int mat[][100])
{
int i,j;

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",mat[i][j]);
}
printf("\n");
}
}


void generar_matriz_transpuesta(int m, int n, int m1[][100],int m2[][100])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		m2[j][i]=m1[i][j];	
		}	
	}	
}


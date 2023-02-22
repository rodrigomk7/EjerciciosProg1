#include <stdio.h>

void cargar_matriz_int(int , int, int mat[][50]);
void mostrar_matriz_int(int , int , int mat[][50]);
void intercambiar_columnas(int ,int,int ,int mat[][50]);

int main (int argc, char *argv[])
{
int m,n,M[50][50],c1,c2;

do
{
printf("Ingrese numero de filas:");
scanf("%d",&m);
}while(m<=0);

do
{
printf("Ingrese numero de columnas:");
scanf("%d",&n);
}while(n<=0);
printf("\n");

cargar_matriz_int(m,n,M);
printf("Matriz ingresada:\n");
mostrar_matriz_int(m,n,M);

do
{
printf("Ingrese primera columna a intercambiar:");
scanf("%d",&c1);
}while(c1<1||c1>n);

do
{
printf("Ingrese segunda columna a intercambiar:");
scanf("%d",&c2);
}while(c2<1||c2>n);

intercambiar_columnas(m,c1,c2,M);

printf("\nMatriz modificada:\n");
mostrar_matriz_int(m,n,M);

return 0;
}



void cargar_matriz_int(int m, int n , int mat[][50])
{
int i,j;
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	printf("Ingrese elemento fila:%d-columna:%d :",i,j);
	scanf("%d",&mat[i][j]);	
	}
	printf("\n");
	}	
}


void mostrar_matriz_int(int m,int n, int mat[][50])
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

void intercambiar_columnas(int m,int c1,int c2,int mat[][50])
{
int fila,aux;
c1=c1-1;
c2=c2-1;
for(fila=0;fila<m;fila++)
{
	aux=mat[fila][c1];
	mat[fila][c1]=mat[fila][c2];
	mat[fila][c2]=aux;
}	
}



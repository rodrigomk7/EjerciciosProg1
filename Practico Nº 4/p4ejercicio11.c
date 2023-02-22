#include <stdio.h>

void cargar_matriz_int(int,int,int mat[][100]);
void mostrar_matriz_int(int,int,int mat[][100]);
void sumar(int,int *,int mat[][100]);

int main (int argc, char *argv[])
{
int  matriz[100][100];
int s=0,m;
 
do
{
printf("Ingrese numero de filas y columna matriz cuadrada:");
scanf("%d",&m);
}while(m<=0);
 

printf("\n");
 
printf("Ingrese matriz:\n"),
cargar_matriz_int(m,m,matriz);

printf("Matriz ingresada:\n");
mostrar_matriz_int(m,m,matriz);

sumar(m,&s,matriz),

printf("La suma de los elementos por debajo de la diagonal secundaria: %d",s);

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


void sumar(int m ,int *s,int mat[][100])
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<m;j++)
{
if((i+j)>=m)
*s=*s+mat[i][j];
}
}
}



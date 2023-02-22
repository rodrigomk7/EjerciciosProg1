#include <stdio.h>
#include <cym_matriz_int.h>

void intercambiar_d1_por_d2(int , int mat[][50]);

int main(int argc, char *argv[])
{
int m,M[50][50];
do
{
printf("Ingrese orden de la matriz cuadrada:");
scanf("%d",&m);
}while(m<=0);

cargar_matriz_int(m,m,M);
printf("Matriz ingresada:\n");
mostrar_matriz_int(m,m,M);

intercambiar_d1_por_d2(m,M);
printf("Matriz modificada:\n");
mostrar_matriz_int(m,m,M);

return 0;
}


void intercambiar_d1_por_d2(int m, int mat[][50])
{
int aux,i,c1=0,c2=m-1;
for(i=0;i<m;i++)
{
	aux=mat[i][i];
	mat[i][i]=mat[c1][c2];
	mat[c1][c2]=aux;
	c2--;
    c1++;	
}		
}
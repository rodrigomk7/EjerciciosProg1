#include <stdio.h>
#include <cym_matriz.h>
#include <cym_vector.h>

void insertar_vector_fila(int ,int , int *,int m1[][50], int m2[][50]);

int main(int argc, char *argv[])
{
int m,n,M1[50][50],M2[50][50],V[30]={};

do
{
printf("Ingrese numero de filas:");
scanf("%d",&m);
}while(m<=0||(m%2!=0));

do
{
printf("Ingrese numero de columnas:");
scanf("%d",&n);
}while(n<=0);

printf("Ingrese matriz:\n");
cargar_matriz_int(m,n,M1);
printf("Matriz ingresada:\n");
mostrar_matriz_int(m,n,M1);

printf("\nIngrese vector de orden %d:\n",n);
cargar_vector_int(n,V);
printf("\nVector ingresado:\n");	
mostrar_vector_int(n,V);

insertar_vector_fila(m,n,V,M1,M2);

m++;

printf("\n\nMatriz modificada:\n");
mostrar_matriz_int(m,n,M2);

return 0;
}



void insertar_vector_fila(int m,int n, int v[],int m1[][50], int m2[][50])
{
int i,j,f;
i=0;
f=0;
while(i<m)
{
if(f!=(m/2))
{
	for(j=0;j<n;j++)
	{
		m2[f][j]=m1[i][j];
	}
}
else
{
	for(j=0;j<n;j++)
	{
		m2[f][j]=v[j];
	}
	i--;
}
i++;
f++;	
	
}		
}	
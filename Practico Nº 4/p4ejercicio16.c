#include <stdio.h>
#include <cym_matriz.h>
#include <cym_vector.h>

int buscar_distintos_de_cero(int , int , int mat[][50],int *);
 
int main (int argc, char *argv[])
{
int m,n,M[50][50];
int c,V[50]={};

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

cargar_matriz_int(m,n,M);
printf("Matriz ingresada:\n");
mostrar_matriz_int(m,n,M);

c=buscar_distintos_de_cero(m,n,M,V);

if(c==0)
printf("La matriz ingresada tiene todos sus elemtos igual a cero.");
else
{
printf("Vector formado:\n");	
mostrar_vector_int(c,V);
}

return 0;
}


int buscar_distintos_de_cero(int m, int n, int mat[][50],int vect[])
{
	int i,j,cont=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]!=0)
			{
				vect[cont]=mat[i][j];
				cont++;	
			}
		}
	}

return cont;	
}


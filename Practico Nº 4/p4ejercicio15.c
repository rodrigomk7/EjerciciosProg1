#include <stdio.h>
#include <cym_matriz_int.h>

void ordenar_diagonal_principal(int ,int mat[][50]);
void ordenar_diagonal_secundaria(int ,int mat[][50]);

int control(int );

int main (int argc, char *argv[])
{
int m,b,M[50][50];

do
{
printf("Ingrese orden de la matriz cuadrada:");
scanf("%d",&m);
b=control(m);
}while(b==0);

cargar_matriz_int(m,m,M);
printf("Matriz ingresada:\n");
mostrar_matriz_int(m,m,M);

ordenar_diagonal_principal(m,M);
ordenar_diagonal_secundaria(m,M);
printf("Matriz modificada:\n");
mostrar_matriz_int(m,m,M);

return 0;
}


int control(int m)
{
int ban;
if(m>0&&(m%2==0))
ban=1;
else 
ban=0;

return ban;
}


void ordenar_diagonal_principal(int m,int mat[][50])
{
	int i,j,aux;
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(mat[i][i]<mat[j][j])
			{
			aux=mat[i][i];			
			mat[i][i]=mat[j][j];
			mat[j][j]=aux;
			}
		}
	}
}


void ordenar_diagonal_secundaria(int m,int mat[][50])
{
	int i,j,f,c,aux;
	i=0;
	j=m-1;
	while(i<m)
	{
		f=i+1;
		c=j-1;
		while(f<m)
		{
			if(mat[i][j]>mat[f][c])
			{
				aux=mat[i][j],
				mat[i][j]=mat[f][c];
				mat[f][c]=aux;
				
			}
			f++;
			c--;
		}
		i++;
		j--;
	}
	
	
	
}
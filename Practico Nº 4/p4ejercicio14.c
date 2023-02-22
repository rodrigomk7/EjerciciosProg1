#include <stdio.h>
#include <cym_matriz_int.h>

int buscar_x_en_matriz(int ,int ,int ,int mat[][50]);

int main (int argc, char *argv[])
{
int x,m,n,c,M[50][50];

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

printf("Ingrese un numero entero:"),
scanf("%d",&x);


c=buscar_x_en_matriz(m,n,x,M);

if(c==0)
printf("La matriz no tiene elementos iguales a %d",x);
else 
printf("La matriz posee %d elementos iguales a %d",c,x);

return 0;
}

int buscar_x_en_matriz(int m,int n,int x,int mat[][50])
{
int i,j,cc=0;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(mat[i][j]==x)
			cc++;
		}
		
	}
return cc;	
}
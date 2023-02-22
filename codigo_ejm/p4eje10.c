/* p4 eje 10*/

#include<stdio.h>


void cargar_matriz(int,int,int A[][50]);
void mostrar_matriz(int,int,int A[][50]);
void trampuesta(int,int,int A[][50]);

int main (int argc, char *argv[])
{
int m,n;
int A[50][50];
do
{
printf("\n ingrese el n° de filas:");
scanf("%d",&m);
}while(m<=0);
do
{
printf("\n ingrese el n° de columnas:");
scanf("%d",&n);
}while(n<=0);

cargar_matriz(m,n,A);
mostrar_matriz(m,n,A);
trampuesta(m,n,A);
mostrar_matriz(n,m,A);

return 0;
}




void cargar_matriz(int m,int n,int A[][50])
{
int i,j,h=1,k=1;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("\nIngrese el elemento Mat[%d][%d] ",h++,k++);
		scanf("%d",&A[i][j]);
		}
	}
}
 

void mostrar_matriz(int m,int n,int A[][50])
{
int i,j;

for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("\t%d",A[i][j]);
		}
		printf("\n\n");
	}
}


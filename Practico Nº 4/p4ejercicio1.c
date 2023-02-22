#include <stdio.h>

void cargar_vector_int(int,int *);
void mostrar_vector_int(int , int *);
void invertir_vector_int(int,int *);

int main (int argc , char *argv[])
{

int n;
int vector1[30];
do
{
	printf("Ingrese el orden del vector:");
	scanf("%d",&n);
}
while(n<=0);

cargar_vector_int(n,vector1);
printf("\nVector ingresado:\n ");
mostrar_vector_int(n,vector1);
invertir_vector_int(n,vector1);
printf("\nVector invertido:\n");
mostrar_vector_int(n,vector1);

return 0;	
}

void cargar_vector_int(int n,int vector[])
{
	int i;
	for(i=0;i<n;i++)
	{	
	printf("Ingrese valor elemento %d: ",i);
	scanf("%d",&vector[i]);
	}
}

void mostrar_vector_int(int n , int vector[])
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",vector[i]);
}

void invertir_vector_int(int n, int v1[])  
{
int i,c,aux;
c=n-1;
for(i=0;i<n/2;i++)
{
	aux=v1[i];
	v1[i]=v1[c];
	v1[c]=aux;
	c=c-1;
}
}
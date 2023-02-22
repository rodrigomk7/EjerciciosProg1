#include <stdio.h>

void cargar_vector_float(int,float *);
void mostrar_vector_float(int , float *);
void cambiar_valor(float, int, float *);

int main (int argc,char *argv[])
{
float vector[100]={};
float e;
int x,n;

do
{
	printf("\nIngresar orden del vector:");
	scanf("%d",&n);
	printf("\n");
}
while(n<=0);

cargar_vector_float(n,vector);
printf("\nVector ingresado:\n");
mostrar_vector_float(n,vector);

printf("\n\nIngrese valor para reemplazar:");
scanf("%f",&e);

do
{
	printf("Ingrese posicion:");
	scanf("%d",&x);
}
while(x<1||x>n);

cambiar_valor(e,x,vector);
printf("\nVector modificado:\n");
mostrar_vector_float(n,vector);

return 0;
}

void cargar_vector_float(int n,float vector[])
{
	int i;
	for(i=0;i<n;i++)
	{	
	printf("Ingrese valor elemento %d: ",i);
	scanf("%f",&vector[i]);
	}
}

void mostrar_vector_float(int n ,float vector[])
{
	int i;
	for(i=0;i<n;i++)
	printf("%.2f ",vector[i]);
}


void cambiar_valor(float e, int x, float vector[])
{
vector[x-1]=e;
}



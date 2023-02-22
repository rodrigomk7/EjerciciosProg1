
#include <stdio.h>

void cargar_vector_float(int,float *);
void mostrar_vector_float(int , float *);
void insertar_valor(float, int, float *,int ,float *);

int main (int argc,char *argv[])
{
float e;
int x,n,m;

do
{
	printf("\nIngresar orden del vector:");
	scanf("%d",&n);
	printf("\n");
}
while(n<=0);
m=n+1;
float vector1[n];
float vector2[m];
cargar_vector_float(n,vector1);
printf("\nVector ingresado:\n");
mostrar_vector_float(n,vector1);

printf("\n\nIngrese valor a insertar:");
scanf("%f",&e);

do
{
	printf("Ingrese posicion:");
	scanf("%d",&x);
}
while(x<1||x>n);

insertar_valor(e,x,vector1,n,vector2);
printf("\nVector modificado:\n");
mostrar_vector_float(m,vector2);

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


void insertar_valor(float e, int x, float v1[],int n,float v2[])
{
int i=0,c=0;

while(c<n+1)
{
	if(c!=x-1)
	{
		v2[c]=v1[i];
		i++;
	}
	else
	{
		v2[c]=e;
	}	
c++;	
}

}



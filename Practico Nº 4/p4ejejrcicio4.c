#include <stdio.h>

void cargar_vector_float(int,float *);
void mostrar_vector_float(int , float *);
int eliminar_valor(int, float *,float *);

int main (int argc,char *argv[])
{
float vector1[100]={},vector2[100];
int x,n,m;

do
{
	printf("\nIngresar orden del vector:");
	scanf("%d",&n);
	printf("\n");
}
while(n<=0);

cargar_vector_float(n,vector1);
printf("\nVector ingresado:\n");
mostrar_vector_float(n,vector1);

do
{
	printf("Ingrese posicion del valor a eliminar:");
	scanf("%d",&x);
}
while(x<1||x>n);

m=eliminar_valor(x,vector1,vector2);
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


int eliminar_valor(int x, float v1[], float v2[])
{
int c=0,i;
for(i=0;i<n;i++)
{
if(c!=x)
{
v1[c]=v2[i]	
}
else
{
i++;
}
c++;
}
}





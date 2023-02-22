#include <stdio.h>

void cargar_vector_int(int,int *);
void mostrar_vector_int(int , int *);
int eliminar_iguales(int n,int *,int *);

int main (int argc, char *argv[])
{
int vector1[100]={},vector2[100]={};
int n,m;
do
{
printf("\nIngrese orden del vector:");
scanf("%d",&n);
printf("\n");	
}
while(n<=0);

cargar_vector_int(n,vector1);
printf("\nVector ingresado:\n ");
mostrar_vector_int(n,vector1);
m=eliminar_iguales(n,vector1,vector2);
printf("\n\nVector modificado al eliminar los elementos iguales:\n");
mostrar_vector_int(m,vector2);
printf("\n");
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
	printf("(");
	for(i=0;i<n-1;i++)
	{
	printf("%d,",vector[i]);
	}
	printf("%d",vector[i]);
	printf(")");
}


int eliminar_iguales(int n,int v1[],int v2[])
{
int i,j,b,d;
d=0;
i=0;
while(i<n)
{
	b=0;
	j=0;
	while(j<n)
	{
		if(v1[i]==v1[j])
		{
			if(i!=j)
				b=1;		
		}
		j++;
	}
	
	if(b==0)
	{
		v2[d]=v1[i];
		d++;
	}

i++;
}	

return d;	
}




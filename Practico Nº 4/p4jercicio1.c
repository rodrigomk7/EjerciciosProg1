#include <stdio.h>

void ingresar_vector(int ,int )

int main (int argc, char *argv[])
{
int vector[],n;
do
{
printf("\n Ingrese orden del vector:");
scanf("%d",&n);
}
while(n<=0);
ingresar_ vector(n);

return 0;
}


void ingresar_vector(int n,int vector[])
{
	int i;
	for (i=0 ; i < n ; i++)
	{
		printf("Ingrese el elemento %d",i);
		scanf("%d",&vector[i]);
	}
}
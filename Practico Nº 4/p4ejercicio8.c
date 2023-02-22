#include <stdio.h>
#include <cym_vector.h>

int intercambiar(int , float *);

int main(int argc, char *argv[])
{
float v[30];
int n,c;

do
{
printf("\nIngrese orden del vector:");
scanf("%d",&n);
}while(n<=0);

printf("\nIngrese vector:\n");
cargar_vector_float(n,v);
printf("\nVector ingresado:\n");
mostrar_vector_float(n,v);

c=intercambiar(n,v);

if(c)
{
printf("\nVector modificado:\n");
mostrar_vector_float(n,v);
}
else
printf("\nEl vector ingresado tiene sus elementos iguales");

return 0;
}



int intercambiar(int n, float v[])
{
	int i,j,ban=0,c=0,pm,pM;
	float M,m;
	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;i++)
		{
		if(j!=i)
		   if(v[i]<v[j])
		   {			   
			ban=1;
		    c=1;
		   }
		}
		if(ban==0)
		{
			M=v[i];
			pM=i;
		}
	}
	
	ban=0;
	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;i++)
		{
		if(j!=i)	
		   if(v[i]>v[j])
		   {			   
			ban=1;
		    c=1;
		   }
		}
		if(ban==0)
		{
			m=v[i];
			pm=i;
		}
	}
	
if(c!=0)
{	
v[pm]=M;
v[pM]=m;
}
	
return c;	
	
}
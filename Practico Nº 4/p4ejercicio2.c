#include <stdio.h>

void mostrar_vector_int(int , int *);
int generar_vec_primos2digitos(int *);

int main (int argc,char *argv[])
{
int vector[100]={};
int m;
m=generar_vec_primos2digitos(vector);
mostrar_vector_int(m,vector);	
return 0;	
}

int generar_vec_primos2digitos(int vector[])
{
int dim=0,d,x=10,c;
while(x<100)
{
	d=2;
	c=1;
	while(d<x)
	{
	if((x%d)==0)
		{
		c=0;
		}
	d++;		
	}
	
if(c!=0)
{
vector[dim]=x;
dim++;	
}	
x++;	
}

return dim;	 
}


void mostrar_vector_int(int n , int vector[])
{
	int i;
	for(i=0;i<n;i++)
	printf("%d ",vector[i]);
}


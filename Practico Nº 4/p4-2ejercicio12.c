#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <funcion_cadena.h>
#include <stdlib.h>

void ordenar_vector(int , char vda[20][30]);
void cambiar_inicial(int n, char vda[20][30]);

int main(int argc, char *argv[])
{
char vda[20][30];
int n;

do
{
printf("\nCantidad de apellidos a ingresar:");
scanf("%d",&n);
getchar();
}while(n<=0);

printf("\nIngrese Apellidos:\n");
cargar_vector_cad(n,vda);
printf("\nApellidos ingresados:\n");
mostrar_vector_cad(n,vda);

ordenar_vector(n,vda);
cambiar_inicial(n,vda);

printf("\nApellidos ordenados alfabeticamente:\n");
mostrar_vector_cad(n,vda);

}

void ordenar_vector(int n, char vda[20][30])
{
char cadaux[30];
int i,j,x;

for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		x=strcmp(vda[i],vda[j]);
		if(x>0)
		{
			*strcpy(cadaux,vda[i]);
			*strcpy(vda[i],vda[j]);
			*strcpy(vda[j],cadaux);
		}
	}
}

}

void cambiar_inicial(int n , char vda[20][30])

{
	int i,j;
	
	for(i=0;i<n;i++)
		for(j=0;j<strlen(vda[i]);j++)
		{
		if(j==0)
			 vda[i][0]=toupper(vda[i][0]);
		else
           if(vda[i][j]==' ')
		   {
			    j++;
		   		vda[i][j]=toupper(vda[i][j]);
		   }	   
		}	
		
	    
	
	  
		
}



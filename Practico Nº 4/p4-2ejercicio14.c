#include <stdio.h>
#include <string.h>
#include <funcion_cadena.h>

int  generar_vector(char *, char vect[20][30]);

int main(int argc, char *argv[])
{
char cad[60];
char vect[20][30];
int n;

printf("\nIngrese apellidos separados con coma(,):");
fgets(cad,59,stdin);
cad[strlen(cad)-1]='\0';

n=generar_vector(cad,vect);

printf("\n Vector generado con los apellidos:\n");
mostrar_vector_cad(n,vect);

return 0;
}

int  generar_vector(char cad[60], char vect[20][30])
{
	int i,j=0,k=0;
	for(i=0;i<strlen(cad);i++)
		if(cad[i]==',')
		{
			vect[j][k]='\0';
			j++;
			k=0;
		}
		else
		{
			vect[j][k]=cad[i];
             k++;	
	    }
vect[j][k]='\0';		
		
return j+1;	
}
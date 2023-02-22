#include <stdio.h>
#include <string.h>
#include <funcion_cadena.h>
#include <ctype.h>

void cambiar_minusculas(int , char vect[20][30]);
int main(int argc, char *argv[])
{
char vect[20][30];
int n;

do
{
printf("\n cantidad de cadenas a ingresar:");
scanf("%d",&n);
getchar();
}while(n<=0);

printf("\n");
cargar_vector_cad(n,vect);
printf("\nVector ingresado:\n");
mostrar_vector_cad(n,vect);

cambiar_minusculas(n,vect);
printf("\nVector modificado:\n");
mostrar_vector_cad(n,vect);

return 0;
}



void cambiar_minusculas(int n, char vect[20][30])
{
	int i,j;
	for(i=0;i<n;i++)
	{
	  for(j=0;j<strlen(vect[i]);j++)
	  {
			if(islower(vect[i][j]))
	  		      vect[i][j]=toupper(vect[i][j]);
			else
				if(isupper(vect[i][j]))
					vect[i][j]=tolower(vect[i][j]);
	  }
	}
} 

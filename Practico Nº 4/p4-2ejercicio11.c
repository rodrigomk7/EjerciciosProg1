#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <funcion_cadena.h>

int simbolos(int ,char vect1[20][20],char vect2[20][20]);

int main (int argc ,char *argv[])
{
char vect1[20][20],vect2[20][20];
int n,c;

do
{
printf("\nDimension de vector:");
scanf("%d",&n);
getchar();
}while(n<=0);

printf("\nIngrese vector de caracteres:\n");
cargar_vector_cad(n,vect1);
printf("\nVector ingresado:\n");
mostrar_vector_cad(n,vect1);

c=simbolos(n,vect1,vect2);

if(c!=0)
{
printf("\nVector formado por cadenas con simbolos:\n");
mostrar_vector_cad(c,vect2);
}
else
printf("\nEl vector ingresado no contiene cadenas con simbolos\n");

return 0;
}


int simbolos(int n,char vect1[20][20],char vect2[20][20])
{
int i,j,k=0,ban=0;
	
for(i=0;i<n;i++)
{
	ban=0;
	for(j=0;j<strlen(vect1[i]);j++)
	{
		if(ispunct(vect1[i][j]))
		ban=1;
	}
	if(ban)
	{
		*strcpy(vect2[k],vect1[i]);
		k++;
	}
}	
	
return k;	
	
}


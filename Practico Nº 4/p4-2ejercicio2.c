#include <stdio.h>
#include <ctype.h>
#include <cym_vector.h>
#include <string.h>

void generar_cadena(int ,char *,char *,char *);

int main (int argc , char *argv[])
{
char V[30];
char CA[30],CN[30];

int n;

do
{
printf("\nIngrese orden del vector:");
scanf("%d",&n);
getchar();
}while(n<=0);

printf("\nIngrese vector:\n");

cargar_vector_char(n,V);
printf("\nVector ingresado:\n");
mostrar_vector_char(n,V);

generar_cadena(n,V,CA,CN);

if(strlen(CA))
{
printf("\n\nCadena generada con los caracteres alfabeticos del vector:\t");
printf("%s",CA);
}
else
printf("\n\nEl vector no contiene caracteres alfabeticos.");

if(strlen(CN))
{
printf("\nCadena generada con los caracteres numericos del vector:\t");
printf("%s",CN);
}
else
printf("\nEl vector no contiene caracteres numericos.");



return 0;
}

void generar_cadena(int n,char v[],char CA[],char CN[])
{
	int i,j=0,k=0;
	
for(i=0;i<n;i++)
{
	if(isalpha(v[i]))
	{
		CA[j]=v[i];
		j++;
	}
	if(isdigit(v[i]))
	{
		CN[k]=v[i];
		k++;
	}
}
CA[j]='\0'; //¿Porque al usar CA[srtlen(CA)-1]='\0' no funciona ?
CN[k]='\0'; //¿Porque al usar CN[srtlen(CN)-1]='\0' no funciona ?

}










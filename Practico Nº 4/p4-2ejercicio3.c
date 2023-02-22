#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <funcion_cadena.h>

void formar_cadena(char *,char *);  

int main(int argc , char *argv[])
{
char cad[30],cadm[30];

printf("\nIngrese cadena:");
cargar_cadena(cad);
printf("\nCadena ingresada: %s",cad);

formar_cadena(cad,cadm);

if(strlen(cadm))
printf("\nCadena formada por las letras mayusculas: %s\n",cadm);
else
printf("\nLa cadena ingresada no contiene mayusculas.\n");

return 0;
}

void formar_cadena(char cad[], char cadm[])
{
int i,j=0;
  for(i=0;i<strlen(cad);i++)
  if(isupper(cad[i]))
  {
     cadm[j]=cad[i];
	 j++;
  }
  
cadm[j]='\0';  

}
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void quita_blancos(char *,char *);

int main(int argc , char *argv[])
{
char cad[20];
char cada[20];

printf("\nIngrese cadena: ");
fgets(cad,19,stdin);
cad[strlen(cad)-1]='\0';
printf("\nCadena ingresada:\n");
printf("%s",cad);

quita_blancos(cad,cada);

printf("\n Cadena sin espacio en blanco:\n");
printf("%s",cada);

return 0;
}

void quita_blancos(char cad[],char cada[])
{
	int i,j=0;
	for(i=0;i<strlen(cad);i++)
	{
		if(cad[i]==' ')
		{
			
		}
		else
		{
			cada[j]=cad[i];
			j++;
		}
	}
cada[j]='\0';	
}
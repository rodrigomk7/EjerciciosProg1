#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int control(char *,char *);

int main(int argc ,char *argv[])
{
char cad1[20],cad2[20];
int c,s;


if(argc==3)
{
  *strcpy(cad1,argv[1]);
  *strcpy(cad2,argv[2]);

  c=control(cad1,cad2);

  if(c)
       printf("\n Las cadenas ingresadas contienen caracteres no admitidos");	
  else
      {
       s=strcmp(cad1,cad2);
       if(s==0)
          printf("\nLas palabras ingresadas son iguales.");	
	   else	 
		 {
			if(s>0)
				printf("\nPalabras ordenas alfabeticamente: %s - %s",cad2,cad1);
			else
				printf("\nPalabras ordenas alfabeticament: %s - %s ",cad1,cad2);	
		 }

       }
}
else
printf("\nSe ingresaron mas o menos de 2 palabras.");

return 0;
}




int control(char cad1[],char cad2[])
{
int i,j,r=0;

for(i=0;i<strlen(cad1);i++)
{
	if(isalpha(cad1[i])==0)
	{
		r=1;
		return r;
	} 
}

for(j=0;i<strlen(cad2);j++)
{
	if(isalpha(cad2[j])==0)
	{
		r=1;
		return r;
	}
}
return r;
}



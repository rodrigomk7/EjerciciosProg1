#include <stdio.h>
#include <string.h>
#include <funcion_cadena.h>

int cambiar_minusculas(char *);

int main (int argc ,char *argv[])
{
char cad[30];

if(argc==2)
{
	*strcpy(cad,argv[1]);
  if(control_palabra(cad))
  { 
       
     if(cambiar_minusculas(cad))
	    printf("\nPalabra modificada: %s ",cad);
     else
		printf("\nLa palabra no contiene vocales en minusculas.");	
  }
  else
     printf("\n No es una palabra.");

}
else
{
printf("\n Se ingreso mas o menos de dos palabras.");
}


return 0;
}

int cambiar_minusculas(char cad[])
{
int i,r=0;

for(i=0;i<strlen(cad);i++)
    if(cad[i]=='a'||cad[i]=='e'||cad[i]=='i'||cad[i]=='o'||cad[i]=='u')
	  {
		 cad[i]='+';
		 r=1;
	  }
return r;		  
}







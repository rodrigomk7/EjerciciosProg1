#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


int main (int argc,char *argv[])
{
int k=0,i,x;
char cnum[50];

if (argc<=2)
{
for(i=0;i<strlen(argv[1]);i++)
         {
          if( isdigit(argv[1][i]) )
		{
		cnum[k]=argv[1][i];
		k++;
		}    
	 }
	cnum[k]='\0';
	
	if(k==0)
printf("La cadena no contiene caracteres numericos\n");
else 
printf("\n %d \n",x=atoi(cnum));
}
else
printf("Se ingresaron mas de dos palabras\n");


return 0;
}

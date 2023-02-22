#include <stdio.h>
#include <string.h>

void buscar_F(char , char *, int *);

int main(int argc , char *argv[])
{
char cad[30];
char x;
int i=0;

do
{
printf("Ingrese un caracter:");
scanf("%c",&x);
getchar();
buscar_F(x,cad,&i);
}while(x!='F');

cad[i]='\0';

printf("\nSe ingreso la letra 'F'\n");

if(strlen(cad))
printf("\nCadena formada: %s",cad);

return 0;
}

void buscar_F(char x, char cad[], int *i)
{

if(x!='F')
{
cad[*i]=x;
*i=*i+1;
}

}
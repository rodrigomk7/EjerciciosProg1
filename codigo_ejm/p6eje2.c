/* 2. Ingresar cadenas de caracteres que contengan dos o más palabras cada una (realizar el correspondiente
control) en un archivo llamado prob2.txt, hasta que se ingrese una cadena que contenga la cadena "Fin
del ingreso" (no debe ser escrita en el archivo esta última cadena).
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"fn_archivos_roh.h"
//void control_2_pal(char [],int *);

int main (int argc, char *argv[])
{
FILE *p;
int d=0, o=1,r;
char cad[50], cad1[]="fin del ingreso", cad2[]=" ";

p=fopen("prob2.txt","w+");

do
{
do
{
printf("\n ingrese una cadena (%d): ",o);
fgets(cad,50,stdin);
cad[strlen(cad)-1]='\0';
control_2_pal(cad,&d); 
}while(d==0);
o++;
if(strcmp(cad,cad1)!=0)
{
fputs(cad,p);
fputs(cad2,p);
r=0;
}
else
r=1;

}while(r!=1);
fclose(p);
feof(p);
return 0;
}













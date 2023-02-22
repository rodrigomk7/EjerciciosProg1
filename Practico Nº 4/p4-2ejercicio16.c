#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int control(char *);
float operaciones(float , float , int );

int main (int argc ,char *argv[])
{
char cad1[20],cad2[20];
int n,c;
float x,y,r;

do
{
printf("\nIngrese primera cadena de digitos con un punto:");
fgets(cad1,19,stdin);
cad1[strlen(cad1)-1]='\0';
c=control(cad1);
}while(c==1);

do
{
printf("\nIngrese segunda cadena de digitos con un punto:");
fgets(cad2,19,stdin);
cad2[strlen(cad2)-1]='\0';
c=control(cad2);
}while(c==1);

printf("\nCadenas ingresadas:\n");
printf("%s",cad1);
printf("\n%s",cad2);

x=atof(cad1);
y=atof(cad2);


printf("\n\t\t\tElija su opcion:");
printf("\nSuma: opcion 1\n");
printf("\nResta: opcion 2\n");
printf("\nProducto: opcion 3\n");
if(y!=0)
printf("\nDivision: opcion 4\n");

printf("\nSu opcion:");
scanf("%d",&n);

r=operaciones(x,y,n);

printf("\nEl resultado es: %.2f",r);
return 0;
}

int control(char cadena[])
{
	int c=0,cp=0,i;
	for(i=0;i<strlen(cadena);i++)
	
	     if(isdigit(cadena[i])==0)
			 if(cadena[i]=='.')
				 cp++;
			 else
			 {
				 c=1;
                 return c;
			 }				 
			 
if(cp==1)
	return c=0;
else
	return c=1;
}


float operaciones(float x, float y, int n)
{
	float R;
	switch(n)
	{
		case 1:
		R=x+y;
		break;
		
		case 2:
		R=x-y;
		break;
		
		case 3:
		R=x*y;
		break;

		case 4:
		R=x/y;
		break;
	}
	
return R;	
	
}
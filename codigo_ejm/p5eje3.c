#include <stdio.h>
#include <string.h>

typedef struct{
float a;
float b;
float c;
float d;
}complejo;

typedef struct{
float r;
float i;
}resultado;

resultado operacion(complejo ,resultado );

int main (int argc , char *argv[])
{
complejo x;
resultado z;

printf("\n Ingreso del 1mer numero complejo:\n");
printf("Parte real:");
scanf("%f",&x.a);
printf("Parte imaginaria:");
scanf("%f",&x.b);

printf("\n Ingreso del 2do numero complejo:\n");
printf("Parte real:");
scanf("%f",&x.c);
printf("Parte imaginaria:");
scanf("%f",&x.d);

z=operacion(x,z);
printf("El resultado es : (%.2f,%.2f)",z.r,z.i);
return 0;
}


resultado operacion(complejo x,resultado z)
{
	int p;
	printf("\n Lista de opciones:");
	printf("\n----------------------");
	printf("\n 1.-Suma de los Complejos");
	printf("\n 2.-Diferncia de los Complejos");
	printf("\n 3.-Producto de los Complejos");
	printf("\n 4.-Cociente de los Complejos");
	do{
	printf("\n\nIngrese una opcion:");
	scanf("%d",&p);
	}while(0>=p || p>=5);
 
	switch(p){
			 case 1:
			 z.r=x.a+x.c;
			 z.i=x.b+x.d;
			 break;
			 
			 case 2:
			 z.r=x.a-x.c;
			 z.i=x.b-x.d;
			 break;
			 
			 case 3:
			 z.r=x.a*x.c-x.b*x.d;
			 z.i=x.a*x.d+x.b*x.c;
			 break;
			 
			 case 4:
			 z.r=x.a*((x.c)/(x.c*x.c+x.d*x.d))+x.b*((x.d)/(x.c*x.c+x.d*x.d));
			 z.i=x.a*((x.d)/(x.c*x.c+x.d*x.d))-x.b*((x.c)/(x.c*x.c+x.d*x.d));
			 break;
			 }
 return z;
 }
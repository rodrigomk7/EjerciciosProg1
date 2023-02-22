#include <stdio.h>
#include <cym_vector.h>
#include <ctype.h>

void tipo_de_caracter(int ,char *,int *, int *,int *,int *,int *);
int main (int argc , char *argv[])
{
char v[30];
int n,lm=0,lM=0,num=0,sig=0,esp=0;


do
{
printf("Ingrese dimension del vector  caracter:");
scanf("%d",&n);
getchar();
}while(n<=0);

printf("\nIngrese vector\n");
cargar_vector_char(n,v);
printf("\nVector ingresado\n");
mostrar_vector_char(n,v);

tipo_de_caracter(n,v,&lm,&lM,&num,&sig,&esp);

printf("\n\nCantidad de caracteres que son  minusculas: %d",lm);
printf("\nCantidad de caracteres que son  mayusculas: %d",lM);
printf("\nCantidad de caracteres que son  signos: %d",sig);
printf("\nCantidad de caracteres que son  numeros: %d",num);
printf("\nCantidad de caracteres que son  espacio en blanco: %d",esp);
return 0;
}


void tipo_de_caracter(int n,char v[],int *lm, int *lM,int *num,int *sig,int *esp)
{
	int b1=0,b2=0,b3=0,b4=0,b5=0;
	int i;
	
	for(i=0;i<n;i++)
	{
	b1=islower(v[i]);
	if(b1!=0)
		*lm=*lm+1;
	
	b2=isupper(v[i]);
	if(b2!=0)
		*lM=*lM+1;
	
	b3=isdigit(v[i]);
	if(b3!=0)
		*num=*num+1;
	
	b4=ispunct(v[i]);
	if(b4!=0)
		*sig=*sig+1;
	
    b5=isspace(v[i]);
	if(b5!=0)
		*esp=*esp+1;
	}
}
#include<stdio.h>
#include<string.h>

void apertura(char []);
void mostrar_arch(char []);
void copia(int , char []);
void buscarPala(char []);

int main(int argc, char *argv[])
{
char nombre[]="problema1.txt";
int n;
apertura(nombre);
do{
printf("\nIngrese una cantidad de cadenas:");
scanf("%d",&n);
getchar();
}while(n<=0);

copia(n,nombre);
mostrar_arch(nombre);
buscarPala(nombre);
return 0;
}



void apertura(char nombre[])
{FILE 	*p;
	p = fopen( nombre, "r");
	if (p == NULL)
	{	printf("\n El archivo no existe ");
		p = fopen( nombre, "w+"); 
		if (p == NULL)
		{
			printf("\n El archivo no se pudo crear ");
			exit(1);
		}}
	else
		printf("\n El archivo se abrio en modo lectura\n");
	fclose(p);}

void mostrar_arch(char nombre[])
{
	FILE *p;
	p=fopen(nombre,"r");
	while(!feof(p))
          printf("%c", fgetc(p));
fclose(p);
}

void copia(int n , char nombre[])
{
	FILE *p;
	char cad[50];
	int i=0;
	p=fopen(nombre,"w+");
	for(;i<n;i++)
	{
		printf("\n Ingrese la cad. N°%d: ",i+1);
		fgets(cad,50,stdin);
		cad[strlen(cad)-1]='\0';
		fputs(cad,p);
		fputs("\n",p);
	}
fclose(p);
}


void buscarPala(char nombre[])
{
	FILE *p;
	int i, b=1;
	char cad1[50],cad[50];
	
	printf("\n Ingrese una cadena a buscar en el archivo: ");
	fgets(cad1,50,stdin);
	cad1[strlen(cad1)-1]='\0';
	
	p=fopen(nombre,"r+");
	while(!feof(p))
	{
		fscanf(p, "%s",cad);
		
			if(strcmp(cad,cad1)==0)
			b=b+1;
	}
	fclose(p);
	if(b!=0)
		printf("\n La cadena \"%s\", esta \" %d \" veces...",cad1,b-1);
	else
		printf("\n La cadena \"%s\" NO esta en el archivo...",cad1);
}
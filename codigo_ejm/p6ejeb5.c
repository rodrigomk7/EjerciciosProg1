/*p6 -eje 5- binario **/

#include<stdio.h>
#include<string.h>
#include"fn_estru_roh.h"

 //FALTA ORDENAR ALFABETICAMENTE
 
 
datos_personales cargar_1_prs();

void cargar_prs5bin(char nombre[]);
void mostrar_prs5(char nombre[]);
void mos_prs5b(datos_personales d);
void menu5bin(char nombre[]);
int busk_ap(char ap1[],char nom1[],char ap2[],char nom2[]);
void info_por_ap5(char nombre[]);
int busk_mes(int mes,int mes1);
void info_por_mes(char nombre[]);
//void ordena_alfa_bin(char nombre[]);


int main(int argc, char *argv[])
{
	char nombre[]="bin5.dat";
	menu5bin(nombre);
	return 0;
}

void menu5bin(char nombre[])
{
	int op;
	do{
		printf("\n 1.- Ingresar informacion de prs.");
		printf("\n 2.- Mostrar por pantalla el contenido del archivo.");
		printf("\n 3.- Consulta de informacion, por apellido y nombre.");
		printf("\n 4.- Consulta de informacon, por mes de nacimiento.");
		printf("\n 5.- Ordenar en forma alfabetica por apellido.");
		printf("\n 6.- Modificacion de datos, buscando por apellido y nombre.");
		printf("\n 7.- Salir del programa.");
		do{
			printf("\n Ingrese una opcion: ");
			scanf("%d",&op);
			getchar();
		}while(op<=0 && op>=8);
			switch (op){
						case 1:
						cargar_prs5bin(nombre);
						break;
						case 2:
						mostrar_prs5(nombre);
						break;
						case 3:
						info_por_ap5(nombre);
						break;
						case 4:
						info_por_mes(nombre);
						break;
						case 5:
						//ordena_alfa_bin(nombre);
						break;
						case 6:
						break;
			}
}while(op!=7);}


void cargar_prs5bin(char nombre[])
{
	datos_personales d;
	FILE 	*p;
	
	if((p = fopen(nombre,"r+")) == NULL)
		if((p = fopen(nombre,"w+")) == NULL)
			{
		     	printf("Error de apertura de archivo");
		     	fgetc(stdin);
		     	exit(1);
		     	}
	d=cargar_1_prs();
	
	fseek(p,0,2);	     	
	fwrite(&d, sizeof(d), 1, p);	     	
	fclose(p);
return;}
	
datos_personales cargar_1_prs()
{   
    datos_personales d;

	int x=0;
	do{
	 printf("\n Apellido/s: ");
     fgets(d.apellidos,29,stdin);
     d.apellidos[strlen(d.apellidos)-1]='\0';
     solo_letras_y_espacio(d.apellidos,&x);
	 mayus_prim_letra(d.apellidos);
	 }while(x==0);
     do{
	 printf("\n Nombre/s: ");
	 fgets(d.nombre,29,stdin);
     d.nombre[strlen(d.nombre)-1]='\0';
     solo_letras_y_espacio(d.nombre,&x);
	 mayus_prim_letra(d.nombre);
	 }while(x==0);
	 d.fnaci=cargar_fecha();
	 d.dom=cargar_domicilio();
	 return d;
}

void mostrar_prs5(char nombre[])
{
	FILE *p;
	datos_personales d;
	int i,tam;
	printf("\n Lista:");
	printf("\n-------------------\n");
		if((p = fopen(nombre,"r")) == NULL)
					{
					printf("El archivo no existe");
					fgetc(stdin);
					exit(1);
					}
	fseek(p,0,2);
	tam = ftell(p) / sizeof(datos_personales);
	rewind(p);
	for(i=0 ; i<tam ; i++)
		{
		fread(&d, sizeof(datos_personales), 1, p);
		mos_prs5b(d);
		}
	fclose(p);
return;
}

void mos_prs5b(datos_personales d)
{ 
	printf("\n Apellido/s: %s",d.apellidos);
	printf("\n Nombre: %s",d.nombre);
	printf("\n Fecha de Nac.: %d/ %d/ %d ",d.fnaci.dia,d.fnaci.mes,d.fnaci.anio);
	mostrar_domicilio(d.dom);
printf("\n---------------------------\n");
}


void info_por_ap5(char nombre[])
{
	datos_personales  d;
	FILE *p;
	int i,tam,x=0,k=0,b;
	char cad[50],cad1[50];
	
	p=fopen(nombre,"r");
	
	do{
		printf("\n Ingrese Apellido/s:");
		fgets(cad,49,stdin);
		cad[strlen(cad)-1]='\0';
		solo_letras_y_espacio(cad,&x);
	}while(x==0);
	do{
		printf("\n Ingrese Nombre/s:");
		fgets(cad1,49,stdin);
		cad1[strlen(cad1)-1]='\0';
		solo_letras_y_espacio(cad1,&x);
	}while(x==0);
	
	fseek(p , 0 , 2);
	tam = ftell(p) / sizeof(datos_personales);
	rewind(p);
	
	for(i=0 ; i<tam ; i++)
		{
		fread(&d, sizeof(datos_personales), 1, p);
		b=busk_ap(d.apellidos,d.nombre,cad,cad1);
			if(b==1)
				mos_prs5b(d);
			else
				k++;
		}
		if(k==i)
			printf("\nLa persona NO esta en la lista... \n");
	fclose(p);
return;
}

int busk_ap(char ap1[],char nom1[],char ap2[],char nom2[])
{
	
	if(strcmp(ap1,ap2)==0)
	{
		if(strcmp(nom1,nom2)==0)
		return 1;
	}
	else
		return 0;
}

void info_por_mes(char nombre[])
{
	datos_personales  d;
	fecha f;
	FILE *p;
	int i,tam,x=0,k=0,b,mes;
	char cad[50];
	
	p=fopen(nombre,"r");
	do{
	do{
		printf("\n Ingrese Mes(entero):");
		fgets(cad,49,stdin);
		cad[strlen(cad)-1]='\0';
		solo_numeros(cad,&x);
	}while(x==0);
	mes=atoi(cad);
	}while(0>=mes && mes>=13);
	
	fseek(p,0,2);
	tam = ftell(p) / sizeof(datos_personales);
	rewind(p);
	
	for(i=0 ; i<tam ; i++)
		{
		fread(&d, sizeof(datos_personales), 1, p);
		
		b=busk_mes(d.fnaci.mes,mes);
			if(b==1)
				mos_prs5b(d);
			else
				k++;
		}
		if(k==i)
			printf("\nEl Mes NO esta en la lista... \n");
	fclose(p);
return;
}

int busk_mes(int mes,int mes1)
{	if(mes==mes1)
		return 1;
	else
		return 0;}

/*
void ordena_alfa_bin(char nombre[])
{
	datos_personales  d,e,aux;
	FILE *p;
	int i,tam,j;
	char cad[50];
	
	p=fopen(nombre,"r");
	
	fseek(p,0,2);
	tam = ftell(p) / sizeof(datos_personales);
	rewind(p);
	
for(i=0 ; i<tam-1; i++)
		{
		fread(&d, sizeof(datos_personales), 1, p);
			for(j=i+1; j<tam ; j++)	
			{
				fread(&e, sizeof(datos_personales), 1, p);
					if(strcmp(e.apellidos,d.apellidos) < 0)
					{//apellido
					strcpy(aux.apellidos,e.apellidos);
					strcpy(e.apellidos,d.apellidos);
					strcpy(d.apellidos,aux.apellidos);
					//nombre
					strcpy(aux.nombre,e.nombre);
					strcpy(e.nombre,d.nombre);
					strcpy(d.nombre,aux.nombre);
					//anio
					aux.fnaci=e.fnaci;
					e.fnaci=d.fnaci;
					d.fnaci=aux.fnaci;
					//fecha
					strcpy(aux.dom.pais,e.dom.pais);
					strcpy(e.dom.pais,d.dom.pais);
					strcpy(d.dom.pais,aux.dom.pais);
					//
					strcpy(aux.dom.provincia,e.dom.provincia);
					strcpy(e.dom.provincia,d.dom.provincia);
					strcpy(d.dom.provincia,aux.dom.provincia);
					//
					strcpy(aux.dom.ciudad,e.dom.ciudad);
					strcpy(e.dom.ciudad,d.dom.ciudad);
					strcpy(d.dom.ciudad,aux.dom.ciudad);
					//
					strcpy(aux.dom.calle,e.dom.calle);
					strcpy(e.dom.calle,d.dom.calle);
					strcpy(d.dom.calle,aux.dom.calle);
					//
					strcpy(aux.dom.numero,e.dom.numero);
					strcpy(e.dom.numero,d.dom.numero);
					strcpy(d.dom.numero,aux.dom.numero);
					}
			}
		}
	
return;
} */









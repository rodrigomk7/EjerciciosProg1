/**/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"fn_archivos_roh.h"
#include"control_cadena.h"
typedef struct{
	char dia[10];
	char mes[10];
	char anio[10];
}fecha;
typedef struct{
	char apellido[50];
	char nombre[50];
	fecha f;
}persona;

persona carga_prs_en_arch();
fecha carga_fecha();

void menu12sf(char []);
void carga_vec_prs(int *n,char name[],persona v[]);
void informacion_por_ap(char name[]);
//void mostrar_v_prs(int n,persona v[]);
void mostrar_prs(persona m);
void informacion_por_fecha(char name[]);
int comparar_fecha(fecha F1, fecha F2);
void comparar(fecha F1,fecha F2,int n,persona v[]);
void editar_prs(char name[]);
void buscar_prs_x_ape_y_nombre(int n,int *r,int *pos,char ap[],char nombre[],persona d[]);
void menu13b(char ape[],char name[],persona d[],int pos);
void modificar_ape(persona d[],int i);
void modificar_fe(persona d[],int i);
void modificar_name(persona d[],int i);
void load_date_to(int n,persona v[],char name[]);

int main(int argc,char *argv[])
{
	char name[]="prob12sf.txt";
	menu12sf(name);
	return 0;
}

void menu12sf(char name[])
{
	int op,x=0;
	char cad[100];
do{
	printf("\n# # # # # # # # # # #");
	printf("\n 1. Agregar informacion de una persona.");
	printf("\n 2. Mostrar el contenido del archivo.");
	printf("\n 3. Consulta de informacion por apellido.");
	printf("\n 4. Consulta de informacion por fechas de nacimiento.");
	printf("\n 5. Editar informacion de prs. ");
	printf("\n 6. Salir del programa.");
	do{
		do{
		printf("\n Ingrese una opcion: ");
		fgets(cad,99,stdin);
		cad[strlen(cad)-1]='\0';
		x=control_numero(cad);
		}while(x==0);
		op=atoi(cad);
	}while(op<=0 && op>7);
	switch(op){
		case 1:
		carga_prs_en_arch(name);
		break;
		case 2:
		mostrar_arch(name);
		/*carga_vec_prs(&n,name,v);   declarar un n=0 y muestra el vector en vez del archivo 
		mostrar_v_prs(n,v);  */
		break;
		case 3:
		informacion_por_ap(name);
		break;
		case 4:
		informacion_por_fecha(name);
		break;
		case 5:
		editar_prs(name);
		break;
}
}while(op!=6);
printf("\n Fin del Programa.\n");
}

persona carga_prs_en_arch(char name[])
{
	FILE *p;
	persona r;
	char cad[50];
	int x=0;
	apertura(name);
	p=fopen(name,"a+");
	printf("\n ingreso de datos...\n");
	do{
	 printf("\n Apellido: ");
	 fgets(r.apellido,50,stdin);
	 r.apellido[strlen(r.apellido)-1]='\0';
	 x=control_palabra(r.apellido);
	}while(x==0);
	fputs(r.apellido,p);
	fputs(";",p);
	do{
	 printf("\n Nombre: ");
	 fgets(r.nombre,50,stdin);
	 r.nombre[strlen(r.nombre)-1]='\0';
	 x=control_palabra(r.nombre);
	}while(x==0);
	fputs(r.nombre,p);
	fputs(";",p);
    r.f=carga_fecha();
    fputs(r.f.dia,p);
	fputs(";",p);
	fputs(r.f.mes,p);
	fputs(";",p);
	fputs(r.f.anio,p);
	fputs("\n",p);
fclose(p);
}

fecha carga_fecha()
{
	fecha f;
	int x=0,r;
	printf("\n Fecha de Nac.");
	printf("(formato de fecha dd/mm/aaaa) ");
	do{
		do{
			printf("\nIngrese Dia:");
			fgets(f.dia,100,stdin);
			f.dia[strlen(f.dia)-1]='\0';
			x=control_numero(f.dia);
	       }while(x==0);
        r=atoi(f.dia);
		}while(0>=r || r >=32);
	do{	
	    do{	printf("\nIngrese Mes: ");
			fgets(f.mes,100,stdin);
			f.mes[strlen(f.mes)-1]='\0';
			x=control_numero(f.mes);
	       }while(x==0);
			r=atoi(f.mes);
		}while(0>=r || r >=13);
	do{
		do{
			printf("\n Ingrese Anio: " );
			fgets(f.anio,100,stdin);
			f.anio[strlen(f.anio)-1]='\0';
			x=control_numero(f.anio);
	       }while(x==0);
        r=atoi(f.anio);
	}while(1950>r ||r >2017);
return f;
}

void informacion_por_ap(char name[])
{
	int n=0,i,x=0,k=0;
	char cad[50];
	persona v[100];
	
	
	do{
		printf("\n ingrese un apellido a buscar: ");
		fgets(cad,50,stdin);
		cad[strlen(cad)-1]='\0';
	     x=control_palabra(cad);
	}while(x==0);
	
	for(i=0;i<n;i++)
	{
		if(strcmp(v[i].apellido,cad)==0)
		{
			printf("\n __________\n");
			mostrar_prs(v[i]);
		}
		else
			k++;
	}
	if(k==i)
		printf("\n La prs NO esta en la lista...\n ");
}

void carga_vec_prs(int *orden,char name[],persona v[])
{
	FILE *p;
	fecha f;
	char cad[50];
	int tam,i,k=0,r=0,n=1;
	apertura(name);
p=fopen(name,"r+");
	fseek(p,0,2);
	tam=ftell(p);
	rewind(p);
	
	while(!feof(p) && ftell(p)<tam)
	{
		fgets(cad,50,p);
		//cad[strlen(cad)]='\0';
		
		for(i=0;i<strlen(cad);i++)
		{
			if(cad[i]!=';' && cad[i]!='\n')
			{
			switch(n){
					case 1:
					v[k].apellido[r++]=cad[i];
					break;
					 
					case 2:
					v[k].nombre[r++]=cad[i];
					break;
			
					case 3:
					v[k].f.dia[r++]=cad[i];
					break;
					 
					case 4:
					v[k].f.mes[r++]=cad[i];
					break;
					 
					case 5:
					v[k].f.anio[r++]=cad[i];
					break;
					}
			}
			else
			{
				switch(n)
					{
					 case 1:
					 v[k].apellido[strlen(v[k].apellido)]='\0';
					 r=0;
					 n=2;
					 break;
					 
					 case 2:
					 v[k].nombre[strlen(v[k].nombre)]='\0';
					 r=0;
					 n=3;
					 break;
					 
					 case 3:
					 v[k].f.dia[strlen(v[k].f.dia)]='\0';
					 r=0;
					 n=4;
					 break;
					 
					 case 4:
					 v[k].f.mes[strlen(v[k].f.mes)]='\0';
					 r=0;
					 n=5;
					 break;
					 
					 case 5:
					 v[k].f.anio[strlen(v[k].f.anio)]='\0'; 
					 break;
					}  
			}
	
	    }
		k=k+1; 
		r=0;
		n=1;
		(*orden)++;
	}
	fclose(p);
}

void mostrar_prs(persona r)
{
	fecha f;
	printf("\n Apellido: %s",r.apellido);
	printf("\n Nombre: %s",r.nombre);
	printf("\n fecha de nac.: %s / %s / %s",r.f.dia,r.f.mes,r.f.anio);
}
/*void mostrar_v_prs(int n,persona v[])
	{
	
	int i;
     for(i=0;i<n;i++)
    	{
			printf("\n __________\n");
			mostrar_prs(v[i]);
	    }
	}
*/

void informacion_por_fecha(char name[])
{
	persona v[100];
	fecha f1,f2;
	int orden,k=0;
	char cad1[30];
	carga_vec_prs(&orden,name,v);
	printf("\n ### Ingreso de periodo:  ###\n");
	   do{
			printf("\n 1ra. Fecha:");    
			f1=carga_fecha();
			printf("\n 2da. Fecha:");
		    f2=carga_fecha();
		   }while(strcmp(f1.anio,f2.anio)==0 && strcmp(f1.mes,f2.mes)==0 && strcmp(f1.dia,f2.dia)==0);
	comparar(f1,f2,orden,v);
}

void comparar(fecha F1,fecha F2,int n,persona v[])
{ 
 int i,k=0;
for(i=0;i<n;i++)
{
    if(comparar_fecha(v[i].f, F1)>=0&& comparar_fecha(F2,v[i].f)>=0)
	{ 
	printf("\n Prs. N.:%d",++k);
	printf("\n\tApellido: %s", v[i].apellido);    
	printf("\n\t Nombre: %s", v[i].nombre);    
	printf("\n\tFecha de nacimiento: %s/ %s/ %s \n", v[i].f.dia, v[i].f.mes, v[i].f.anio);
	}}}
	
int comparar_fecha(fecha F1, fecha F2)
{
  int R, d1=atoi(F1.dia), m1=atoi(F1.mes),a1=atoi(F1.anio);
  int   d2=atoi(F2.dia),m2=atoi(F2.mes),a2=atoi(F2.anio);
 
 if(a1>a2)
    { R=1;}
    else
       {
          if(a1<a2)
            {R=-1;}
              else
                 {
                   if(m1>m2)
                    {R=1; }
                      else
                         {
                           if(m1<m2)
                              { R =-1;}
                              else
                                {
                                  if(d1>d2)
                                     {R=1;}
                                     else
                                       {
                                         if(d1<d2)
                                           {R=-1;}
                                           else
                                            {
                                              R=0;
                                            }      
                                       }
                                }
                           }
                   }
          }
return R;} 

void editar_prs(char name[])
{  
    persona d[80];
   // char nombre[]="prob12.txt";
	int r=0,l=0,pos=0,x=0;
	char nombre[50],ape[50];
	
	carga_vec_prs(&l,name,d);

	do{	printf("\n Ingrese Apellido:");
	 fgets(ape,50,stdin);
	 ape[strlen(ape)-1]='\0';
	 x=control_palabra(ape);
	}while(x==0);
	do{
	 printf("\n Ingrese Nombre:");
	 fgets(nombre,50,stdin);
	 nombre[strlen(nombre)-1]='\0';
	 x=control_palabra(nombre);
	}while(x==0);
	


buscar_prs_x_ape_y_nombre(l,&r,&pos,ape,nombre,d);
if(r!=0)
{
	printf("\n La prs. si esta en la lista \n");
	menu13b(ape,nombre,d,pos);
	load_date_to( l,d,name);
}
	else
	printf("\n La persona no esta en la lista\n");
return;
}


void buscar_prs_x_ape_y_nombre(int n,int *r,int *pos,char ap[],char nombre[],persona d[])
{
int i;

	for(i=0;i<n;i++)
      	if(strcmp(d[i].apellido,ap)==(0))
		{ 
			if(strcmp(d[i].nombre,nombre)==(0))
			{
			(*r)++;
			(*pos)=i;
			}
		}
}

void menu13b(char ape[],char name[],persona d[],int pos)
{
	int n;

	do
	{
	printf("\n 1- Modificar Apellido");
	printf("\n 2- Modificar Nombre");
	printf("\n 3- Modificar fecha de Naci.");
	printf("\n 4- Salir.");
	
	printf("\n ingrese opcion: ");
	scanf("%d",&n);
	getchar();
	
	switch(n){
		case 1:
			modificar_ape(d,pos);
			break;
		case 2:
			modificar_name(d,pos);
			break;
		case 3:
			modificar_fe(d,pos);
			break;
	}
	}while(n!=4);

return;
}

void modificar_ape(persona d[],int i)
{
	int x=0;
	char cad[50];
	
	do{	printf("\n Ingrese nuevo ape:");
	 fgets(cad,50,stdin);
	 cad[strlen(cad)-1]='\0';
	 x=control_palabra(cad);
	}while(x==0);
    
    strcpy(d[i].apellido,cad);
}	
void modificar_name(persona d[],int i)
{
	int x=0;
	char cad[50];

    do{	
	printf("\n Ingrese nuevo nombre:");
	fgets(cad,50,stdin);
	cad[strlen(cad)-1]='\0';
	x=control_palabra(cad);
	}while(x==0);
    strcpy(d[i].nombre,cad);
}

void modificar_fe(persona d[],int i)
{
	fecha f;
	d[i].f=carga_fecha();
}


void load_date_to(int n,persona v[],char name[])
{
	FILE *p;
	int i;
	apertura(name);
	p=fopen(name, "w");

	for(i=0;i<n;i++)
	{
		fprintf(p, "%s;", v[i].apellido);
		fprintf(p, "%s;", v[i].nombre);
		fprintf(p, "%s;", v[i].f.dia);
		fprintf(p, "%s;", v[i].f.mes);
		fprintf(p, "%s", v[i].f.anio);
		fprintf(p,"\n");
		
	}
	fclose(p);
} 
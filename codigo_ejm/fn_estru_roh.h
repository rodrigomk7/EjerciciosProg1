/*
FUNCIONES DE STRUCT Y ALGO DE ARCHIVO

1) void solo_letras(char cad[],int *p) -- 1=V ; 0=F



*/


#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include"fn_cadenas_roh.h"
#include"fn_archivos_roh.h"

/* controles de datos */
/** 1 ********/
void solo_letras( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isalpha(cad[i])!=0)
		 r++;
	 if(r ==i)
		 *p=1;
		 else
	     *p=0;}
/** 1 ********/	 
void solo_letras_y_espacio( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isalpha(cad[i])!=0 || cad[i]==' ')
		 r++;
	 if(r ==i)
		 *p=1;
		 else
	     *p=0;}
/** 1 ********/	 
void solo_letras_numeros( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isalnum(cad[i])!=0)
		 r++;
	 if(r ==i)
		 *p=1;
		 else
	     *p=0;}
/** 1 ********/	 
void solo_letras_numeros_espacio( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isalnum(cad[i])!=0 || cad[i]==' ')
		 r++;
	 if(r ==i)
		 *p=1;
		 else
	     *p=0;}
/** 1 ********/	 
void solo_numeros( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isdigit(cad[i])!=0)
		 r++;
	 if(r==i)
		 *p=1;
		 else
	     *p=0;} 

/** 1 ********/	 
	void ingresar_palabra( char cad1[])
	{	int de=0,p=0;
	   do{
		   if(p==1)
			   printf("\n \"error\" vuelva a ingresar:");
		   fgets(cad1,29,stdin);
		   cad1[strlen(cad1)-1]='\0';
		   solo_letras_y_espacio(cad1,&de);
	       mayus_prim_letra(cad1);
		   p=1;
	  }while(de==0);
	}

/* cargar una fecha cualquiera 
llamar " ...=cargar_fecha();" */
typedef struct {
				int dia;
				int mes;
				int anio;
			  }	fecha;
fecha cargar_fecha()
{fecha fech;
char cad[100];
int x=0;
printf("\n (formato  de fecha dd/mm/aaaa) ");
	do{
		do{
			printf("\nIngrese Dia:");
			fgets(cad,100,stdin);
			cad[strlen(cad)-1]='\0';
			solo_numeros(cad,&x);
	       }while(x==0);
        fech.dia=atoi(cad);
    //scanf("%d",&fech.dia);
	}while(0>=fech.dia || fech.dia >=32);
do{	
	    do{	printf("\nIngrese Mes: ");
			fgets(cad,100,stdin);
			cad[strlen(cad)-1]='\0';
			solo_numeros(cad,&x);
	       }while(x==0);
        fech.mes=atoi(cad);

		//scanf("%d",&fech.mes);
	}while(0>=fech.mes || fech.mes >=13);
do{
		do{
			printf("\n Ingrese Anio: " );
			fgets(cad,100,stdin);
			cad[strlen(cad)-1]='\0';
			solo_numeros(cad,&x);
	       }while(x==0);
        fech.anio=atoi(cad);
	//scanf("%d",&fech.anio);
	}while(1950>fech.anio || fech.anio >2017);
return fech;
}
/* cargar domicilio cualquiera */

/** 1 ********/
typedef struct{
	           char apellidos[30];
			   char nombre[30];
			   fecha fnac;
			   char telefono[30];
			}datos_prs;
typedef struct{
               char pais[30];
               char provincia[30];
               char ciudad[30];
               char calle[30];
               char numero[30];
               }domicilio;
/** 1 ********/			   
domicilio cargar_domicilio()
{
	
	domicilio P;
	int x=0;
	do{
	 printf("\n pais: ");
     fgets(P.pais,29,stdin);
     P.pais[strlen(P.pais)-1]='\0';
	 solo_letras(P.pais,&x);
	 mayus_prim_letra(P.pais);
	  }while(x==0);
	do{
	 printf("\n provincia: ");
     fgets(P.provincia,29,stdin);
     P.provincia[strlen(P.provincia)-1]='\0';
     solo_letras(P.provincia,&x);
	 mayus_prim_letra(P.provincia);
	  }while(x==0);
	 do{
	 printf("\n ciudad: ");
     fgets(P.ciudad,29,stdin);
     P.ciudad[strlen(P.ciudad)-1]='\0';
     solo_letras_y_espacio(P.ciudad,&x);
	 mayus_prim_letra(P.ciudad);
	 }while(x==0);
	 do{
	 printf("\n calle: ");
     fgets(P.calle,29,stdin);
     P.calle[strlen(P.calle)-1]='\0';
     solo_letras_numeros_espacio(P.calle,&x);
	 mayus_prim_letra(P.calle);
	  }while(x==0);
	 do{
	 printf("\n numero: ");
     fgets(P.numero,29,stdin);
     P.numero[strlen(P.numero)-1]='\0';
     solo_numeros(P.numero,&x);
	  }while(x==0);
	return P;
}



typedef struct{
				char apellidos[30];
				char nombre[30];
				fecha fnaci;
				domicilio dom;
			 }datos_personales;
			 


/* carga datos de n personas */
datos_personales cargar_datos_per(int n,datos_personales v[])
{
	int d=0,i;
	
	for(i=0;i<n;i++)
	{printf("\n prs. #%d:",i+1);
	
	do{
	printf("\n Apellido/s:");
	fgets(v[i].apellidos,29,stdin);
	v[i].apellidos[strlen(v[i].apellidos)-1]='\0';
	solo_letras_y_espacio(v[i].apellidos,&d);
	mayus_prim_letra(v[i].apellidos);
	}while(d==0);
	do{
	printf("\n Nombre/s:");
	fgets(v[i].nombre,29,stdin);
	v[i].nombre[strlen(v[i].nombre)-1]='\0';
	solo_letras_y_espacio(v[i].nombre,&d);
	mayus_prim_letra(v[i].nombre);
	}while(d==0);
	
	v[i].fnaci=cargar_fecha();
	v[i].dom=cargar_domicilio();
	}}
	
/* mostrar domicilio*/
void mostrar_domicilio(domicilio P)
{
printf("\n Pais: %s",P.pais);
printf("\n Provincia: %s",P.provincia);
printf("\n Ciudad: %s",P.ciudad);
printf("\n Calle: %s",P.calle);
printf("\n Numero: %s",P.numero);
}

/** 1 ingrasa dato de "n" prs ********/
datos_prs ingresar_datos_prs(int n, datos_prs v[])
{
	fecha fnac;
	int i,d=0;
	for(i=0;i<n;i++)
	{
		    printf("\n##Datos de prs. num.:%d",i+1);
		    do{
			printf("\n Apellido/s: ");
			fgets(v[i].apellidos,29,stdin);
			v[i].apellidos[strlen(v[i].apellidos)-1]='\0';
			solo_letras_y_espacio(v[i].apellidos,&d);
	        mayus_prim_letra(v[i].apellidos); //mayus despues de un espacio y las demas nimuscula
			}while(d==0);
			
			do{
			printf("\n Nombre/s: ");
			fgets(v[i].nombre,29,stdin);
			v[i].nombre[strlen(v[i].nombre)-1]='\0';
			solo_letras_y_espacio(v[i].nombre,&d);
	        mayus_prim_letra(v[i].nombre);
	        }while(d==0);
			printf("\n Fecha de nacimiento: ");
			v[i].fnac=cargar_fecha();
			 //getchar();
			 do{
			 printf("\n telefono: ");
			 fgets(v[i].telefono,29,stdin);
			 v[i].telefono[strlen(v[i].telefono)-1]='\0';
			 solo_numeros(v[i].telefono,&d);
			  }while(d==0);
	
	}
	//return v[i];
}

void mostrar_datos_prs(int n, datos_prs v[])
{
    fecha fnac;
	int i;

	for(i=0;i<n;i++)
	{
	printf("\n-----------------------------------------");
	printf("\n\n##Datos de prs. num.:%d",i+1);
	printf("\n Apellido/s y Nombre/s: %s, %s ",v[i].apellidos,v[i].nombre);
	printf("\n Fecha de nacimiento: %d / %d / %d",v[i].fnac.dia,v[i].fnac.mes,v[i].fnac.anio);
	printf("\n Telefono: %s",v[i].telefono);
	}
    printf("\n-----------------------------------------");	
}


/**ordena alfa n datos por apellido*/
void ordenar_alfab(int n,datos_prs v[])
{
	int i, j;
	datos_prs aux;
	for (i = 0; i< n-1; i++)
		for(j = i+1; j<n; j++)
		{
			if(strcmp(v[j].apellidos, v[i].apellidos) < 0)
			{
				 aux = v[j];
				v[j] = v[i];
				v[i] = aux;
				
			}
		}
}


/* "datos 9" carga apellido nombre y fecha de nacimiento es estructura
solo de una persona */
typedef struct{
	char name[50];
	char apellido[50];
	fecha f;
}datos9;

datos9 cargar_date(datos9 v)
{
	fecha f;
	int k=0,d=0;
		printf("\n##Datos de prs.");
		    do{
			printf("\n Apellido/s: ");
			fgets(v.apellido,29,stdin);
			v.apellido[strlen(v.apellido)-1]='\0';
			solo_letras_y_espacio(v.apellido,&d);
	        mayus_prim_letra(v.apellido);
			}while(d==0);
			
			do{
			printf("\n Nombre/s: ");
			fgets(v.name,29,stdin);
			v.name[strlen(v.name)-1]='\0';
			solo_letras_y_espacio(v.name,&d);
	        mayus_prim_letra(v.name);
	        }while(d==0);
			
			printf("\n Fecha de nacimiento: ");
			v.f=cargar_fecha();
			// getchar();
return v;
}

/*crea una estructura  "datos9"  apatir de
 renglon de un archivo*/
datos9 convertir_d9(char cad[],datos9 d[])
{
	int i,n=1,r=0;
	static int k;
	char cad1[10],cad2[10],cad3[10];
	
for(i=0;i<strlen(cad);i++)
{
	if(cad[i]!=';'&&cad[i]!='\n')
	{
	switch(n)
			{
			 case 1:
			 d[k].apellido[r++]= cad[i]; 
			
			 break;
			 
			 case 2:
			 d[k].name[r++]=cad[i];
			 break;
			 
			 case 3:
			 cad1[r++]=cad[i];
			 break;
			 
			 case 4:
			 cad2[r++]=cad[i];
			 break;
			 
			 case 5:
			 cad3[r++]=cad[i];
			 break;
			// default :n>6;
			}
	}
	else
	{
		switch(n)
			{
			 case 1:
			 d[k].apellido[strlen(d[k].apellido)]='\0';
		     r=0;
			 n++;
			 break;
			 
			 case 2:
			 d[k].name[strlen(d[k].name)]='\0';
			 r=0;
			 n++;
			 break;
			 
			 case 3:
			 cad1[strlen(cad1)]='\0';
			 d[k].f.dia=atoi(cad1);
			 r=0;
			 n++;
			 break;
			 
			 case 4:
			 cad2[strlen(cad2)]='\0';
			 d[k].f.mes=atoi(cad2);
			 r=0;
			 n++;
			 break;
			 
			 case 5:
			 cad3[strlen(cad3)]='\0'; 
			 d[k].f.anio=atoi(cad3);
			 break;
			}     	
	}	
}
k=k+1; 
}
	
datos9 mostrar_d9(int n,datos9 d[])
{
	int i=0;
	fecha f;
	for(;i<n;i++)
	{
	printf(" \n Prs. n° %d",i+1);
    printf("\n Apellido: %s",d[i].apellido);
	printf("\n Nombre: %s",d[i].name);
	printf("\n Fecha Nac.: %d / %d / %d",d[i].f.dia,d[i].f.mes,d[i].f.anio);
	printf("\n------------------------------");
	}
}


/* carga en un archivo los datos de "datos9" 
solo de una persona */
void load_date(datos9 v,char nombre[])
{
	FILE *p;
	apertura(nombre);
	p=fopen(nombre, "a+");
	   
		fprintf(p, "%s;", v.apellido);
		fprintf(p, "%s;", v.name);
		fprintf(p, "%d;", v.f.dia);
		fprintf(p, "%d;", v.f.mes);
		fprintf(p, "%d", v.f.anio);
		fprintf(p,"\n");
	fclose(p);
}


/*crea un vector de struct  "datos9"  apatir de un archivo*/
void load_vector9(int *l,char nombre[], datos9 d[])
{
FILE *p;
int cant;
char cad[50];
p=fopen(nombre,"r");
fseek(p,0,2);
cant=ftell(p);
rewind(p);
while(!feof(p) && ftell(p)<cant)
    {
	fgets(cad,50,p);
	convertir_d9(cad,d);
	(*l)++;
	}
}




/* busca un apellido en un vector de struct y genera otro 
devuelve el orden del nuevo vector*/
void buscar_ape(int *r ,int n,char cad1[],datos9 e[],datos9 d[])
{
	int i;
	for(i=0;i<n;i++)
      	if(strcmp(d[i].apellido,cad1)==(0))
			e[(*r)++]=d[i];
}

/*carga persona en un estructura 
y despues la copia en un archivo*/
void cargar_persona(char nombre[])
{   datos9 v;
	FILE *p;
	apertura(nombre);
	v=cargar_date(v);
	load_date(v,nombre);
	return;
}

/* busca y da informacion por apellido
como estructura  */
void info_por_apellido(char nombre[])
{
	datos9 d[100],e[100];
	int l=0,r=0,de=0;
	char cad1[30];
	load_vector9(&l,nombre,d);
	       
            
	        printf("\n ###Ingrese un apellido a buscar:");
			ingresar_palabra(cad1);
			/*do{fgets(cad1,29,stdin);
			cad1[strlen(cad1)-1]='\0';
			solo_letras_y_espacio(cad1,&de);
	        mayus_prim_letra(cad1);
			}while(de==0);*/
		buscar_ape(&r ,l,cad1,e,d);
if(r!=0)
{
	printf("\n ### Informacion con el apellido - %s - ###",cad1);
    mostrar_d9(r,e);
}
else
	printf("\n ### El apellido - %s -  NO esta en la lista ###\n",cad1);
return;	
}


/* info por dos fechas dato9********/
int comparar_fecha(fecha F1, fecha F2)
{ int R;
  int d1=F1.dia,m1=F1.mes,a1=F1.anio,d2=F2.dia,m2=F2.mes,a2=F2.anio;
 
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


void comparar(fecha F1,fecha F2,int n,datos9 d[])
{ 
 int i,k=0;

for(i=0;i<n;i++)
{
    if(comparar_fecha(d[i].f, F1)>=0&& comparar_fecha(F2,d[i].f)>=0)
	{ 
	printf("\n Prs. N.:%d",++k);
	printf("\n\tApellido: %s", d[i].apellido);    
	printf("\n\t Nombre: %s", d[i].name);    
	printf("\n\tFecha de nacimiento: %d/ %d/ %d \n", d[i].f.dia,d[i].f.mes,d[i].f.anio);
	}}}

void info_por_fechas(char nombre[])
{
	datos9 d[100],e[100];
	fecha f1,f2;
	int l,k=0;
	char cad1[30];
	load_vector9(&l,nombre,d);
	       printf("\n ### Ingreso de periodo:  ###\n");
		   do{
			   printf("\n 1ra. Fecha:");
	        f1=cargar_fecha(f1);
		   printf("\n 2da. Fecha:");
		    f2=cargar_fecha(f2);
		   }while(f1.anio==f2.anio && f1.mes==f2.mes && f1.dia==f2.dia);
	comparar(f1,f2,l,d);
return;
}

/***** fin de info por fechas  *******/




/* carga n "datos9" a una estructura */
datos9 cargar_date_n_prs(int n, datos9 v[])
{
	fecha f;
	int i,k=0,d=0;
	
	
	for(i=0;i<n;i++)
	{
		printf("\n##Datos de prs. num.:%d",k=i+1);
		    do{
			printf("\n Apellido/s: ");
			fgets(v[i].apellido,29,stdin);
			v[i].apellido[strlen(v[i].apellido)-1]='\0';
			solo_letras_y_espacio(v[i].apellido,&d);
	        mayus_prim_letra(v[i].apellido);
			}while(d==0);
			
			do{
			printf("\n Nombre/s: ");
			fgets(v[i].name,29,stdin);
			v[i].name[strlen(v[i].name)-1]='\0';
			solo_letras_y_espacio(v[i].name,&d);
	        mayus_prim_letra(v[i].name);
	        }while(d==0);
			
			printf("\n Fecha de nacimiento: ");
			v[i].f=cargar_fecha();
			 getchar();}}	


/* carga n "datos9" en un archivo
(de "struct" a "archivo") uso vector de struct*/
void load_date_n_prs(int n,datos9 v[],char nombre[])
{
	FILE *p;
	int i;
	apertura(nombre);
	p=fopen(nombre, "w+");

	for(i=0;i<n;i++)
	{
		fprintf(p, "%s;", v[i].apellido);
		fprintf(p, "%s;", v[i].name);
		fprintf(p, "%d;", v[i].f.dia);
		fprintf(p, "%d;", v[i].f.mes);
		fprintf(p, "%d", v[i].f.anio);
		fprintf(p,"\n");
	}
	fclose(p);} 

/*menu del prob 12*/
/*
void menu12(char nombre[])
{	int opcion;
do{
	printf("\n\n# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
	printf("\n 1- Agregar informacion de una persona."); //anda 
	printf("\n 2- Mostrar el contenido del archivo.");    //anda
	printf("\n 3- Consulta la informacion de un apellido."); //anda
	printf("\n 4- Consulta la informacion por fechas de nacimiento(ingresando dos fechas.");//no anda
	printf("\n 5- Salir del programa.\n");
	do{printf("\n Ingrese una opcion:");
	scanf("%d",&opcion);
	getchar();
	}while(opcion<0 || opcion >5);
	printf("\n# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # \n\n");
switch(opcion){
		case 1:
		cargar_persona(nombre);
		break;
		case 2:
		printf("\n ### El archivo \"prob12.txt\" contiene:\n");
		mostrar_arch(nombre);
		break;
		case 3:
		info_por_apellido(nombre);
		break;
		case 4:
		//info_por_fechas(nombre);    // no anda
		break;
	}
}while(opcion!=5);
printf("\t\t\tFin del Programa.\n\a");}
*/

/*busca en un vector de struct*/
void buscar_prs_x_ape_y_nombre(int n,int *r,int *pos,char ap[],char name[],datos9 d[])
{
int i;

	for(i=0;i<n;i++)
      	if(strcmp(d[i].apellido,ap)==(0))
		{ 
			if(strcmp(d[i].name,name)==(0))
			{
			(*r)++;
			(*pos)=i;
			}
		}
}




/* modifica apellido*/
void modificar_ape(datos9 d[],int i)
{
	char cad[50];
	printf("\n Ingrese nuevo ape:");
    ingresar_palabra(cad);
    strcpy(d[i].apellido,cad);
}	

/*modifica nombre*/
void modificar_name(datos9 d[],int i)
{
	char cad[50];
	printf("\n Ingrese nuevo nombre:");
    ingresar_palabra(cad);
    strcpy(d[i].name,cad);
}
/* modifica fecha*/
void modificar_fe(datos9 d[],int i)
{
	fecha f;
	d[i].f=cargar_fecha();
}


/*carga la estructura modificada en el archivo */
void load_date_to(int n,datos9 v[],char nombre[])
{
	FILE *p;
	int i;
	apertura(nombre);
	p=fopen(nombre, "w");

	for(i=0;i<n;i++)
	{
		fprintf(p, "%s;", v[i].apellido);
		fprintf(p, "%s;", v[i].name);
		fprintf(p, "%d;", v[i].f.dia);
		fprintf(p, "%d;", v[i].f.mes);
		fprintf(p, "%d", v[i].f.anio);
		fprintf(p,"\n");
		
	}
	fclose(p);
}	
	
/* menu q llama el "menu13a"   */
void menu13b(char ape[],char name[],datos9 d[],int pos)
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
	}}while(n!=4);
return;
}	
/*edita una persona la llama el menu13a*/


/*edita solo un persona*/
void editar_prs(char nombre[])
{  
    datos9 d[80];
   // char nombre[]="prob12.txt";
	int r=0,l=0,pos=0;
	char name[50],ape[50];
	
	load_vector9(&l,nombre,d);
	printf("\n Ingrese Apellido:");
	ingresar_palabra(ape);
	printf("\n Ingrese Nombre:");
	ingresar_palabra(name);

buscar_prs_x_ape_y_nombre(l,&r,&pos,ape,name,d);
if(r!=0)
{
	printf("\n La prs. si esta en la lista \n");
	menu13b(ape,name,d,pos);
	load_date_to( l,d,nombre);
}else printf("\n La persona no esta en la lista\n");
//return;
}




/*menu del problema 13 */
void menu13a(char nombre[])
{
	int opcion;
do{
	printf("\n\n# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
	printf("\n 1- Agregar informacion de una persona."); //anda 
	printf("\n 2- Mostrar el contenido del archivo.");    //anda
	printf("\n 3- Consulta la informacion de un apellido."); //anda
	printf("\n 4- Consulta la informacion por fechas de nacimiento(ingresando dos fechas.");//no anda
	printf("\n 5- Editar informacion de prs. ");
	printf("\n 6- Salir del programa.\n");
	do{printf("\n Ingrese una opcion:");
	scanf("%d",&opcion);
	getchar();
	}while(opcion<0 || opcion >6);
	printf("\n# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # \n\n");
switch(opcion){
		case 1:
		cargar_persona(nombre);
		break;
		case 2:
		printf("\n ### El archivo \"prob12.txt\" contiene:\n");
		mostrar_arch(nombre);
		break;
		case 3:
		info_por_apellido(nombre);
		break;
		case 4:
		info_por_fechas(nombre);
		break;
		case 5:
		editar_prs(nombre);
		break;
	}
}while(opcion!=6);	
	printf("\a\t\t Fin de Programa.\n ");
}

/****NUMEROS COMPLEJOS***************************************************************************************/

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
/*
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
*/

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

/*******************************************************************************************/
	typedef struct {
				char nombre_prod[30];
				char precio[30];
				fecha fven;
				}productos;
	
	/*busca una fechas posteriores a una ingresada*/
	void buscar_fecha_post(int n,int *u,fecha fec,productos v[], productos e[])
{
	int i;
	for(i=0;i<n;i++)
	{	
	if(fec.anio < v[i].fven.anio)
		e[(*u)++]=v[i];
		else
		{
			if(fec.anio == v[i].fven.anio)
			{
				if(fec.mes < v[i].fven.mes)
				    e[(*u)++]=v[i];
					else
					{
						if(fec.mes == v[i].fven.mes)
						{
							if(fec.dia < v[i].fven.dia)
				                   e[(*u)++]=v[i];
							  
								   
					    }
					}
			}
		}
	}
}
	
	
/**** IMPRESORAS***********/	
	typedef struct{
	         char marca[30];
			 char modelo[30];
			 float precio;
			}impresoras;
/** carga n impresoras *****/
impresoras cargar_impresoras(int n,impresoras v[])
  {
	int x=0,i;

  for(i=0;i<n;i++)
	  {
	  printf("\n Impresora num. %d",i+1);
	do{
	 printf("\n marca: ");
     fgets(v[i].marca,29,stdin);
     v[i].marca[strlen(v[i].marca)-1]='\0';
     solo_letras(v[i].marca,&x);
	 }while(x==0);
	 
	 printf("\n modelo: ");
     fgets(v[i].modelo,29,stdin);
     v[i].modelo[strlen(v[i].modelo)-1]='\0';
     do{
		 printf("\n precio: ");
		 scanf("%f",&v[i].precio);
		 getchar();
	 }while(v[i].precio<=0);
  }
 }	


/*genera otro vector de struc con igual nombre*/
void buscar_marca(int *r,int n, impresoras v[],impresoras e[],char marca2[])
{
	int i;
	for(i=0;i<n;i++)
		if(strcmp(v[i].marca,marca2)==0)
			e[(*r)++]=v[i];
}




/* p6eje 12*/

#include<stdio.h>
#include<string.h>
//#include"fn_archivos_roh.h"
#include"fn_estru_roh.h"

void menu12(char []);
/*void comparar(fecha F1,fecha F2,int n,datos9 d[]);
void info_por_fechas(char []);   
int comparar_fecha(fecha F1, fecha F2);
*/
int main(int argc,char *argv[])
{
	char nombre[]="prob12.txt";
	menu12(nombre);
return 0;
}

/*


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
}        */


void menu12(char nombre[])
{
	int opcion;
do{
	printf("\n\n# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
	printf("\n 1- Agregar informacion de una persona."); //anda 
	printf("\n 2- Mostrar el contenido del archivo.");    //anda
	printf("\n 3- Consulta la informacion de un apellido."); //anda
	printf("\n 4- Consulta la informacion por fechas de nacimiento(ingresando dos fechas.");//anda
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
		info_por_fechas(nombre);
		break;
	}
}while(opcion!=5);
printf("\t\t\tFin del Programa.\n\a");}

























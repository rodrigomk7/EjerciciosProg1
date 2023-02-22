/* 9. Ingresar los datos de N personas (apellido/s, nombre/s, fecha de nacimiento y teléfono) en un 
arreglo de estructuras, luego ordenar en forma alfabética por apellido las estructuras del arreglo. 
Presentar por pantalla el arreglo ingresado y el arreglo ordenado. Tener en cuenta que una 
persona puede tener más de un nombre o más de un apellido. 
*/
#include<stdio.h>
#include<string.h>
#include"fn_estru_roh.h"
/*typedef struct{
	           char apellidos[30];
			   char nombre[30];
			   fecha fnac;
			   char telefono[30];
			}datos_prs;
			

void ordenar_alfab(int,datos_prs []);
void mostrar_datos_prs(int, datos_prs []);
*/
//datos_prs ingresar_datos_prs10(int, datos_prs []);


int main(int argc, char *argv[])
{

	datos_prs per[30];
	int n,i;
	
	do{
	 printf("\n ##Ingrese una cantidad de nombres:");
	 scanf("%d",&n);
	 getchar();
	}while(n<=0);
	
	ingresar_datos_prs(n,per);
//	ingresar_datos_prs10(n,per);
	printf("\n\n### Datos ingresados ###\n");
	
	mostrar_datos_prs(n,per);
	
	ordenar_alfab(n,per);
	
	printf("\n\n### Despues del ordenamiento(alfa) ###\n");
	
	mostrar_datos_prs(n,per);
	
	return 0;
}

/*
datos_prs ingresar_datos_prs10(int n, datos_prs v[])
{
	fecha fnac;
	int i,k,d=0;

	for(i=0;i<n;i++)
	{
		printf("\n##Datos de prs. num.:%d",k=i+1);
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
			 getchar();
			 do{
			 printf("\n telefono: ");
			 fgets(v[i].telefono,29,stdin);
			 v[i].telefono[strlen(v[i].telefono)-1]='\0';
			 solo_numeros(v[i].telefono,&d);
			  }while(d==0);
	}
	return v[i];
}*/

/*
void mostrar_datos_prs(int n, datos_prs v[])
{
    fecha fnac;
	int i,k,d=0;

	for(i=0;i<n;i++)
	{
	printf("\n\n##Datos de prs. num.:%d",k=i+1);
	printf("\n Apellido/s y Nombre/s: %s, %s ",v[i].apellidos,v[i].nombre);
	printf("\n Fecha de nacimiento: %d / %d / %d",v[i].fnac.dia,v[i].fnac.mes,v[i].fnac.anio);
	printf("\n Telefono: %s",v[i].telefono);
	}	
}
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
} */
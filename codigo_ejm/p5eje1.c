/*p5 eje 1 */


#include<stdio.h>
#include<string.h>
#include"fn_estru_roh.h"
/*typedef struct {
				int dia;
				int mes;
				int anio;
			  }	fecha;
			  */
typedef struct {
				char nombre_prod[30];
				char precio[30];
				fecha fven;
				} producto;


  producto carac();
  //fecha  cargar_fecha();
  void mostrar_prod(producto);         	  

			  
int main (int argc,char *argv[])
{
    producto p;
    printf("\n \"ingreso de carac de prod.\" \n ");
    p=carac();
    printf("\n  \"ingreso fecha de vencimiento.\" \n ");
    mostrar_prod(p);
return 0;
}


producto carac()
{
producto P;
printf("\n ingrese nombre: ");
fgets(P.nombre_prod, 29,stdin);
P.nombre_prod[strlen(P.nombre_prod)-1]='\0';
printf("\n ingrese precio: ");
fgets(P.precio,29,stdin);
P.precio[strlen(P.precio)-1]='\0';
printf("\n ingrese fecha de vencimiento: \n");
P.fven = cargar_fecha();
return P;
}
void mostrar_prod(producto P)
{
 fecha fven;
 //fputs(P.nombre_prod,stdout);
printf("\n el nombre es: %s ",P.nombre_prod); 
printf("\n el precio es: %s ",P.precio);
printf("\n fecha de ven: %d/%d/%d ", P.fven.dia, P.fven.mes, P.fven.anio);
}




/*
fecha cargar_fecha()
{
fecha fven;
printf("\n ingrese dia:");
scanf("%d",&fven.dia);

printf("\n  ingrese mes: ");
scanf("%d",&fven.mes);

printf("\n ingrese anio: ");
scanf("%d",&fven.anio);
return fven;
}

*/


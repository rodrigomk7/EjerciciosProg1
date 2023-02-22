/*8. Ingresar los datos de N monitores en un arreglo de estructuras (marca, modelo, tamaño en 
pulgadas, tipo de pantalla, precio). Luego ingresar por teclado un número real y generar otro 
arreglo de estructuras que contendrá los datos del primer arreglo en donde el precio sea menor 
al número real ingresado. Presentar por pantalla el arreglo ingresado y el arreglo generado o un 
mensaje en caso de que no se encuentren precios menores al número real ingresado. 
 */
  #include<stdio.h>
 #include<string.h>
// #include"fn_archivos_roh.h"
 #include"fn_estru_roh.h"

typedef struct{
	         char marca[30];
			 char modelo[30];
			 int pulgadas;
			 char tipo_pan[30];
			 float precio;
			}monitores;
  monitores cargar_monitores();

  void gen_struc_menores(int *,int, monitores [],monitores [],int);
void mostrar_monitores(int n,monitores e[]);
  int main(int argc,char* argv[])
  {
	  monitores v[30],e[30];
	  int n,i,k,l=0,valor;
	  do
	  {
		  printf("\n ##Ingrese la cantidad de monitores: ");
		  scanf("%d",&n); 
		  getchar();
	  }while(n<=0);
	
	  for(i=0;i<n;i++)
	  {
	  printf("\n Monitor num. %d",k=i+1);
	  v[i]=cargar_monitores();
	  }
	 
	
	  printf("\n\n ##Monitores Ingresados##");
	  mostrar_monitores(n,v);
	  printf("\n\n");
	  printf("\n ##Ingrese el precio: ");
	  scanf("%d",&valor);

   gen_struc_menores(&l,n,v,e,valor);
   
   if(l!=0)
   {
	  printf("\n\n ## Monitores con precio menor a \" %d \" ##",valor);
	  mostrar_monitores(l,e);
   }
   else
	   printf("\n ## NO hay Monitores con precio menor a \" %d \" ##",valor);
  return 0;
  }
  
  
  monitores cargar_monitores()
  {
	  monitores P;
	 int x=0;
	 do{
	 printf("\n marca: ");
     fgets(P.marca,29,stdin);
     P.marca[strlen(P.marca)-1]='\0';
     solo_letras(P.marca,&x);
	 }while(x==0);
	 
	 printf("\n modelo: ");
     fgets(P.modelo,29,stdin);
     P.modelo[strlen(P.modelo)-1]='\0';
	 do{
	 printf("\n pulgadas: ");
	 scanf("%d",&P.pulgadas);
	 getchar();
	 }while(0>=P.pulgadas);
	 
	 do{
	 printf("\n tipo de pantalla: ");
     fgets(P.tipo_pan,29,stdin);
     P.tipo_pan[strlen(P.tipo_pan)-1]='\0';
     solo_letras(P.tipo_pan,&x);
	 }while(x==0);

     do{
		 printf("\n precio: ");
		 scanf("%f",&P.precio);
		 getchar();
	 }while(P.precio<=0);
	 
	 return P;
}

void mostrar_monitores(int n,monitores e[])
{
int i;	
for(i=0;i<n;i++)
{	printf("\n\n ## Impre. num. %d",i+1);
	printf(" \n marca: %s",e[i].marca);
	printf(" \n modelo: %s",e[i].modelo);
	printf(" \n pulgadas: %d\"",e[i].pulgadas);
	printf(" \n tipo de pantalla: %s",e[i].tipo_pan);
	printf(" \n precio: %.2f",e[i].precio);
}}


void gen_struc_menores(int *r,int n, monitores v[],monitores e[],int valor)
{
	int i;
	for(i=0;i<n;i++)
		if(v[i].precio<valor)
			e[(*r)++]=v[i];
}


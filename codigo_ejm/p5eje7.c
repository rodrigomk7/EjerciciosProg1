/* 7. Ingresar los datos de N impresoras en un arreglo de estructuras (marca, modelo, precio). Luego 
ingresar por teclado una marca de impresora, realizar la búsqueda en el arreglo ingresado, 
generar otro arreglo de estructuras que contendrá los datos del primer arreglo en donde coincida 
la marca de impresora. Presentar por pantalla el arreglo ingresado y el arreglo generado o un 
mensaje en caso de que no exista coincidencia. 
 */
 #include<stdio.h>
 #include<string.h>
 #include"fn_estru_roh.h"
/*typedef struct{
	         char marca[30];
			 char modelo[30];
			 float precio;
			}impresoras;
*/  impresoras cargar_impresoras(int, impresoras []);
//void buscar_marca(int *,int, impresoras [],impresoras [],char [] );
void mostrar_impre(impresoras);

  int main(int argc,char* argv[])
  {
	  impresoras v[30],e[30],P;
	  char marca2[30];
	  int n,i,k,l=0;
	  do
	  {
		  printf("\n ##Ingrese la cantidad de impresoaras: ");
		  scanf("%d",&n); 
		  getchar();
	  }while(n<=0);
	
	cargar_impresoras(n,v);
	  
	  
	  printf("\n Ingrese la marca de la impre.:");
	  fgets(marca2,29,stdin);
	  marca2[strlen(marca2)-1]='\0';
	  
	
	  printf("\n\n ##Impresoras Ingresadas##");
	  for(i=0;i<n;i++){
		  printf("\n ## Impre. num. %d",k=i+1);
	  mostrar_impre(v[i]);}
	  
	  
	  printf("\n\n");
	  
   buscar_marca(&l,n,v,e,marca2);
   
   if(l!=0)
   {
	   printf("\n\n ## Impresoras con la marca \" %s\" ##",marca2);
	  for(i=0;i<l;i++){
		  printf("\n ## Impre. num. %d",k=i+1);
	  mostrar_impre(e[i]);
	  } 
   }
   else
	   printf("\n ## NO hay Impresoras con la marca \" %s\" ##",marca2);
  return 0;
  }
  
  
  
  
  
  
  
  /*
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
 }*/

void mostrar_impre(impresoras P)
{
	printf(" \n marca: %s",P.marca);
	printf(" \n modelo: %s",P.modelo);
	printf(" \n precio: %.2f",P.precio);
}

/*
void buscar_marca(int *r,int n, impresoras v[],impresoras e[],char marca2[])
{
	int i;
	for(i=0;i<n;i++)
		if(strcmp(v[i].marca,marca2)==0)
			e[(*r)++]=v[i];
}*/



 /**/
 
 
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<ctype.h>
 #include"fn_archivos_roh.h"
 void carg_ar(char []);
 void minus(char []);
 
 int main(int argc, char *argv[])
 {
	char name[]="pdiaz.txt";
	carg_ar(name);
	printf("\n Bsqueda de pala. q comiensen en minuscula:\n");
	minus(name);
	printf("\n### EL archivo creado es: \n");
	mostrar_arch(name);
 return 0;
 }
 
 void carg_ar(char name[])
 {
	 FILE *p;
	int r=0;
	char cad[50],c[]="fin del ingreso";
	apertura(name);
	p=fopen(name,"w");
	printf("\n ( \"fin del  ingreso para finalizar\" ) \n");
 do{
	 printf("\n ingrese una cadena: ");
	 fgets(cad,50,stdin);
	 cad[strlen(cad)-1]='\0';
	 if(strcmp(cad,c)!=0)
	 {	 fputs(cad,p);
		fputs("\n",p);
	 }else
		 r=1;
 }while(r==0);
 fclose(p);
 }
 
  void minus(char name[])
  {
	  FILE *p;
	  int tam,r=0,f=0;
	  char cad[50];
	  
	 apertura(name);
	 p=fopen(name,"r+");
	 fseek(p,0,2);
	 tam=ftell(p);
	 rewind(p);
	 while(!feof(p) && ftell(p)<tam)
	 {
		 r++;
		 fgets(cad,50,p);
		 cad[strlen(cad)-1]='\0';
		 if(islower(cad[0])!=0)
			 printf("\n %s ",cad);
	     else
			 f++;
	 }
	fclose(p);
	 if(f==r)
		 printf("\n NO hay cadenas que comiensen en minuscula...\n");
  }
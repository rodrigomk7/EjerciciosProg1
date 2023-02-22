/* FUNCIONES DE ARCHIVOS */
/*
1) void apertura(char cad[50]) -- abre un archivo
2) void mostrar_arch(char nombre[]) -- muestra un archivo por pantalla
3) int buscar_pala_en_arch(char nombre[],char cad1[]) -- una palabra por linea
4) void ing_n_pala(int n,char nombre[]) -- ingresar n pala a un archivo una pala x linea
5) void control_2_pal(char cad[],int *b) -- control d 2  mas de una pala 1=v ; 0=f 
6) void mayus_x_mis(char nombre[]) -- mayus x minus y viceversa en un archivo
7) caracter contar_caracteres_arch(char cad[]) -- usa struct 
8) void gen_otro_arc(char nombre[], char nombre2[]) -- gene un new arch solo con las 
 palabras q comiensen con mayus o con espacio
9)  void mayus_despd_pto_y_coma(char cad[]) -- mandar una cadena
10)
*/
/* 1-*/
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

/*2-*/
void mostrar_arch(char nombre[])
{
	FILE *p;
	p=fopen(nombre,"r");
	while(!feof(p))
          printf("%c", fgetc(p));
fclose(p);
}


/*3- busca una palabra en el archivo devuelve 1 si esta en el archivo
la palabras deben estar una por linea*/ 
int buscar_pala_en_arch(char nombre[],char cad1[])
{
FILE *p;
char cad[50];
p=fopen(nombre,"r+");
//rewind(p);
while(!feof(p))
	{
		//fgets(cad,50,p);
		fscanf(p, "%s",cad);
		if(strcmp(cad,cad1)==0)
		   return 1;
	}
fclose(p);
}


/*4- ingresar n palabras a un archivo 
una palabra por linea*/
void ing_n_pala(int n,char nombre[])
{
	FILE *p;
	int i=0;
	char cad[50];
	p = fopen(nombre,"w+");
for(;i<n;i++)
    {
	printf("\n ingrese una cadena n.%d:",i+1);
	fgets(cad,50,stdin);
	cad[strlen(cad)-1]='\0';
	fputs(cad,p);
	fputs("\n",p);
    }
	fclose(p);
}

/*5-control de dos de mas de una palabra
"1" si hay mas de una palabra "O" si hay solo una*/
void control_2_pal(char cad[],int *b)
{
int i,c=0;
(*b)=0;
for(i=0;i<strlen(cad);i++)
{
if(cad[i]==' ')
     if(isalpha(cad[i+1]) !=0 )
          c++;
}if(c >=1 )
(*b)=1;}


/* 6-mayus x minus y viceversa en un archivo*/
void mayus_x_mis(char nombre[])
{
	FILE *p=fopen(nombre,"r+");
	int cant;
	char car;
	
	fseek(p,0,2);  // puntero en el final
	cant=ftell(p); // asigna el final
	
	rewind(p);     //resetea vuelve al inicio el puntero
	
	while(!feof(p) && ftell(p)<cant)
	{
		car=fgetc(p); //asigna un caracter
		if(isupper(car)!=0)
		{
			fseek(p,-1,1);
			fputc(tolower(car),p);
			fseek(p,0,1);
		}
		if(islower(car)!=0)
		{
			fseek(p,-1,1);
			fputc(toupper(car),p);
			fseek(p,0,1);
		}
	}
return;
}

/* 7- contar tipos de caracteres en un archivo 
esta hecho  con struct */
typedef struct{
	int ct;// cantidad total
	int ca;// nro de letras
	int cn;// nro de num
	int ceb;//nro de espacio en blanco
	int cs;//nro de signos
	int co;// nro de otros
}caracter;
caracter contar_caracteres_arch(char cad[])
{FILE *p;
	caracter k;
	char c;
k.ct=0; // cantidad total
k.ca=0; // nro de letras
k.cn=0; // nro de num
k.ceb=0;//nro de espacio en blanco
k.cs=0; //nro de signos
k.co=0;// nro de otros
p=fopen(cad,"r");
while(!feof(p))
{k.ct=k.ct+1;
c=fgetc(p);

if(isdigit(c))
   k.cn=k.cn+1;
else
   if(isalpha(c))
	  k.ca=k.ca+1;
   else
	   if(ispunct(c))
          k.cs=k.cs+1;
       else 
		   if(c==' ')
	          k.ceb=k.ceb+1;
           else
              k.co=k.co+1;			   
 }fclose(p);return k;	}

 
 /*8- genera un nuevo archivo solo con las 
 palabras q comiensen con mayus o con espacio */
void gen_otro_arc(char nombre[], char nombre2[])
{FILE *p, *r;
	char c,cad2[50];
	int cant,i=0;
	p=fopen(nombre,"r");
	r=fopen(nombre2,"w+");
	
	fseek(p,0,2);
	cant=ftell(p); 
	rewind(p);
	while(!feof(p) && ftell(p)<cant)
	{
		fgets(cad2,50,p); // lee solo una la linea 
		printf("\n %s  %d\n",cad2,i++); 
		if(isupper(cad2[0])!=0 || cad2[0]==' ')
		{
			fputs(cad2,r);
	        fputs("\n",r);
		}}
fclose(r);  fclose(p); }
 
 /*9- mandar una cadena */
 void mayus_despd_pto_y_coma(char cad[])
{
	int i;
	for(i=0;i<strlen(cad);i++)
	{
		cad[0]=toupper(cad[0]);
		if(cad[i]==';')
			cad[i+1]=toupper(cad[i+1]);
	}
}
  
  
 /*10- */
 


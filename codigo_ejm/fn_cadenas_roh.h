#include<ctype.h>
// funciones para cargar y mostrar una cadena 
void cargar_cadena(char cd[])
{
printf("\n ingrese una cadena: ");
fgets(cd,49,stdin);
cd[strlen(cd)-1]='\0';
}
void mostrar_cadena( char cd[])
{
fputs(cd,stdout);
}
/*generar una cadena solo con las letras MAYUSCULAS de otra ingresada
devuelve un puntero = 0 si no hay mayus*/
void generar_cad_de_mayus(int *p,char cad[50],char cadMayus[50])
{
	int i,k=0;
	for(i=0;i<strlen(cad);i++)
	{
		if(isupper(cad[i]))
		{
			cadMayus[k]=cad[i];
			k++;
		}
	}
	cadMayus[k]='\0';
	if(k==0)
		*p=0;
}

// suma o resta de ingresando en la cadena  *ban=0 si no se ingreso la operacion
void suma_resta_cad(int *ban, int *r,char cad[])
{
int i,t=0,k=0,j=0,p=0,x=0,y=0;
char cn1[50],cn2[50];
 	for(i=0;i<strlen(cad);i++)
 	{
 		if(isdigit(cad[i]))
 		{
 			cn1[t]=cad[i];
 			t++;
		}
		else
		{
		if(!isdigit(cad[i]) && !isspace(cad[i]) && cad[i]!='+' && cad[i]!='-' )
		   	{
		 	   *ban=0;
			 }
			else
			 {
			 	if(cad[i]==' ')
		 	    {
	               j=i;
		           i=strlen(cad); 
			    }
		     } 
	     }
	 }
	 cn1[t]='\0';
	 
	 k=j+3;
	 for(;k<strlen(cad);k++)
	 {
	    if(isdigit(cad[k]))
 		{
 			cn2[p]=cad[k];
 			p++;
		 }
		 else
		 {
		 	if(isalpha(cad[i]) || ispunct(cad[i]) )
		   	{
		 		*ban=0;
			 }
	     }
	 }
	 cn2[k]='\0';  

	 x=atoi(cn1);
	 y=atoi(cn2);
	 
	 if(cad[j+1]=='+')
	 {
	 	*r=x+y;
	 }
	if(cad[j+1]=='-')
	{
		*r=x-y;
	}
 }
 // reemplazar las MINUSCULAS por un "+" 
 // devuelve *p=1 si hay minusculas y "0" si no
 
void reemplazar_min(int *p,char argv[])
{
int i=0,c=0;
for(; i<strlen(argv) ;i++)
 {
   if(islower(argv[i]))
    {
      if(argv[i]=='a' || argv[i]=='e' || argv[i]=='i' || argv[i]=='o' || argv[i]=='u')
      {  
        argv[i]='+'; 
        c++;
      }
    }
 }
if(c==0)
	*p=0;
else
	*p=1;
} 
/* mandar un vector de caracteres  cuenta cuantas numeros , letras en mayuscula,letras en minusculas,
signos de puntuacion, espacios, y otros  
ENVIAR POR " &nma,... "  Y DEVUELVE COMO " *nma,... "*/
void contar_caracteres(int N,int *nn,int *nma,int *nmi,int *nsig,int *nesp,int *notr,char Vcad[])
{
	int i;
	for(i=0;i<N;i++)
{
if(isdigit(Vcad[i]))  // devuelve !=0 si el caracter (0-9)
	{*nn=*nn+1;}
      else{
	 if(isupper(Vcad[i])) //devuelve !=0 si el caracter (A-Z)
		{*nma=*nma+1;}
                else{       
                if(islower(Vcad[i])) //devuelve !=0 si el caracter (a-z)
	               { *nmi=*nmi+1;}
			  else{
			  if(ispunct(Vcad[i])) // devuelve !=0 si el caracter
				      { *nsig=*nsig+1;}
				       else
					{
					 if(Vcad[i]==' ')
                                        	{*nesp=*nesp+1;}
                                              else
				        	  {*notr=*notr+1;}
					 }
				 }
		       }
  
}
}

}

// cargar vect caracteres
void cargar_vect_str(int n, char v[][20])
{
	int i = 0;
	
	for ( ; i<n ; i++)
	{
		printf(" Ingresar la cadena[%d]", i);
		fgets(v[i], 28, stdin);
		//getchar();
		v[i][strlen(v[i])-1]='\0';
	}

return;	
}
// mostrar vect caracteres
void mostrar_vect_str(int n, char v[][20])
{
	int i = 0;	
	for ( ; i<n ;)
		printf("  %s", v[i++]);
}

// busca num en una cadena y devuelve "1" si hay y "0" si no hay

int tiene_num(char cad[])
{
int i,b=0;
	for(i=0;i<strlen(cad);i++)
	{
		if( isdigit(cad[i]) )
		b++;
	}
if(b!=0)
	  return 1;
   else
	  return 0;
}

//ordenar alfabeticamente n cadenas de caractres
void orde_burbu_alf(int n, char cad[][20])
{
	int i, j;
	char aux[15];
	
	for ( i=0 ; i<n-1 ; i++)
		for ( j=i+1 ; j<n ; j++)
		if ( strcmp(cad[j],cad[i]) < 0 )
		{
		strcpy (aux, cad[i]);
		strcpy (cad[i], cad[j]);
		strcpy (cad[j], aux);
		}
}

/* poner la 1ra letra mayus y la demas minusculas 
de una cadena */
void mayus_primera_letra(int n,char cd[])
{
int i;
	cd[0] = toupper(cd[0]);
	for (i=1; i<strlen(cd); i++)
		cd[i] = tolower(cd[i]);
}

//cambiar mayus por minu y viceversa
void mayus_x_minus(char cad[][20])
{

int i,j;
 
   for(i=0;i<strlen(cad[i]);i++)
   {
          for(j=0;j<strlen(cad[i]);j++)
		  {
		  if(isupper(cad[i][j]))
		     cad[i][j]=tolower(cad[i][j]);
		  else
		    {
			if(islower(cad[i][j]))
			  cad[i][j]=toupper(cad[i][j]);
		    }
		  }
   }
}


/* genera una cadena de numeros a partir de un vector de caracteres 
 N ES EL ORDEN DEL VECTOR */
void gen_cadena_numeros(int N,char Vcad[],char Cnum[])
{
int i,e=0;
for(i=0;i<N;i++)
{
     if(isdigit(Vcad[i]))
     { 
     Cnum[e]=Vcad[i];
     e++;
     }
 }
 Cnum[e]='\0';
}


/* genera una cadena de letras a partir de un vector de caracteres
   N ES EL ORDEN DEL VECTOR  */

void gen_cadena_letras(int N,char Vcad[],char Cletra[])
{
int i,c=0,e=0;
for(i=0;i<N;i++)
{
     if(isalpha(Vcad[i]))
     {
     Cletra[e]=Vcad[i];
     e++;
     }
 }
 Cletra[e]='\0';
}

/* control de cadena alfabetica*/

void control_alfa(int *p,char cad1[])
{
int i;

for(i=0;i<strlen(cad1);i++)
{
	if(isalpha(cad1[i])==0)
	{
		(*p)=(*p)+1;
	} 
}
}

/* poner mayus las 1ras letras de apellidos*/

void mayus_primera_letra_d_ape(int n,char vdc[][20])
{
		int i,j;
	
	for(i=0;i<n;i++)
		for(j=0;j<strlen(vdc[i]);j++)
		{
		if(j==0)
			 vdc[i][0]=toupper(vdc[i][0]);
		else
           if(vdc[i][j]==' ')
		   {
			    j++;
		   		vdc[i][j]=toupper(vdc[i][j]);
		   }  
		}
}

/* fn cargar y mostrar vector de cadena  */

void cargar_vector_cadenas(int n,char cad[][20])
{
int i;
for(i=0;i<n;i++)
  { 
   printf("Ingresar una cadena: ");
   fgets(cad[i],19,stdin);
  }
}

void mostrar_vector_cadenas(int n, char cad[][20])
{
  int i;
 for (i=0;i<n;i++)
 {
	 printf("\t");
  fputs(cad[i], stdout);
 }
  }


// control de numeros q sean solo numeros 

int control_ope(char cad[])
{
int i,b=1,bs=1;

for(i=0;i<strlen(cad);i++)
    {
		 	if(!isdigit(cad[i]) && (cad[i])!=' ' && cad[i]!='+' && cad[i]!='-' )
			{
				b=0;
			}
	}
			if(!isdigit(cad[0]) && !isdigit(cad[strlen(cad)]))
			{
				b=0;}
		
			 if(cad[i]=='+' || cad[i]=='-')
			 {
				 b=0;
			 }
     for(i=0;i<strlen(cad)&& bs==1 ;i++)
	 {
	 if(cad[i]==' ')
	    {
		 bs=0;
		   if(!(cad[i+1]=='+' || cad[i+1]=='-'))
		   {
			   b=0;
		   }
				if(!cad[i+2]==' ')
				{
				b=0;
				}
	    }
	 }
	 if(bs==1)
		 b=0;
return b;
}


// genera un cadena de apllidos sin ";"

int gen_vector_cad_s(char cad[],char vcad[][20])
{
    int i,j=0,k=0;
	for(i=0;i<strlen(cad);i++)
		if(cad[i]==';')
		{
			vcad[j][k]='\0';
			j++;
			k=0;
		}
		else
		{
			vcad[j][k]=cad[i];
             k++;
	    }
vcad[j][k]='\0';
return j+1;	
}


//quitar balancos con cadena axuiliar 

void quita_blancos(char cad[],char cada[])
{
	int i,j=0;
	for(i=0;i<strlen(cad);i++)
	{
		if(cad[i]==' ')
		{
			
		}
		else
		{
			cada[j]=cad[i];
			j++;
		}
	}
cada[j]='\0';	
}


// operaciones con switch (suma,resta,divicion,producto)
// usar float

float operaciones(float x, float y, int n)
{
	float R;
	switch(n)
	{
		case 1:
		R=x+y;
		break;
		
		case 2:
		R=x-y;
		break;
		
		case 3:
		R=x*y;
		break;

		case 4:
		R=x/y;
		break;
	}
	
return R;	
	
}


// controlaq una cadena tenga numeros y un punto pára q sea float

int control_float(char cadena[])
{
	int c=0,cp=0,i;
	for(i=0;i<strlen(cadena);i++)
	
	     if(isdigit(cadena[i])==0)
			 if(cadena[i]=='.')
				 cp++;
			 else
			 {
				 c=1;
                 return c;
			 }				 
			 
if(cp==1)
	return c=0;
else
	return c=1;
}


/* poner en una cadena la 1ra letra en mayuscula despues de un espacio y
en minuscula las restantes despues del espacio*/ 

void mayus_prim_letra(char cd[])
{
	int b=0,i;
cd[0]=toupper(cd[0]);
 for(i=1;i<strlen(cd);i++)
 {
	 if(isalpha(cd[i]))
		 cd[i]=tolower(cd[i]); // pone en minuscula el resto de la cadena hasta un espacio
		 
		 if(cd[i]==' ')
		 {
			cd[i+1]=toupper(cd[i+1]); //ponr la 1ra letra despues de un espacio en mayus
		 i++;
		 }
		 
 }
}












#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct
    {
      int dia;
      int anio;
      int mes;
    }fecha;  

typedef struct
   {
    char nombres[50];
    char apellidos[50];
    fecha fecha_de_nac;
    int telefono;
   }persona;
   
void ingresar_datos(persona p[], int N);    
void leer_cadena(char P[]);
void cambio(char palabra[50]);
//void mostrar_datos(persona p[], int N);
void ordenar(persona p[], int N);
void mostrar_ordenar(persona p[], int N);
void buscar(persona p[], int N);
void mostrarRegistro(persona p);
//int busquedaLineal(persona p[], int N, char *cb);
void modificar_nombres(persona p[], int N);
void modificar_apellidos(persona p[], int N);
void modificar_dia(persona p[], int N);
void modificar_mes(persona p[], int N);
void modificar_anio(persona p[], int N);
void modificar_telefono(persona p[], int N);
void submenu(persona p[], int N);
void ingresardatos(persona p[], int N, int i);
void buscar_dia(persona p[], int N);
void buscar_mes(persona p[], int N);
void eliminarRegistro(persona p[], int *N);
void primeraMayusc(char pal[50]);
void controlAlfabetico(char palabra[50]);
int control_dia(char d[50]);
int control_mes(char m[50]);

int main(int argc, char*argv[])
{
    persona p[50];
    int N, op;
    char key;
    
    do
      {
       printf("Ingresar el orden del arreglo: ");
       scanf("%d", &N);
       fgetc(stdin);
      }
     while(N<0 || N>50);
  do
    {  
     //do
      //{
        printf("Elegir opcion \n");
        printf("(1) Ingresar datos de una persona \n");
        printf("(2) Mostrar el arreglo ordenado \n");
        printf("(3) Buscar por apellido \n");
        printf("(4) Modificar \n");
        printf("(5) Buscar por dia de nacimiento \n");
        printf("(6) Buscar por mes de nacimiento \n");
        printf("(7) Dar de Baja a una persona \n");
        printf("(8) Salir \n");
        //printf("(5) Modificar \n")
        printf("Ingresar opcion: ");
        scanf("%d", &op);
        fgetc(stdin);
      //}
     //while(op<1 || op >3);
           
     switch(op)
      {
         case 1:
              {
                ingresar_datos(p, N);
                //mostrar_datos(p, N);
                break;
              }
          case 2:
              {     
                ordenar(p, N);
                mostrar_ordenar(p, N);
                break;        
              }
          case 3: 
               {  
                buscar(p, N);
                break;
               }
           case 4:
                {
                 submenu(p, N);
                 break;
                }  
            case 5:
                 {
                  buscar_dia(p, N);
                  break;
                 }
            case 6:
                 {
                  buscar_mes(p, N);
                  break;
                 }
             case 7:
                 {
                  eliminarRegistro(p, &N);
                  printf("La Persona fue dada de BAJA");
                  break;
                 }
             case 8:
                  {
                   break;
                  }                        
            default:{
                   printf("Opcion Invalida");  
                    } 
               
      }        
       //printf("Desea realizar otra operacion? (S/N): ");
      // scanf("%c",&key);  
       //fgetc(stdin);
    }
    //while(key == 'S' || key == 's');  
    while(op !=8);      
return 0;
}

void ingresar_datos(persona p[], int N)
{
  int i, c, b;
  char d[50];
  char m[50];
  
  for(i = 0; i < N; i++)
    {
     printf("Ingresar el o los nombres \n");
     //leer_cadena(p[i].nombres);
     controlAlfabetico(p[i].nombres);
     primeraMayusc(p[i].nombres);
     
     printf("Ingresar el o los apellidos \n");
     //leer_cadena(p[i].apellidos);
     controlAlfabetico(p[i].apellidos);
     primeraMayusc(p[i].apellidos);
    do
    { 
     printf("Ingresar el dia de nacimiento: ");
     //scanf("%d", &p[i].fecha_de_nac.dia);
     fgets(d, 50, stdin);
     d[strlen(d)-1] = '\0';
     c = control_dia(d);
     //fgetc(stdin);
    }
     while(c == 0);
     p[i].fecha_de_nac.dia = atoi(d);
     
    do
    { 
     printf("Ingresar el mes de nacimiento: ");
     fgets(m, 50, stdin);
     m[strlen(m)-1] = '\0';
     b = control_mes(m);
    }
     while(b == 0);
     
     p[i].fecha_de_nac.mes = atoi(m);
     //scanf("%d", &p[i].fecha_de_nac.mes);
     //fgetc(stdin);
     
     printf("Ingresar el anio de nacimiento: ");
     scanf("%d", &p[i].fecha_de_nac.anio);
     fgetc(stdin);
     
     printf("Ingresar numero de telefono: ");
     scanf("%d", &p[i].telefono);
     fgetc(stdin);
     }
     printf("\n");
}

void leer_cadena(char P[])
{
  fgets(P, 50, stdin);
  P[strlen(P)-1]='\0';
  cambio(P);
}     

void cambio(char palabra[50])
 {
  int i;
  
  for(i = 0; i < 50; i++)
    {
      if(palabra[i]== '\n')
        {
          palabra[i]='\0';
        }
    } 
 }          

/*void mostrar_datos(persona p[], int N)
{
  int i;
  
  for(i = 0; i < N; i++)
    {
     printf("El o los nombres ingresados es: ");
     fputs(p[i].nombres, stdout);
     printf("\n");
     
     printf("El o los apellidos ingresados es: ");
     fputs(p[i].apellidos, stdout);
     printf("\n");
     
     printf("El dia de nacimiento es: %d", p[i].fecha_de_nac.dia);
     printf("\n");
     
     printf("El mes de nacimiento es: %d", p[i].fecha_de_nac.mes);   
     printf("\n");
     
     printf("El anio de nacimiento es: %d", p[i].fecha_de_nac.anio);
     printf("\n");
     
     printf("El numero de telefono es: %d", p[i].telefono);
     printf("\n");
   }
   printf("\n");
} */  

void ordenar(persona p[], int N)
{
	int i, j;
    persona temp;
	
	for (i = 0; i< N -1; i++)
		for(j = i+1; j<N; j++)
		{
			if(strcmp(p[j].apellidos, p[i].apellidos) < 0)
			{
				temp = p[j];
				p[j] = p[i];
				p[i] = temp;
			}
		}
return;
}

void mostrar_ordenar(persona p[], int N)
{
 int i;
 
 for(i = 0; i < N; i++)
  {
   printf("El o los apellidos es: ");
   fputs(p[i].apellidos, stdout);
   printf("\n");
   
   printf("El o los nombres es: ");
   fputs(p[i].nombres, stdout);
   printf("\n");
   
   printf("El dia de nacimiento es: %d", p[i].fecha_de_nac.dia);
   printf("\n");
   
   printf("El mes de nacimiento es: %d", p[i].fecha_de_nac.mes);
   printf("\n");
   
   printf("El anio de nacimiento es: %d", p[i].fecha_de_nac.anio);
   printf("\n");
   
   printf("El numero de telefono es: %d", p[i].telefono);
   printf("\n");
  }
}

void buscar(persona p[], int N)
{
	int i;
	char cb[15];
	
	printf("\nIngresar Apellido a buscar: ");
	fgets(cb, 15, stdin);
    cb[strlen(cb)-1]='\0';
	//controlAlfabetico(cb);
	//primeraMayusc(cb);
	for(i =0; i<N;i++)
	{
     if(strcmp(p[i].apellidos, cb) == 0)
      {     
       mostrarRegistro(p[i]);
      }
   }   
            
	/*pos = busquedaLineal(p, N, cb);
	if(pos < N)
         {
		   mostrarRegistro(p[pos]);
         } 
        else 
         {
		  printf("\n No se encontro el apellido");
         }*/
         
	
return;
}  
   
void mostrarRegistro(persona p)
{
	printf("\n\t Apellidos: %s", p.apellidos);
	printf("\t\t Nombres: %s", p.nombres);
	printf("\n\t Fecha de nacimiento: %d de", p.fecha_de_nac.dia);
	printf(" %d de %d", p.fecha_de_nac.mes, p.fecha_de_nac.anio); 
	printf("\n");
	printf("\n\t El numero de telefono es: %d", p.telefono);
	//printf("\n\t Domicilio: ");
	//printf("\t %s %d", p.domic.calle, p.domic.num);
	//printf(" - %s", p.domic.localidad ); 
return;
}

/*int busquedaLineal(persona p[], int N, char *cb)
{
	int i, c=0;
	for(i = 0; i<N; i++)
		if(strcmp(p[i].apellidos, cb) == 0)
		      
	            return i;	
return i;
}*/
 
void submenu(persona p[], int N)
{
  int op;

do
 {
  printf("Elegir opcion \n");
  printf("(1) Modificar Nombres \n");
  printf("(2) Modificar Apellidos \n");
  printf("(3) Modificar Dia de Nacimiento \n");
  printf("(4) Modificar Mes de Nacimiento \n");
  printf("(5) Modificar Anio de Nacimiento \n");
  printf("(6) Modificar numero de telefono \n");
  printf("(7) Salir \n");

  printf("Ingresar Opcion: "); 
  scanf("%d", &op);
  fgetc(stdin);
  
  switch(op)
    {
     case 1:
           {
            modificar_nombres(p, N);
            break;
            }   
      case 2:
            {
             modificar_apellidos(p, N);
             break;         
            }
      case 3:
            {
             modificar_dia(p, N);
             break;
            }
      case 4:
            {
             modificar_mes(p, N);
             break;
            }
      case 5:
            {
             modificar_anio(p, N);
             break;
            }
      case 6:
            {
             modificar_telefono(p, N);
             break;
            }
      case 7:
            {
             break;
            } 
      default:{
                printf("Opcion Invalida");  
              } 
      }
}         
     while(op!=7);           
 return;
}             
                                       
            
            
            
            
            
            
            
            
            
void modificar_nombres(persona p[], int N)
{
	char cad[15], op;
	int i;
	printf("\n Ingresar el nombre del registro a modificar: ");
	//controlAlfabetico(cad);
	//primeraMayusc(cad);
	//pos = busquedaLineal(n, lista, cad);
	//printf("\nIngresar Apellido a buscar: ");
	fgets(cad, 15, stdin);
    cad[strlen(cad)-1]='\0';
	//controlAlfabetico(cb);
	//primeraMayusc(cb);
	for(i =0; i<N;i++)
	{
     if(strcmp(p[i].nombres, cad) == 0)
      {   
       printf("\n Registro para modificar ");   
       mostrarRegistro(p[i]);
       printf("Desea Modificar este registro (s/n): ");
       scanf("%c", &op);
       fgetc(stdin);
       if(op == 'S' || op == 's')
        {
          ingresardatos(p, N, i);
        }
      }
   
	/*if (pos < n)
	{
		printf("\n Registro para modificar ");
		mostrarRegistro(p[i]);
		p[i] = leerRegistro();
	}*/
	else
        {
		 printf("\n NO se encuentra el nombre ingresado");
        }
    }
return;
}         
      
void modificar_apellidos(persona p[], int N)
{
	char cad[15], op;
	int i;
	printf("\n Ingresar el apellido del registro a modificar: ");
    fgets(cad, 15, stdin);
    cad[strlen(cad)-1]='\0';

	for(i =0; i<N;i++)
	{
     if(strcmp(p[i].apellidos, cad) == 0)
      {   
       printf("\n Registro para modificar ");   
       mostrarRegistro(p[i]);
       printf("Desea Modificar este registro (s/n): ");
       scanf("%c", &op);
       fgetc(stdin);
       if(op == 'S' || op == 's')
        {
         ingresardatos(p, N, i);
        }
      }
   
	else
        {
		 printf("\n NO se encuentra el apellido ingresado");
        }
    }
return;
}         

void modificar_dia(persona p[], int N)
{
	char op;
	int i, b;
	printf("\n Ingresar el dia del registro a modificar: ");
	scanf("%d", &b);
	fgetc(stdin);


	for(i =0; i<N;i++)
	{
     if(p[i].fecha_de_nac.dia == b)
      {   
       printf("\n Registro para modificar ");   
       mostrarRegistro(p[i]);
       printf("Desea Modificar este registro (s/n): ");
       scanf("%c", &op);
       fgetc(stdin);
       if(op == 'S' || op == 's')
        {
          ingresardatos(p, N, i);
        }
      }
   
	else
        {
		 printf("\n NO se encuentra el dia ingresado");
        }
    }
return;
}         

void modificar_mes(persona p[], int N)
{
	char op;
	int i, b;
	printf("\n Ingresar el mes del registro a modificar: ");
	scanf("%d", &b);
	fgetc(stdin);


	for(i =0; i<N;i++)
	{
     if(p[i].fecha_de_nac.mes == b)
      {   
       printf("\n Registro para modificar ");   
       mostrarRegistro(p[i]);
       printf("Desea Modificar este registro (s/n): ");
       scanf("%c", &op);
       fgetc(stdin);
       if(op == 'S' || op == 's')
        {
         ingresardatos(p, N, i);
        }
      }
   
	else
        {
		 printf("\n NO se encuentra el mes ingresado");
        }
    }
return;
}         

void modificar_anio(persona p[], int N)
{
	char op;
	int i, b;
	printf("\n Ingresar el anio del registro a modificar: ");
	scanf("%d", &b);
	fgetc(stdin);


	for(i =0; i<N;i++)
	{
     if(p[i].fecha_de_nac.anio == b)
      {   
       printf("\n Registro para modificar ");   
       mostrarRegistro(p[i]);
       printf("Desea Modificar este registro (s/n): ");
       scanf("%c", &op);
       fgetc(stdin);
       if(op == 'S' || op == 's')
        {
         ingresardatos(p, N, i);
        }
      }
   
	else
        {
		 printf("\n NO se encuentra el anio ingresado");
        }
    }
return;
}   

void modificar_telefono(persona p[], int N)
{
	char op;
	int i, b;
	printf("\n Ingresar el anio del registro a modificar: ");
	scanf("%d", &b);
	fgetc(stdin);


	for(i =0; i<N;i++)
	{
     if(p[i].telefono == b)
      {   
       printf("\n Registro para modificar ");   
       mostrarRegistro(p[i]);
       printf("Desea Modificar este registro (s/n): ");
       scanf("%c", &op);
       fgetc(stdin);
       if(op == 'S' || op == 's')
        {
         ingresardatos(p, N, i);
        }
      }
   
	else
        {
		 printf("\n NO se encuentra el telefono ingresado");
        }
    }
return;
}   


void ingresardatos(persona p[], int N, int i)
{
 int aux = 0;
  
  for(;i < N && aux == 0; )
    {  
     printf("Ingresar el o los nombres: ");
     leer_cadena(p[i].nombres);
     
     printf("Ingresar el o los apellidos: ");
     leer_cadena(p[i].apellidos);
     
     printf("Ingresar el dia de nacimiento: ");
     scanf("%d", &p[i].fecha_de_nac.dia);
     fgetc(stdin);
     
     printf("Ingresar el mes de nacimiento: ");
     scanf("%d", &p[i].fecha_de_nac.mes);
     fgetc(stdin);
     
     printf("Ingresar el anio de nacimiento: ");
     scanf("%d", &p[i].fecha_de_nac.anio);
     fgetc(stdin);
     
     printf("Ingresar numero de telefono: ");
     scanf("%d", &p[i].telefono);
     fgetc(stdin);
      i = i + 1;
     aux = 1;
     }      
     printf("\n");
}

void buscar_dia(persona p[], int N)
{
	int i;
	int x, b=0;
	
	
	printf("\n Ingresar dia a buscar: ");
	scanf("%d", &x);
	fgetc(stdin);
	//controlAlfabetico(cb);
	//primeraMayusc(cb);
	for(i =0; i<N;i++)
	{
     if(p[i].fecha_de_nac.dia == x)
      {     
       mostrarRegistro(p[i]);
       b = 1;
      }
     }
     if(b == 0)
      {
       printf("NO se encontró el dia buscado: ");
      }  
        
  
         
	
return;
}  

void buscar_mes(persona p[], int N)
{
	int i;
	int x, b=0;
	
	
	printf("\n Ingresar mes a buscar: ");
	scanf("%d", &x);
	fgetc(stdin);
	//controlAlfabetico(cb);
	//primeraMayusc(cb);
	for(i =0; i<N;i++)
	{
     if(p[i].fecha_de_nac.mes == x)
      {     
       mostrarRegistro(p[i]);
       b = 1;
      }
     }
     if(b == 0)
      {
       printf("NO se encontró el mes buscado: ");
      }  
        
  
         
	
return;
}  

void eliminarRegistro(persona p[], int *N)
{
	int j, b=0;
	char cad[15];
	int i;
	
	printf("\n Ingresar apellido de registro a eliminar: ");
	fgets(cad, 15, stdin);
     cad[strlen(cad)-1]='\0';
	//controlAlfabetico(cad);
	//primeraMayusc(cad);
	for(i = 0; i < *N; i++)
	{
	if(strcmp(p[i].apellidos, cad) == 0)
	    
         {
          b = 1;    	
		for (j = i  ; j < *N-1 ; j++)
			p[j] = p[j+1];
			
			
	    }
	   	
	}
	if(b == 0)
	     {
		printf("\n NO se encuentra el apellido ingresado");
          }
         else
          {
           *N = *N - 1; 
          }  
          
return;	

}  

      
void controlAlfabetico(char palabra[50])
{
	int b, i;
	
	do
	{
		b = 0;
		printf("(solo caracteres alfabeticos): ");
		fgets(palabra, 50, stdin);
		palabra[strlen(palabra)-1] = '\0';
		for( i=0; i < strlen(palabra); i++)
			if (!isalpha(palabra[i]))
			{
				if (palabra[i] != ' ')
				b = 1;
			}
		
	}while(b == 1); 
	
return;
}


void primeraMayusc(char pal[50])
{
	int i;
	
	pal[0] = toupper(pal[0]);
	for (i=1; i<strlen(pal); i++)
		pal[i] = tolower(pal[i]);
return;
}
            
int control_dia(char d[50])
{
  int i, b = 1;
  int x; 
 
  for(i = 0; i < strlen(d); i++)
    {
      if(!isdigit(d[i]))
        {
          b = 0;
        }
    }
    
  if(b == 1)
  {  
   x = atoi(d);
   
  if(x < 0 || x > 31) 
    {
     b = 0;
    }
  }  
    
return b;    
    
}     

int control_mes(char m[50])
{
  int i, b = 1;
  int x; 
 
  for(i = 0; i < strlen(m); i++)
    {
      if(!isdigit(m[i]))
        {
          b = 0;
        }
    }
    
  if(b == 1)
  {  
   x = atoi(m);
   
  if(x < 0 || x > 12) 
    {
     b = 0;
    }
  }  
    
return b;    
    
}           
                             

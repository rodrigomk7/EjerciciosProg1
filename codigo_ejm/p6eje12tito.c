#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

typedef struct{
        char apellido[30];
        char nombre[30];
        int dia;
        int mes;
        int anio;
        }alumno;

int existencia_archivo(char cad[100]);
int menu();
alumno ingresar_alumno();
void guardar_alumno(alumno a, char cad[100]);
void primeraAMayusculas(char *cadena);
void mostrar_archivo(char cad[100]);
alumno crear(char cad[100]);
void mostrar(alumno a);
void buscar_apellido(char cad[100]);
void buscar_fecha(char cad[100]);

int main(int argc, char *argv[])
{
        char cad[]="prob12.tito.txt";
        //FILE *p;
        alumno a;
        int opcion;
        
        if(existencia_archivo(cad)==1)
              {printf("ERROR! nNO SE PUDO CREAR");
                         return 0;              }
        else
           {
                        //p=fopen("r+"):
                        do{
                                      opcion=menu();
                                  
                                                  switch(opcion)
                                                  {
                                                                case 1:a=ingresar_alumno();
                                                                guardar_alumno(a, cad);
                                                                break;
                                                                case 2:mostrar_archivo(cad);
                                                                     break;
                                                                case 3:buscar_apellido(cad);
                                                                          break;
                                                                case 4:buscar_fecha(cad);
                                                                      break;                   
                                                                                    }        
                         
                        }while (opcion > 0 && opcion < 5);
}
        
return 0;        
}

int existencia_archivo(char cad[100])
{
        FILE *p;
        
        if((p=fopen(cad,"r+"))==NULL)
            {printf("\n El archivo no existe se creara\n");
                        if((p=fopen(cad,"w+"))==NULL)
                             return 1;
                        else
                             {fclose(p);
                                                return 0;}
                        }
        else
           {fclose(p);
           return 0;
                        }                
                        
}

int menu()
{
        int op=-1;
        do{
                printf("\n1-Agregar persona\n");
                printf("2-Mostrar contenido\n");
                printf("3-Buscar por apellido\n");
                printf("4-Buscar por fechas\n");
                printf("0-Salir\n");
                printf("\n Ingrese su opcion:  ");
                scanf("%d",&op);
                }while(op < 0 || op > 4);
return op;
}

alumno ingresar_alumno()
{
        alumno a;
        
        fgetc(stdin);
        printf("ingrese apellido: ");
        fgets(a.apellido,29,stdin);
        a.apellido[strlen(a.apellido)-1]='\0';
         primeraAMayusculas(a.apellido);
        
        printf("ingrese nombre: ");
        fgets(a.nombre,29,stdin);
        a.nombre[strlen(a.nombre)-1]='\0';
         primeraAMayusculas(a.nombre);
         
        printf("ingrese dia de nacimeinto: ");
        scanf("%d",&a.dia);
        printf("ingrese mes de nacimiento: ");
        scanf("%d",&a.mes);
        printf("ingrese anio de nacimiento: ");
        scanf("%d",&a.anio);
          
          fgetc(stdin);
return a;        
}

void primeraAMayusculas(char *cadena)
{
        // otra manera de hacer may scula el primer caracter de una cadena
        *cadena = toupper(*cadena);
}

void guardar_alumno(alumno a, char cad[100])
{
        FILE *p;
        
        p=fopen(cad,"r+");
        fseek(p,0,SEEK_END);
        fprintf(p,"%s;%s;%d;%d;%d;\n",a.apellido,a.nombre,a.dia,a.mes,a.anio);
fclose(p);
}

void mostrar_archivo(char cad[100])
{
        FILE *p;
		alumno a[30];
        int i=0, n=0;
        char aux[100];  
		p=fopen(cad,"r+");
                

                        
                        while(!feof(p)){
                                         fgets(aux,99,p);
                                                  if (feof(p))
                                              break;
                                           a[i++]=crear(aux);
                                                n=i;
                                
                        }
                                for(i=0;i<n;i++)
                                {printf("persona N  %d",(i+1));
                                        mostrar(a[i]);
                                        printf("\n\n");
                                        }
        
}

alumno crear(char cad[100])
{
        
        char          dia[3], mes[3], anio[5];
        alumno         alum;
        char         separador = ';';
        int         i, j = 0 , inicio = 0;
        int         posiciones[5];

        for (i = inicio ; i <strlen(cad) ; i++)
        {
                if (cad[i] == separador)
                {
                        posiciones[j]= i;
                        j++;
                }
        }
                
        j = 0;
        for( i = 0 ;  i < posiciones[0] ; i++)
        {
                alum.apellido[j] = cad[i];
                j++;
        }
        alum.apellido[j]='\0';
        
        j = 0;
        for( i = posiciones[0]+1 ; i < posiciones[1] ; i++)
        {
                alum.nombre[j] = cad[i];
                j++;
        }
        alum.nombre[j] = '\0';
        
        j = 0;
        for( i = posiciones[1]+1 ; i < posiciones[2] ; i++)
        {
                dia[j] = cad[i];
                j++;
        }
        dia[j] = '\0';
        
        alum.dia=atoi(dia);
        
        j = 0;
        
        for( i = posiciones[2]+1 ; i < posiciones[3] ; i++)
        {
                mes[j] = cad[i];
                j++;
        }
        mes[j] = '\0';
        
        alum.mes = atoi(mes);
        j=0;
        for( i = posiciones[3]+1 ; i < (strlen(cad)-1) ; i++)
        {
                anio[j] = cad[i];
                j++;
        }
        anio[j] = '\0';
        
        alum.anio = atoi(anio);

return alum;        
}

void mostrar(alumno a)
{
        printf("\n \nApellido: %s\n", a.apellido);    
        printf("Nombre: %s\n", a.nombre);    
        printf("dia: %d\n", a.dia);    
        printf("mes: %d\n", a.mes);
    printf("anio: %d",a.anio);
}

void buscar_apellido(char cad[100])
{
                FILE *p;
                int c=0;
                char ape[30];
                char aux[100];
                int i=0, n=0;
                alumno a[30];
                fgetc(stdin);
                //printf("hola");
                printf("ingrese apellido a buscar: ");
                fgets(ape,29,stdin);
                ape[strlen(ape)-1]='\0';
                p=fopen(cad,"r+");
                        
                        while(!feof(p)){
                                         fgets(aux,99,p);
                                                  if (feof(p))
                                              break;
                                           a[i++]=crear(aux);
                                                n=i;
                                
                        }
                                for(i=0;i<n;i++)
                                {if(strcmp(a[i].apellido,ape)==0)
                                        {printf("persona N  %d",++c);
                                        mostrar(a[i]);
                                        printf("\n\n");}
                                        }
                                        if(c==0)
                                           printf("\n\nNO Se encontraron pesonas con ese apellido\n\n");
        
}

void buscar_fecha(char cad[100])
{
                FILE *p; 
				alumno a[30];
                int c=0, d1, d2, m1, m2, a1, a2; //fechas
                int i=0, n=0;
                char aux[100];
               
                
                printf("ingrese primera fecha: ");
                printf("ingrese dia: ");
                scanf("%d",&d1);
                printf("ingrese mes: ");
                scanf("%d",&m1);
                printf("ingrese anio: ");
                scanf("%d",&a1);
                printf("\ningrese segunda fecha: ");
                printf("ingrese dia: ");
                scanf("%d",&d2);
                printf("ingrese mes: ");
                scanf("%d",&m2);
                printf("ingrese anio: ");
                scanf("%d",&a2);
                p=fopen(cad,"r+");
                        
                  while(!feof(p)){
                                     fgets(aux,99,p);
                                                  if (feof(p))
                                                    break;
                                           a[i++]=crear(aux);
                                                n=i;
                                
									}
                                for(i=0;i<n;i++)
                                {if( a[i].anio >a1 && a[i].anio<a2)
                                     {  if(a[i].mes>m1 && a[i].mes<m2)
                                          { if(a[i].dia>d1 && a[i].dia<d2)
                                                      {printf("persona N  %d",++c);
                                                           mostrar(a[i]);
                                                        printf("\n\n");}
                                                                }
                                        }
                                }
                                        if(c==0)
                                           printf("\n\nNO Se encontraron pesonas en esa fecha\n\n");
        
}

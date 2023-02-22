void ingresar_fecha(fecha F1, fecha F2, persona p, char nombre[])
{

    printf("Ingresar el Dia: ");
    leer_cadena(F1.dia);
    //fputs(p.fecha_de_nac.dia, f);
    //fputs(";", f);
    
    printf("Ingresar el Mes de nacimiento: ");
    leer_cadena(F1.mes);
    //fputs(p.fecha_de_nac.mes, f);
    //fputs(";", f);
    
    printf("Ingresar el Anio de nacimiento: ");
    leer_cadena(F1.anio);
    //fputs(p.fecha_de_nac.anio, f);
    //fputs("\n", f);
    
    printf("Ingresar el Dia de nacimiento: ");
    leer_cadena(F2.dia);
    //fputs(p.fecha_de_nac.dia, f);
    //fputs(";", f);
    
    printf("Ingresar el Mes de nacimiento: ");
    leer_cadena(F2.mes);
    //fputs(p.fecha_de_nac.mes, f);
    //fputs(";", f);
    
    printf("Ingresar el Anio de nacimiento: ");
    leer_cadena(F2.anio);
    //fputs(p.fecha_de_nac.anio, f);
    //fputs("\n", f); 
    comparar(nombre, p, F1, F2);
}        
 
void comparar(char nombre[], persona p, fecha F1,fecha F2)
{ 
 FILE *f;
 //persona p[50];
 int cant, b=0;
 char cad[100];
 //char nombre[]="prob9.txt";
 
 f = fopen(nombre, "r+");
if(f==NULL)
 {
   printf("NO se ha podido abrir el archivo");
   exit(1);
 }
 
 fseek(f, 0, 2);
 cant = ftell(f);
 rewind(f); 
 
        
 
 while(!feof(f)&&ftell(f)<cant)
 { fgets(cad,50,f);
   if(feof(f)) break;
   p = obtenerPersona(cad);   //comparar_fecha(F1, F2);
   
   if(comparar_fecha(p.fecha_de_nac, F1)>=0&& comparar_fecha(F2, p.fecha_de_nac)>=0)
    { printf("\n \nApellido: %s\n", p.apellidos);    
	  printf("Nombre: %s\n", p.nombres);    
	  printf("Dia de nacimiento: %s\n", p.fecha_de_nac.dia);    
	  printf("Mes de Nacimiento: %s\n", p.fecha_de_nac.mes);
	  printf("Anio de Nacimiento: %s\n", p.fecha_de_nac.anio);
     } }  
  fclose(f);
}  

int comparar_fecha(fecha F1, fecha F2)
{ int R;
  int d1=atoi(F1.dia),m1=atoi(F1.mes),a1=atoi(F1.anio),d2=atoi(F2.dia),m2=atoi(F2.mes),a2=atoi(F2.anio);
  if(a1>a2)
    {
      R=1;
    }
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

//Funciones para modificar el archivo

void submenu(char nombre[], Persona P[], int i, int j)
{
  int op;
  
  do
    { 
     printf("(1). Modificar Nombres\n");
     printf("(2). Modificar Apellidos\n");
     printf("(3). Modificar Dia de Nacimiento\n");
     printf("(4). Modificar Mes de Nacimiento\n");
     printf("(5). Modificar Anio de Nacimiento\n");
     printf("(6). Salir\n");
     
     printf("Ingresar Opcion: ");
     scanf("%d", &op);
     fgetc(stdin);
     
     switch(op)
       {
        case 1:
           ingresar_nombre(P, i, j);
           break;
        case 2:
           ingresar_apellido(P, i, j);
           break;
        case 3:
           ingresar_dia(P, i, j);
           break;
        case 4:
           ingresar_mes(P, i, j);
           break;
        case 5:
           ingresar_anio(P, i, j);
           break;
        case 6: 
            break;
   }
  } 
   while(op!=6);
return;
}    

void obtener(char nombre[])
{
  FILE *f;
 int cant, b=0, j=0;
 char cad[100], cad1[100];
 Persona P[50];
 
 f = fopen(nombre, "r+");
if(f==NULL)
 {
   printf("NO se ha podido abrir el archivo");
   exit(1);
 }
 
 fseek(f, 0, 2);
 cant = ftell(f);
 rewind(f); 
 while(!feof(f)&&ftell(f)<cant)
  {           
   fgets(cad,100,f);
   if(feof(f)) break;
   P[j] = obtener_Persona(cad);
   j = j + 1;
  }
  fclose(f); 
  modificar_nombre(nombre, P, j);
}    
  
void modificar_nombre(char nombre[], Persona P[], int j)
{
    char cad[15], cad1[50], op;
	int i, b=0;
	printf("\n Ingresar el apellido del registro a buscar: ");
    fgets(cad, 15, stdin);
    cad[strlen(cad)-1]='\0';
    
    printf("Ingresar el Nombre del registro a buscar: ");
    fgets(cad1, 50, stdin);
    cad1[strlen(cad1)-1]='\0';

	for(i =0; i<j;i++)
	{
     if(strcmp(P[i].apellidos, cad) == 0 && strcmp(P[i].nombres, cad1)==0)
      {   
       printf("\n Registro para modificar ");   
       mostrarRegistro(P[i]);
       printf("Desea Modificar este registro (s/n): ");
       scanf("%c",&op);
       fgetc(stdin);
       if(op == 'S' || op == 's')
        {
         submenu(nombre,P,i,j);    
         //ingresardatos(P, j, i);
         b = 1;
        }
      } 
    }     
     if(b == 1)
       {
        registro(nombre, P, j);
       }
    else  
       {
         printf("No coinciden los datos ingresados");
       }  
    
     
    
 return;   
}        
   
                                                 

void mostrarRegistro(Persona P)
{
	printf("\n\t Apellidos: %s", P.apellidos);
	printf("\t\t Nombres: %s", P.nombres);
	printf("\n\t Fecha de nacimiento: %s de", P.Fecha_de_nac.dia);
	printf(" %s de %s", P.Fecha_de_nac.mes, P.Fecha_de_nac.anio); 
	printf("\n");
return;
}       
        
void ingresar_nombre(Persona P[], int i, int j)
{
 int aux = 0;


  //for(;i < j && aux == 0; )
    //{  
     printf("Ingresar el o los nombres a modificar: ");
     leer_cadena(P[i].nombres);
     
     /*printf("Ingresar el o los apellidos: ");
     leer_cadena(P[i].apellidos);
     
     printf("Ingresar el dia de nacimiento: ");
     leer_cadena(P[i].Fecha_de_nac.dia);
     
     printf("Ingresar el mes de nacimiento: ");
     leer_cadena(P[i].Fecha_de_nac.mes);
     
     printf("Ingresar el anio de nacimiento: ");
     leer_cadena(P[i].Fecha_de_nac.anio);
      i = i + 1;
     aux = 1;*/
     //}      
     printf("\n");
}         

void ingresar_apellido(Persona P[], int i, int j)
{
 //int aux = 0;


  //for(;i < j && aux == 0; )
    //{  
     printf("Ingresar el o los apellidos a modificar: ");
     leer_cadena(P[i].apellidos);
    printf("\n"); 
}                         

void ingresar_dia(Persona P[], int i, int j)
{
 //int aux = 0;


  //for(;i < j && aux == 0; )
    //{  
     printf("Ingresar el dia a modificar: ");
     leer_cadena(P[i].Fecha_de_nac.dia);
    printf("\n"); 
}                         

void ingresar_mes(Persona P[], int i, int j)
{
 //int aux = 0;


  //for(;i < j && aux == 0; )
    //{  
     printf("Ingresar el mes a modificar: ");
     leer_cadena(P[i].Fecha_de_nac.mes);
    printf("\n"); 
}                         

void ingresar_anio(Persona P[], int i, int j)
{
 //int aux = 0;


  //for(;i < j && aux == 0; )
    //{  
     printf("Ingresar el anio a modificar: ");
     leer_cadena(P[i].Fecha_de_nac.anio);
    printf("\n"); 
}
                         
void registro(char nombre[], Persona P[], int j)
{
 FILE *f;
 int i;
 
 f = fopen(nombre, "w+");
 
 if(f == NULL)
  {
   printf("NO pudo crearse el archivo");
   exit(1);
  }
  
for(i = 0; i<j; i++)
 {
        
    fputs(P[i].apellidos, f);
    fputs(";", f);
    
       
    fputs(P[i].nombres, f);
    fputs(";", f);
    
    fputs(P[i].Fecha_de_nac.dia, f);
    fputs(";", f);
    
    
    fputs(P[i].Fecha_de_nac.mes, f);
    fputs(";", f);
    
    
    fputs(P[i].Fecha_de_nac.anio, f);
    fputs("\n", f);
    
   printf("\n");    
 }
 
 fclose(f);
 
}         
 
 
Persona obtener_Persona(char cad[100])
{
	Persona P;
	char 	separador = ';';
	int 	i, j = 0 , aux=-1,inicio = 0;
	int 	posiciones[5];

	for (i = 0 ; i <strlen(cad) ; i++)
	{
		if (cad[i] == ';' || cad[i] == '\n')
		{
			posiciones[j]= i;
            j++;
		}
	}
		
	j = 0;
	for( i = 0 ;  i < posiciones[0] ; i++)
	{
		P.apellidos[j] = cad[i];
		j++;
	}
	P.apellidos[j]='\0';
	
	j = 0;
	for( i = posiciones[0]+1 ; i < posiciones[1] ; i++)
	{
		P.nombres[j] = cad[i];
		j++;
	}
	P.nombres[j] = '\0';
	
	j = 0;
	for( i = posiciones[1]+1 ; i < posiciones[2] ; i++)
	{
		P.Fecha_de_nac.dia[j] = cad[i];
		j++;
	}
	P.Fecha_de_nac.dia[j] = '\0';
	j = 0;
	for( i = posiciones[2]+1 ; i < posiciones[3] ; i++)
	{
		P.Fecha_de_nac.mes[j] = cad[i];
		j++;
	}
	P.Fecha_de_nac.mes[j] = '\0';
	j = 0;
	for( i = posiciones[3]+1 ; i < posiciones[4] ; i++)
	{
		P.Fecha_de_nac.anio[j] = cad[i];
		j++;
	}
	P.Fecha_de_nac.anio[j] = '\0';

return P;
}

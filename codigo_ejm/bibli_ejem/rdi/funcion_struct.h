#include <ctype.h>

   /*Funciones estructuras*/

//1)Cargar struct estudiante
//2)Mostrar struct estudiante

//3)Cargar struct domicilio
//4)Mostrar struct domicilio

//5)Cargar struct fecha
//6)Mostrar struct fecha

//7) cargar persona 1
//8)Mostrar struct persona1

//9) cargar persona 2
//10)muestra persona 2

//14)Cambia a mayuscula las iniciales
void mayuscula(char cad[])
{
	int i;
	cad[0]=toupper(cad[0]);
	for(i=0;i<strlen(cad);i++)
	{
		
     	if(cad[i]==' ')
		{
	     cad[i+1]=toupper(cad[i+1]);
		}
    }
	
}


//*****************************************
//1)Cargar struct estudiante
estudiante cargar_estudiante()
{
 estudiante e;
printf("\nApellido:");
fgets(e.ape,49,stdin);
e.ape[strlen(e.ape)-1]='\0';

printf("Nombre:");
fgets(e.nom,49,stdin);
e.nom[strlen(e.nom)-1]='\0';

printf("Carrera:");
fgets(e.car,49,stdin);
e.car[strlen(e.car)-1]='\0';

	
printf("CX:");
scanf("%d",&e.cx);
getchar();

return e;
}

//2)Mostrar struct estudiante
void mostrar_estudiante(estudiante e)
{
	printf("\nNombre:%s",e.nom);
	printf("\nApellido:%s",e.ape);
    printf("\nCX:%d",e.cx);	
}
//***************************************************

//3)Cargar struct domicilio
domicilio cargar_domicilio()
{
	domicilio dm;
	
printf("Pais:");
fgets(dm.pais,29,stdin);
dm.pais[strlen(dm.pais)-1]='\0';

printf("Provincia:");
fgets(dm.provincia,29,stdin);
dm.provincia[strlen(dm.provincia)-1]='\0';

printf("Calle:");
fgets(dm.calle,29,stdin);
dm.calle[strlen(dm.calle)-1]='\0';
printf("Numero:");
scanf("%d",&dm.numero);
	
return dm;	
}


//4)Mostrar struct domicilio
void mostrar_domicilio(domicilio dom)
{
	
printf("\n\t\tPais: %s",dom.pais);
printf("\n\t\tProvincia: %s",dom.provincia);
printf("\n\t\tCalle: %s",dom.calle);
printf("\n\t\tNumero: %d",dom.numero);	
}
//****************************************************

//5)Cargar struct fecha
fecha cargar_fecha()
{
	fecha f;
do
{
printf("Dia:");
fgets(f.dia,29,stdin);
f.dia[strlen(f.dia)-1]='\0';
}while(es_numero(f.dia)==0||atoi(f.dia)<=0||atoi(f.dia)>31);

do
{
printf("Mes:"); 
fgets(f.mes,29,stdin);
f.mes[strlen(f.mes)-1]='\0';
}while(es_numero(f.mes)==0||atoi(f.mes)<=0||atoi(f.mes)>12);

do
{
printf("Anio:");
fgets(f.anio,29,stdin);
f.anio[strlen(f.anio)-1]='\0';
}while(es_numero(f.anio)==0||atoi(f.anio)<=1930||atoi(f.anio)>2017);	
	
return f;	
}

//6)Mostrar struct fecha
void mostrar_fecha(fecha fdn)
{
printf(" %s/%s/%s ",fdn.dia,fdn.mes,fdn.anio);
}

//****************************************************

//7) cargar persona 1
persona1 cargar_persona1()
{

persona1 e;

do
{
printf("\nApellido:");
fgets(e.ape,49,stdin);
e.ape[strlen(e.ape)-1]='\0';
}while(es_nombre(e.ape)==0);
mayuscula(e.ape);

do
{
printf("Nombre:");
fgets(e.nom,49,stdin);
e.nom[strlen(e.nom)-1]='\0';
}while(es_nombre(e.nom)==0);
mayuscula(e.nom);

do
{
printf("Telefono:");
fgets(e.tel,49,stdin);
e.tel[strlen(e.tel)-1]='\0';
}while(es_numero(e.tel)==0);
	
printf("\nFecha de nacimiento:\n");
e.fdn=cargar_fecha();	

return e;
}

//8)Mostrar struct persona1

void mostrar_persona1(persona1 e)
{
	
	printf("\nApellido:%s",e.ape);
	printf("\nNombre:%s",e.nom);
    printf("\nTelefono:%d",e.tel);	
    printf("\nFecha de nacimiento:");
	mostrar_fecha(e.fdn);
	
}
//******************************************

//9)cargar persona 2
persona2 cargar_persona2()
{

persona2 e;

do
{
printf("\nApellido:");
fgets(e.apellido,49,stdin);
e.apellido[strlen(e.apellido)-1]='\0';
}while(es_nombre(e.apellido)==0);
mayuscula(e.apellido);

do
{
printf("Nombre:");
fgets(e.nombre,49,stdin);
e.nombre[strlen(e.nombre)-1]='\0';
}while(es_nombre(e.nombre)==0);
mayuscula(e.nombre);
	
printf("\nFecha de nacimiento:\n");
e.fdn=cargar_fecha();	

return e;
}


//10)Mostrar struct persona2
void mostrar_persona2(persona2 e)
{
	
	printf("\nApellido:%s",e.apellido);
	printf("\nNombre:%s",e.nombre);
    printf("\nFecha de nacimiento:");
	mostrar_fecha(e.fdn);
	
}
//********************************************


//11)Control nombre compuesto , solo letra y espacios
int es_nombre(char cadena[])
{
int i,r=1;

for(i=0;i<strlen(cadena);i++)
{
	if(isalpha(cadena[i])==0)
	{
		if(cadena[i]!=' ')
		   return r=0;
	}
}
return r;
}

//******************************************

//12)Control palabra
int es_palabra(char cadena[])
{
int i,r=1;

for(i=0;i<strlen(cadena);i++)
{
	if(isalpha(cadena[i])==0)
	{
		r=0;
		return r;
	}
}
return r;
}


//***************************************************

//13)Muetra si una cadena es un numero
int es_numero(char cad[])
{
	int i,ban;
	
for(i=0;i<strlen(cad);i++)
{
	if(isdigit(cad[i])==0)
		return ban=0;
}
return ban=1;
	
}
//****************************************************



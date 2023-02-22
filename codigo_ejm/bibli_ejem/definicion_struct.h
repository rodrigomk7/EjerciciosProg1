
//Definiciones de estructuras basicas

//1)domicilio
typedef struct{
	char  pais[30];
char provincia[30];
char ciudad[30];
char calle[30];
int numero;	
 }domicilio;
 
 //2)Estudiante
 typedef  struct{
 char nom[50];
 char ape[50];
 char car[50];
 int cx;
}estudiante;

//3)fecha
typedef struct{
char dia[30];
char mes[30] ;
char anio[30];
}fecha;


//4)automotor
typedef struct{
   char marca[50];
   char precio[50];	
	fecha fdc;
}automotor;


//5)datos persona 1
typedef struct {
	char nom[50];
 char ape[50];
 char tel[50];
 fecha fdn;
}persona1;

//6)datos persona 2
typedef struct{
	char nombre[50];
	char apellido[50];
    fecha fdn;
}persona2;
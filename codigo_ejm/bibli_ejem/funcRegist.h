/*
	Funciones definidas por el ususario para el tratamiento de reistros
	
	
	1.- primeraMayusc(char pal[])
	2.- segundoNombMay(char s[])
	3.- int entero ()
	4.- float leeFloat()
	5.- void controlAlfabetico(char pal[])
	6.- struct fecha leerFecha(); 		
	7.- domicilio leerDomicilio(); 		
	8.- datosPers leerRegistro();   	"		
	9.- void mostrarRegistro( datosPers ); 	"	
	10.- void mostrar(int cant, datosPers []);  "	
	11.- void ordenar( int cant, datosPers []); "	
	12.- void buscar(int cant, datosPers []);   "	
	13.- int busquedaLineal(int cant, datosPers [], char *cb); 
	14.- void modificar(int n, datosPers []); "		
	15.- int eliminarRegistro(int n, datosPers []);	
	16.- void menu(datosPers[]); 		"	
	
*/


// 1.- Primera letra mayúscula **************************************************
void primeraMayusc(char pal[])
{
	int i;
	
	pal[0] = toupper(pal[0]);
	for (i=1; i<strlen(pal); i++)
		pal[i] = tolower(pal[i]);
return;
}
// FIN primeraMayusc*************************************************************

// 2.- Segundo nombre mayúascula********************************************
void segundoNombMay(char s[])
{
	int i;
	
	for (i=1; i<strlen(s); i++)
		if (s[i] == ' ')
			s[i+1] = toupper(s[i+1]);
	
return;	
}
// FIN segundoNombMay*************************************************************

// 3.- Leer entero***********************************************************************
int entero()
{
	char cad[15];
	int b;
	int i;
	
	do
	{
		b=0;
		printf("(entero): ");
		fgets(cad,12,stdin);
		cad[strlen(cad)-1] = '\0';
		for(i=0;i<strlen(cad);i=i+1)
		{
			//printf("%s", cad);//***********************
			if(!isdigit(cad[i])) b=1;
			if( (i==0) && (cad[0] == '-')) b=0;
		}
	}while((b==1));
	
return (atoi(cad));
}
// FIN entero**************************************************************

// 3.- Leer float****************************************************************
float leeFloat()
{
	char cad[15];
	int b, i, c;
	
	do
	{
		b=0;
		c=0;
		printf("(flotante): ");
		scanf("%s",cad);
		for(i=0;i<strlen(cad);i++)
		{
			if(!isdigit(cad[i]))
			{
				if(cad[i]=='.') c++;
				else b=1;
			}
			if ((i==0) && ( cad[i] == '-')) b=0;
		}
	}while((b==1)||(c>1));

return (atof(cad));
}
// FIN leeFloat***************************************************************

// 4.- Control alfabético *****************************************************
void controlAlfabetico(char palabra[])
{
	int b, i;
	
	do
	{
		b = 0;
		printf("(solo caracteres alfabeticos): ");
		fgets(palabra, 14, stdin);
		palabra[strlen(palabra)-1] = '\0';
		for( i=0; i < strlen(palabra); i++)
			if (!isalpha(palabra[i]))
			{
				if (palabra[i] != ' ')
				b = 1;
			}
		
	}while(b == 1); 
	
	primeraMayusc(palabra);
return;
}
// FIN controlAlfabetico******************************************************

// 6.- Leer Fecha *************************************************************
fecha leerFecha()
{
	fecha f;
	
	printf("\n Ingresar Fecha de Nacimiento: ");
	printf("\n ----------------------------- ");
		
	do{
		printf("\n\t Dia ");
		f.dia = entero();
	}while (f.dia < 1 || f.dia > 31);
		
	printf("\n\t Mes ");
	controlAlfabetico(f.mes);
		
	do{
		printf("\n\t Anio ");
		f.anio = entero();
	}while (f.anio < 1912 || f.anio > 2012);
	
return f;		
}
// FIN leerFecha ************************************************************

// 7.- Leer domiicilio ********************************************************
domicilio leerDomicilio()
{
	domicilio d;
	
	printf("\n Ingresar Domicilio: ");
	printf("\n ------------------- ");

	printf("\n\t Calle: ");
	controlAlfabetico(d.calle);
	segundoNombMay(d.calle);
			
	do{
		printf("\n\t Numero ");
		d.num = entero();
	}while (d.num < 0 || d.num > 10000);
	
	printf("\n\t Localidad: ");
	controlAlfabetico(d.localidad);
	segundoNombMay(d.calle);
		
return d;	
}
// FIN leerDomicilio*********************************************************

// 8.-Leer registro ***********************************************************
datos leerRegistro()
{
	datos reg;
	int aux;
	
	printf("\n\t\t\t Ingresar datos");
	printf("\n\t\t\t **************");
	printf("\n\t Apellido");
	controlAlfabetico(reg.apellido);
	segundoNombMay(reg.apellido);
	
	printf("\t Ingrese Nombres");
	controlAlfabetico(reg.nombres);
	segundoNombMay(reg.nombres);
	
	reg.fechaNac = leerFecha();
	
	reg.domic = leerDomicilio();
	
return reg;	
}
// FIN leerRegistro ******************************************************

// 9.- Mostrar registro ***********************************************************
void mostrarRegistro(datos registro)
{
	printf("\n\t Apellido: %s", registro.apellido);
	printf("\t\t Nombres: %s", registro.nombres);
	printf("\n\t Fecha de nacimiento: %d de", registro.fechaNac.dia);
	printf(" %s de %d", registro.fechaNac.mes, registro.fechaNac.anio); 
	printf("\n\t Domicilio: ");
	printf("\t %s %d", registro.domic.calle, registro.domic.num);
	printf(" - %s", registro.domic.localidad ); 
return;
}
// FIN mostrarRegistro ******************************************************

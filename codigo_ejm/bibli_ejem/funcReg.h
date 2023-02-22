/*Funciones para el tratamiento de registros


1.- primeraMayusc(char pal[])
2.- segundoNombMay(char s[])
3.- int entero ()
4.- float leeFloat()
5.- void controlAlfabetico(char pal[])	
6.- struct fecha leerFecha(); 	
7.- domicilio leerDomicilio(); 	
8.- datosPers leerRegistro();   	
9.- void mostrarRegistro( datosPers );
10.- void mostrar(int cant, datosPers []); 
11.- void ordenar( int cant, datosPers []);
12.- void buscar(int cant, datosPers []); 
13.- int busquedaLineal(int cant, datosPers [], char *cb); 
14.- void modificar(int n, datosPers []); 
15.- int eliminarRegistro(int n, datosPers []); 
16.- void menu(datosPers[]); 	
*/


// 1.- ***********************************************************************
void primeraMayusc(char pal[])
{
	int i;
	
	pal[0] = toupper(pal[0]);
	for (i=1; i<strlen(pal); i++)
		pal[i] = tolower(pal[i]);
return;
}
// FIN primeraMayusc*************************************************************

// 2.- ***********************************************************************
void segundoNombMay(char s[])
{
	int i, j;
	
	for (i=1; i<strlen(s); i++)
	{
		if (s[i] == ' ')
		{
			s[i+1] = toupper(s[i+1]);
			for(j = i+2; j < strlen(s) ; j++)
				s[j] = tolower(s[j]);
			break;
		}
	}
	
return;	
}
// FIN segundoNombMay **********************************************************

// 3.-  **************************************************************************
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
// FIN Lee entero *****************************************************************

// 4.- ***************************************************************************
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
// FIN leeFloat ********************************************************************

// 5.- ***************************************************************************
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
	
return;
}
// FIN controlAlfabetico ************************************************************

// 6.- **********************************************************************
struct fecha leerFecha()
{
	struct fecha f;
	
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

// 7.- **********************************************************************
struct domicilio leerDomicilio()
{
	struct domicilio d;
	
	printf("\n Ingresar Domicilio: ");
	printf("\n ------------------- ");

	printf("\n\t Calle: ");
	controlAlfabetico(d.calle);
	primeraMayusc(d.calle);
	segundoNombMay(d.calle);
			
	do{
		printf("\n\t Numero ");
		d.num = entero();
	}while (d.num < 0 || d.num > 10000);
	
	printf("\n\t Localidad: ");
	controlAlfabetico(d.localidad);
	primeraMayusc(d.localidad);
	segundoNombMay(d.localidad);
		
return d;	
}
// FIN leerDomicilio*********************************************************

// 8.- **********************************************************************
struct datos leerRegistro()
{
	struct datos reg;
	int aux;
	
	printf("\n\t\t\t Ingresar datos");
	printf("\n\t\t\t **************");
	printf("\n\t Apellidos");
	controlAlfabetico(reg.apellidos);
	primeraMayusc(reg.apellidos);
	segundoNombMay(reg.apellidos);
	
	printf("\t Ingrese Nombres");
	controlAlfabetico(reg.nombres);
	primeraMayusc(reg.nombres);
	segundoNombMay(reg.nombres);
	
	reg.fechaNac = leerFecha();
	
	reg.domic = leerDomicilio();
	
return reg;	
}
// FIN leerRegistro ******************************************************

// 9.- *******************************************************************
void mostrarRegistro(struct datos registro)
{
	printf("\n\t Apellidos: %s", registro.apellidos);
	printf("\t\t Nombres: %s", registro.nombres);
	printf("\n\t Fecha de nacimiento: %d de", registro.fechaNac.dia);
	printf(" %s de %d", registro.fechaNac.mes, registro.fechaNac.anio); 
	printf("\n\t Domicilio: ");
	printf("\t %s %d", registro.domic.calle, registro.domic.num);
	printf(" - %s", registro.domic.localidad ); 
return;
}
// FIN mostrarRegistro ******************************************************

// 10.- *******************************************************************
void mostrar(int cant, struct datos lista[])
{
	int i;
	
	for(i=0; i<cant; i++)
	{
		printf("\n\n Registro Nro. %d", i);
		printf("\n ****************");	
		mostrarRegistro(lista[i]);
	}
	printf("\n\n\t\t Presiones un tecla para continuar . . . ");
	fgetc(stdin);
	system("cls");
printf("\n");
return;	
}
// FIN mostrar ******************************************************

// 11.- *******************************************************************
void ordenar( int cant, struct datos lista[])
{
	int i, j;
	register struct datos temp;
	
	for (i = 0; i< cant -1; i++)
		for(j = i+1; j<cant; j++)
		{
			if(strcmp(lista[j].apellidos, lista[i].apellidos) < 0)
			{
				temp = lista[j];
				lista[j] = lista[i];
				lista[i] = temp;
			}
		}
return;
}
// FIN ordenar ******************************************************

// 12.- *******************************************************************
void buscar(int cant, struct datos lista[])
{
	int pos;
	char cb[15];
	
	printf("\nIngresar Apellido a buscar: ");
	controlAlfabetico(cb);
	primeraMayusc(cb);
	pos = busquedaLineal(cant, lista, cb);
	if(pos < cant)
		mostrarRegistro(lista[pos]);
	else
		printf("\n No se encontro el apellido");
	
return;
}
// FIN buscar ******************************************************

// 13.- *******************************************************************
int busquedaLineal(int cant, struct datos lista[], char *cb)
{
	int i;
	for(i = 0; i<cant; i++)
		if(strcmp(lista[i].apellidos, cb) == 0)
			return i;
return i;
}
// FIN busquedaLineal ******************************************************

// 14.- *******************************************************************
void modificar(int n, struct datos lista[])
{
	char cad[15];
	int pos;
	printf("\n Ingresar el apellido del registro a modificar: ");
	controlAlfabetico(cad);
	primeraMayusc(cad);
	pos = busquedaLineal(n, lista, cad);
	if (pos < n)
	{
		printf("\n Registro para modificar ");
		mostrarRegistro(lista[pos]);
		lista[pos] = leerRegistro();
	}
	else
		printf("\n NO se encuentra el apellido ingresado");
return;	
}
// FIN modificar ******************************************************

// 15.- *******************************************************************
int eliminarRegistro(int n, struct datos lista[])
{
	int pos;
	char cad[15];
	int i;
	
	printf("\n Ingresar apellido de registro a eliminar: ");
	controlAlfabetico(cad);
	primeraMayusc(cad);
	pos = busquedaLineal(n, lista, cad);
	if (pos < n)
		for (i = pos ; i < n-1 ; i++)
			lista[i] = lista[i+1];
	else
		printf("\n NO se encuentra el apellido ingresado");
return pos;	
}
// FIN eliminarRegistro ******************************************************

// 16.- *******************************************************************
void menu(struct datos lista[])
{
	int opcion, cant = 0, pos;
	char cb[20];
	
	
	do{
		
		printf("\n\n\n\t 1.- Agregar "); 
		printf("\n\t 2.- Mostrar "); 
		printf("\n\t 3.- Ordenar por apellido "); 
		printf("\n\t 4.- Buscar por apellido "); 
		printf("\n\t 5.- Modificar ");
		printf("\n\t 6.- Eliminar ");
		printf("\n\t 7.- Salir ");
		printf("\n\n\t\t Ingrese opcion: ");
		scanf("%d", &opcion);
		fgetc(stdin);
		
		switch(opcion){
			
		case 1: 
			lista[cant] = leerRegistro();
			cant++;
			break;
		case 2: mostrar(cant, lista);
			break;
		case 3: ordenar(cant, lista);
			break;
		case 4: buscar(cant, lista);
			break;
		case 5: modificar(cant, lista);
			break;
		case 6: pos = eliminarRegistro(cant, lista);
			if (pos < cant)
			{
				cant--;
				printf("\n\t\t\t Registro eliminado");
			}
			break;
		}
	}while (opcion != 7);
}
// FIN menu ******************************************************




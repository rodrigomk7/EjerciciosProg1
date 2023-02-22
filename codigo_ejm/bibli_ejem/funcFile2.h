/*

Funciones definidas por el usuario para el tratamiento de archivos 2
	
	1.- void altas(char n[]); 		
	2.- void listar(char n[]); 	
	3.- void ordenarArch(char n[]);   	
	4.- void buscarEnArch(char n[]); 
	5.- void bajasArch(char n[])	
*/

// 1.- ***************************************************************************
void altas(char n[])
{
	datos 	d;
	FILE 	*ptrArch;
	
	if((ptrArch = fopen(n,"r+")) == NULL)
		if((ptrArch = fopen(n,"w+")) == NULL)
			{
		     	printf("Error de apertura de archivo");
		     	fgetc(stdin);
		     	exit(1);
		     	}
	d = leerRegistro();	     	
	fseek(ptrArch,0,2);	     	
	fwrite(&d, sizeof(d), 1, ptrArch);	     	
	
	fclose(ptrArch);
return;
}
// FIN altas() ***************************************************************************

// 2.- ***************************************************************************
void listar(char n[])
{
	datos 	d;
	FILE *	ptrArch;
	int 	i, tam;
	
	printf("\n Listar()");
	if((ptrArch = fopen(n,"r")) == NULL)
			{
		     	printf("El archivo no existe");
		     	fgetc(stdin);
		     	exit(1);
		     	}
	fseek(ptrArch , 0 , 2);
	tam = ftell(ptrArch) / sizeof(datos);
	rewind(ptrArch);
	printf("\n\n\n");
	for(i=0 ; i<tam ; i++)
		{
		fread(&d, sizeof(datos), 1, ptrArch);
		mostrarRegistro(d);
		printf("\n\n Oprimir una tecla ...");
		fgetc(stdin);
		}
	fclose(ptrArch);
return;
}
// FIN listar() ***************************************************************************

// 3.- ***************************************************************************
void ordenarArch(char n[])
{
	datos 	d1, d2;
	datos 	aux;
	FILE *	ptrArch;
	long 	pos1, pos2;
	long 	i , j , tam ;
	
	if((ptrArch = fopen(n , "r+")) == NULL)
   		printf("El archivo no existe");
   	
   	fseek(ptrArch , 0 , 2);
	
   	tam = ftell(ptrArch) / sizeof(datos);
	
   	rewind(ptrArch);
	
   	for(i = 0 ; i<tam-1 ; i++)
		{
		fseek(ptrArch , i * sizeof(datos) , 0);
		pos1 = ftell(ptrArch);
		fread(&d1 , sizeof(datos) , 1 , ptrArch);
		aux = d1;
		for(j = (i + 1) ; j < tam ; j++)
			{
			fseek(ptrArch , j * sizeof(datos) , 0);
			pos2 = ftell(ptrArch);	
			fread( &d2 , sizeof(datos) , 1 , ptrArch );
			if(strcmp(aux.apellido, d2.apellido)>0)
				{
				fseek(ptrArch , pos1 , 0);
				fwrite(&d2 , sizeof(datos) , 1 , ptrArch);
				fseek(ptrArch , pos2 , 0);
				fwrite(&aux , sizeof(datos) , 1 , ptrArch);
				aux = d2;
				}
			}
		}
	fclose(ptrArch);
return;
}
// FIN ordenar() ***************************************************************************

// 4.- ***************************************************************************
void buscarEnArch(char n[])
{
	datos 	d;
	FILE *	ptrArch;
	int 	tam, i, ban;
	char 	cad[10];
	
	if((ptrArch = fopen(n,"r")) == NULL)
			{
		     	printf("El archivo no existe");
		     	fgetc(stdin);
		     	exit(1);
		     	}
		     	
	fseek(ptrArch , 0 , 2);
	
	tam = ftell(ptrArch) / sizeof(datos);
	
	rewind(ptrArch);
	
	printf("\n Ingrese el apellido a buscar : ");
	
	fgets(cad , 14 , stdin);
	cad[strlen(cad)-1] = '\0'; 
	
	for(i = 0 ; i < tam ;  i++)
		{
		fread(&d , sizeof(datos) , 1 , ptrArch);
		if(strcmp(cad,d.apellido) == 0)
			{
			printf("\n El registro se encuentra en la posicion %d", i);
			ban = 1;
			break;
			}
		}	
	if(!ban) printf("\n El apellido no se encuentra en el archivo ");
	
	fclose(ptrArch);
return;
}
// FIN buscar() ***************************************************************************

// 5.- ***************************************************************************
void bajasArch(char n[])
{
	datos 	d;
	FILE *	ptrArch, *temp;
	int 	tam, i, ban=0;
	char 	cad[10];
	char 	temporal[] = "c:\\prog1\\temporal.dat";
	
	if((ptrArch = fopen(n,"r+")) == NULL)
		{
		     	printf("Error de apertura de archivo");
		     	exit(1);
		 }
	if((temp = fopen(temporal,"w+")) == NULL)
		{
		printf("\n No se puede abrir archivo temporal ");
		fclose(ptrArch);
		exit(1);
		}
	
	fseek(ptrArch , 0 , 2);
	
	tam = ftell(ptrArch) / sizeof(datos);
	
	rewind(ptrArch);
	
	printf("\n Ingrese el apellido a dar de baja : ");
	fgets(cad , 14 , stdin);
	cad[strlen(cad)-1] = '\0'; 
	
	for(i=0 ; i < tam ; i++)
		{
		fread(&d , sizeof(datos) , 1 , ptrArch);
		if(strcmp(cad,d.apellido) != 0)
			fwrite(&d , sizeof(datos) , 1 , temp);
		}
	// Instrucción Linux
	//system("mv .../temporal.dat .../datos.dat");
	
	fclose(temp);
	fclose(ptrArch);
	
	//Instrucción Windows
	system("copy c:\\prog1\\temporal.dat c:\\prog1\\datos.dat /Y");
	
return;
}

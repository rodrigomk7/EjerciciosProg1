/*Funciones definidas por el ususario para el tratamiento de archivos
	
	1.- void encabezado(); 		
	2.- int apertura (char nombArch[]); 	
	3.- void cargar (char nombArch[]);   	
	4.- void mostrarDatos (char nombArch []); 
	
*/
//   1.- ************************************************************
void encabezado ()
{
	printf("%18s %15s", "Nombres", "Apellidos");
	printf("%30s", "        FECHA DE NACIMIENTO   ");
	printf("%30s\n", "     Domicilio");
}

//   2.- ************************************************************
int apertura (char nombArch[])
{
	int b = 0;
	FILE *ptrArch;
	
	
	ptrArch = fopen(nombArch, "r+");
	if (ptrArch == NULL)
	{
		printf("\n No se pudo abrir el archivo, se creara... ");
		
		ptrArch = fopen(nombArch, "w+");
		
		if (ptrArch == NULL)
		{
			printf("\n No se pudo crear el archivo, ...");
			b = 1;
		}
	}
fclose(ptrArch);
return (b);
}

//   3.- ************************************************************
void cargar (char nombArch[])
{
	datos a;
	FILE *ptrArch;
	
	ptrArch = fopen(nombArch, "r+");
	printf("\n %s \n", nombArch);
	if (ptrArch == NULL)
		printf("\n NO SE puede cargar");
	fseek(ptrArch, 0, 2);
	fgetc(stdin);
	a = leerRegistro();
	/*
	fprintf(stdout,"%s %s %d", a.nombres, a.apellido, a.fechaNac.dia);
	fprintf(stdout,"%s %d",a.fechaNac.mes,a.fechaNac.anio);
	fprintf(stdout,"%s %d",a.domic.calle, a.domic.num);
	fprintf(stdout,"%s \n",a.domic.localidad);
	*/
	fprintf(ptrArch,"%s %s %d", a.nombres, a.apellido, a.fechaNac.dia);
	fprintf(ptrArch,"%s %d",a.fechaNac.mes,a.fechaNac.anio);
	fprintf(ptrArch,"%s %d",a.domic.calle, a.domic.num);
	fprintf(ptrArch,"%s \n",a.domic.localidad);
	
	fclose(ptrArch);
return;
}

//   4.- ************************************************************
void mostrarDatos (char nombArch [])
{
	datos a;
	FILE *ptrArch;
	
	ptrArch = fopen(nombArch, "a+");
	fseek(ptrArch, 0, 2);
	if(ftell(ptrArch) <= 0)
	{
		printf("\n \t El archivo esta vacio\n");
		return;
	}
	
	rewind (ptrArch);
	encabezado();
	
	while (!feof(ptrArch))
	{	
		
		fscanf(ptrArch,"%s %s %i", a.nombres, a.apellido, &a.fechaNac.dia);
		fscanf(ptrArch,"%s %i",a.fechaNac.mes, &a.fechaNac.anio);
		fscanf(ptrArch,"%s %i",a.domic.calle, &a.domic.num);
		fscanf(ptrArch,"%s",a.domic.localidad);
		if (feof(ptrArch))
			break;
		printf("%18s %15s %8i", a.nombres, a.apellido, a.fechaNac.dia);
		printf("%10s %8i",a.fechaNac.mes,a.fechaNac.anio);
		printf("%15s %8i",a.domic.calle, a.domic.num);
		printf("%20s \n",a.domic.localidad);
	}
	rewind(ptrArch);
	
	/*
	while(!feof(ptrArch))
		printf("%c", fgetc(ptrArch));
	*/
	fclose(ptrArch);
return ;
}



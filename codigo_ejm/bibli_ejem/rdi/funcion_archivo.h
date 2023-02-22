   /*Indice:Funciones archivos (Sr. &)*/

//1)Abre archivo y comprueba
//2)Muestra archivo
//3) Cambia mayuscula por minuscula y minuscula por mayuscula




//1)Abre archivo y comprueba
int apertura_archivo(FILE *p, char nombre[])
{
int ban;
p=fopen(nombre,"r");
if(p==NULL)
{
	printf("\nEl archivo no existe, se creara.");
    p=fopen(nombre,"w+");
	if(p==NULL)
	{
		printf("\nEl archivo no se pudo crear.");
        return ban=0;
	}
	else 
		printf("\nEl archivo se creo con exito.");
}
fclose(p);
return ban=1;
}




//2)Muestra archivo
void mostrar_archivo(FILE *p,char cad[])
{
int c;

p=fopen(cad,"r");

fseek(p,0,2);
c=ftell(p);
rewind(p);

while(feof(p)==0&&ftell(p)<c)
    printf("%c",fgetc(p));

fclose(p);

}



//3) Cambia mayuscula por minuscula y minuscula por mayuscula
void cambiar(FILE *p,char cad[])
{
char c;

p=fopen(cad,"r+");
 //El puntero interno arranca el la posicion 0, donde se encuentra el primer  caracter
	while(!feof(p))
	  {
		c = fgetc(p);//El puntero interno toma el caracter de la posicion actual y luego avanza una posicion .
		if(isalpha(c))
		{
		if (islower(c))
		{
			fseek(p, -1, 1);//puntero interno retrocede un posicion hacia atras.
			fputc(toupper(c), p);//puntero sobreescribi al caracter en en la posicion actual y luego avanza.
			fseek(p, 0, 1);//puntero permanece en el lugar.
			
		}
		else
		{
			if(isupper(c))
			{
				fseek(p,-1,1);
				fputc(tolower(c),p); 
				fseek(p,0,1);
			}
		}
		}
	}
	fclose(p);

}

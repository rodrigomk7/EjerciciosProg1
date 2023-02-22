/* Funciones de cadenas de caracteres
*/

void cargarVectStr(int n, char v[15][20])
{
	int i = 0;
	
	for ( ; i<n ; i++)
	{
		printf(" Ingresar la cadena[%d]", i);
		fgets(v[i], 28, stdin);
		v[i][strlen(v[i])-1]='\0';
	}

return;	
}

void verVectStr(int n, char v[15][20])
{
	int i = 0;	
	for ( ; i<n ;)
		printf("  %s", v[i++]);
}

void burbujaVectStr(int n, char v[15][20])
{
	int i, j;
	register char *temp;
	
	temp = (char*) malloc(30);
	
	for ( i=0 ; i< n-1 ; i++)
		for ( j=i+1 ; j < n ; j++)
			if( strcmp(v[j], v[i]) < 0)
			{
				strcpy(temp, v[i]);
				strcpy(v[i], v[j]);
				strcpy(v[j], temp);
			}
	free(temp);
}

/* Funciones de cadenas de caracteres  - Punteros a char
*/

void cargaPtrVecCh(int n, char *cad, int k)
{
	int i;
	char str[15];
	
	for ( i=0 ; i<n ; i++)
	{
		printf("Ingresar cadena [%d]: ", i);
		scanf("%s", cad+ k * i);
	}
}

void verPtrVecCh(int n, char *cad, int k)
{	
	int i;
	
	for ( i=0 ; i<n ; i++)
		fprintf(stdout, "    %s",(cad+k*i));
}

void ordenarPtrVecCh(int n, char *cad, int k)
{
	int i, j;
	char aux[15];
	
	for ( i=0 ; i<n-1 ; i++)
		for ( j=i+1 ; j<n ; j++)
			if ( strcmp((cad+k*j),(cad+k*i)) < 0 )
			{
				strcpy(aux, (cad+k*i));
				strcpy((cad+k*i) , (cad+k*j));
				strcpy((cad+k*j) , aux);
			}
}

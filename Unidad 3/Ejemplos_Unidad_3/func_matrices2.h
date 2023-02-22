/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Funciones para matrices - 2
	
	1.- SUMA DE MATRICES DE ENTEROS
	2.- CERO DIAGONAL PRINCIPAL DE ENTEROS
	3.- CERO DIAGONAL SECUNDARIA DE ENTEROS
	4.- HACER CERO CRUZ DE MATRIZ DE ENTEROS - CASO 1
	5.- HACER CERO CRUZ DE MATRIZ DE ENTEROS - CASO 2
	6.- HACER CERO CRUZ DE MATRIZ DE ENTEROS - CASO 3
	7.- HACER CERO CRUZ DE MATRIZ DE ENTEROS - CASO 4
	8.- MULTIPLICACIÓN DE MATRICES DE ENTEROS
	
*/


// ***********************1.- SUMA DE MATRICES DE ENTEROS **********************
void sumaMatInt(int fil, int col, int m1[30][30], int m2[20][30], int s[20][30])
{
	int i, j;
	for (i=0 ; i < fil ; i++)
		for (j=0 ; j < col ; j++)
			s[i][j] = m1[i][j] + m2[i][j];
}

// ***********************2.- CERO DIAGONAL PRINCIPAL DE ENTEROS ***************
void ceroDiagPpalInt(int fil, int col, int mat[30][30])
{
	int i;
	for (i=0 ; i < fil ; i++)
		mat[i][i] = 0;
}

// ***********************3.- CERO DIAGONAL SECUNDARIA DE ENTEROS **************
void ceroDiagSecInt(int fil, int col, int mat[30][30])
{
	int i;
	for (i=0 ; i < fil ; i++)
		mat[i][col - i - 1] = 0;
}

// ***********************4.- HACER CERO CRUZ DE MATRIZ DE ENTEROS - CASO 1 ****
void cruzCero1Int(int m, int n, int a[30][30])
{
	int i, j, cc, fc;

	fc = m / 2 ;
	cc = n / 2 ;
		for ( i = 0 ; i < m ; i++)
				a[i][cc] = 0;
		for ( j = 0 ; j < n ; j++)
				a[fc][j] = 0;
return;
}

// ***********************5.- HACER CERO CRUZ DE MATRIZ DE ENTEROS - CASO 2 ****
void cruzCero2Int(int m, int n, int a[30][30])
{
	int i, j, cc1, cc2, fc;
	fc = m / 2 ;
	cc1 = n / 2 -1 ;
	cc2 = n / 2 ;
		for ( i = 0 ; i < m ; i++)
			{
				a[i][cc1] = 0;
				a[i][cc2] = 0;
			}
		for ( j = 0 ; j < n ; j++)
				a[fc][j] = 0;

return;
}

// ***********************6.- HACER CERO CRUZ DE MATRIZ DE ENTEROS - CASO 3 ****
void cruzCero3Int(int m, int n, int a[30][30])
{
	int i, j, cc1, cc2, fc1, fc2;
	fc1 = m / 2 - 1;
	fc2 = m / 2 ;
	cc1 = n / 2 - 1;
	cc2 = n / 2;
		for ( i = 0 ; i < m ; i++)
			{
				a[i][cc1] = 0;
				a[i][cc2] = 0;
			}
		for ( j = 0 ; j < n ; j++)
			{
				a[fc1][j] = 0;
				a[fc2][j] = 0;
			}

return;
}

// ***********************7.- HACER CERO CRUZ DE MATRIZ DE ENTEROS - CASO 4 ****
void cruzCero4Int(int m, int n, int a[30][30])
{
	int i, j, cc, fc1, fc2;
	fc1 = m / 2 - 1;
	fc2 = m / 2 ;
	cc = n / 2 ;
		for ( i = 0 ; i < m ; i++)
				a[i][cc] = 0;
		for ( j = 0 ; j < n ; j++)
			{
				a[fc1][j] = 0;
				a[fc2][j] = 0;
			}


return;
}

// *************************** 8.- MULTIPLICACIÓN DE MATRICES DE ENTEROS *******
void prodMatInt( int m, int n, int q, int a[30][30],int b[30][30],int c[30][30])
{
	int i, j, k;
	
	for ( i = 0; i < m ; i++ ) 
		for ( j = 0; j < q ; j++ ) 
		{
			c[i][j] = 0;
			
			for ( k = 0 ; k < n ; k++ ) 
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
		}
}

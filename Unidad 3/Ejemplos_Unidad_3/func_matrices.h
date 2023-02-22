/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Funciones basicas de matrices
*/

/*
	1.- CARGA ALEATORIA MATRIZ DE ENTEROS
	2.- CARGA ALEATORIA MATRIZ DE FLOAT
	3.- MOSTRAR MATRIZ DE ENTEROS
	4.- MOSTRAR MATRIZ DE FLOAT
	5.- CARGAR MATRIZ DIAGONAL DE ENTEROS
	6.- CARGAR MATRIZ IDENTIDAD
	7.- CARGAR MATRIZ ESCALAR DE ENTEROS
	8.- CARGA MATRIZ TRIANGULAR SUPERIOR DE ENTEROS
	9.- CARGA MATRIZ TRIANGULAR INFERIOR DE ENTEROS
	10.- CARGA MATRIZ SIMÉTRICA DE ENTEROS
	11.- CARGA MATRIZ ANTISIMÉTRICA DE ENTEROS
	12.- MATRIZ TRANSPUESTA
*/

#include <math.h>

// ***********************1.- CARGA ALEATORIA MATRIZ DE ENTEROS ****************
void cargaAlMatInt(int fil, int col, int mat[30][30])
{
	int i, j;
	for (i=0 ; i < fil ; i++)
		for (j=0 ; j < col ; j++)
			mat[i][j] = rand() % 20;
}

// ***********************2.- CARGA ALEATORIA MATRIZ DE FLOAT ******************
void cargaAlMatFloat(int fil, int col, float mat[30][30])
{
	int i, j;
	for (i=0 ; i < fil ; i++)
		for (j=0 ; j < col ; j++)
			mat[i][j] = (float)rand() / 500;
}

// *****************************3.- MOSTRAR MATRIZ DE ENTEROS ******************
void verMatInt(int fil, int col, int mat[30][30])
{
	int i, j;
	for (i=0 ; i < fil ; i++)
	{
		printf("\n\n");
		for (j=0 ; j < col ; j++)
			printf("%7d", mat[i][j]);
	}
}

// *****************************4.- MOSTRAR MATRIZ DE FLOAT ********************
void verMatFloat(int fil, int col, float mat[30][30])
{
	int i, j;
	for (i=0 ; i < fil ; i++)
	{
		printf("\n\n");
		for (j=0 ; j < col ; j++)
			printf("%8.2f", mat[i][j]);
	}	
}

// ************************5.- CARGAR MATRIZ DIAGONAL DE ENTEROS ***************
void cargaMatDiagInt(int fil, int col, int mat[30][30])
{
	int i, j;
	
	for (i=0 ; i < fil ; i++)
	{
		for (j=0 ; j < col ; j++)
		{
			if (j == i)
				mat[i][j] = rand() % 99;
			else
				mat[i][j] = 0;
		}
	}	
}

// **************************6.- CARGAR MATRIZ IDENTIDAD ***********************
void cargaMatIdentInt(int fil, int col, int mat[30][30])
{
	int i, j;
	
	for (i=0 ; i < fil ; i++)
	{
		for (j=0 ; j < col ; j++)
		{
			if (j == i)
				mat[i][j] = 1;
			else
				mat[i][j] = 0;
		}
	}	
}

// ************************7.- CARGAR MATRIZ ESCALAR DE ENTEROS ****************
void cargaMatEscalInt(int fil, int col, int mat[30][30], int k)
{
	int i, j;
	
	for (i=0 ; i < fil ; i++)
	{
		for (j=0 ; j < col ; j++)
		{
			if (j == i)
				mat[i][j] = k;
			else
				mat[i][j] = 0;
		}
	}	
}

// ************************8.- CARGA MATRIZ TRIANGULAR SUPERIOR DE ENTEROS *****
void cargaTriangSupInt(int fil, int col, int mat[30][30])
{
	int i, j;
	
	for (i=0 ; i < fil ; i++)
	{
		for (j=0 ; j < col ; j++)
		{
			if (j >= i)
				mat[i][j] = rand() % 80;
			else
				mat[i][j] = 0;
		}
	}	
}

// ***********************9.- CARGA MATRIZ TRIANGULAR INFERIOR DE ENTEROS ******
void cargaTriangInfInt(int fil, int col, int mat[30][30])
{
	int i, j;
	
	for (i=0 ; i < fil ; i++)
	{
		for (j=0 ; j < col ; j++)
		{
			if (j <= i)
				mat[i][j] = rand() % 80;
			else
				mat[i][j] = 0;
		}
	}	
}

// **************************10.- CARGA MATRIZ SIMÉTRICA DE ENTEROS ************
void cargaMatSimetInt(int fil, int col, int mat[30][30])
{
	int i, j;
	
	for (i=0 ; i < fil ; i++)
		for (j = 0 ; j < col ; j++)
			if (j>=i)
				mat[i][j] = rand() % 80;
			else
				mat[i][j] = mat[j][i];
	
}

// **********************11.- CARGA MATRIZ ANTISIMÉTRICA DE ENTEROS ************
void cargaMatAntSimetInt(int fil, int col, int mat[30][30])
{
	int i, j, signo;
	
	for (i=0 ; i < fil ; i++)
		
		for (j = 0 ; j < col ; j++)
		{
			signo = (int) pow((-1), rand()%4);
			
			if (j == i)
				mat[i][i] = 0;
			if (j>i)
					mat[i][j] = signo * rand() % 80;
			if (j<i)
					mat[i][j] = -mat[j][i];
			
		}
	
}

// ******************************12.- MATRIZ TRANSPUESTA ***********************
void matTransp(int fil, int col, int mat[30][30], int trans[30][30])
{
	int i, j, k;
	
	for (i=0 ; i < col ; i++)
		for (j = 0 ; j < fil ; j++)
			trans[i][j] = mat[j][i];
	
}


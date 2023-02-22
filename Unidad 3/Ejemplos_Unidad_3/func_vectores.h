/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Funciones para arreglos unidimensionales
*/

void cargaAlVectInt(int n, int vec[10])
{
	int i;
	for (i=0 ; i < n ; i++)
		vec[i] = rand() % 50;
}

void cargaAlVectFloat(int n, float vec[10])
{
	int i;
	for (i=0 ; i < n ; i++)
		vec[i] = (float)(rand() % 600) / 2.33;
}

void verVectInt(int n, int vec[10])
{
	int i;
	for (i=0 ; i < n ; i++)
		printf("%5d", vec[i]);
}
	
void verVectFloat(int n, float vec[10])
{
	int i;
	for (i=0 ; i < n ; i++)
		printf("%7.2f", vec[i]);
}

void sumaVectInt(int n, int a[], int b[], int c[])
{
	int i;
	
	for (i=0 ; i < n ; i++)
		c[i] = a[i] + b[i];	
}

void sumaVectFloat(int n, float a[], float b[], float c[])
{
	int i;
	
	for (i=0 ; i < n ; i++)
		c[i] = a[i] + b[i];	
}

void restaVectInt(int n, int a[], int b[], int c[])
{
	int i;
	
	for (i=0 ; i < n ; i++)
		c[i] = a[i] - b[i];	
}

void restaVectFloat(int n, float a[], float b[], float c[])
{
	int i;
	
	for (i=0 ; i < n ; i++)
		c[i] = a[i] - b[i];	
}

void vectorPorEscalarInt(int n, int v[], int vecProd[], int esc)
{
	int i;	
	
	for ( i=0 ; i<n ; i++)
		vecProd[i] = esc * v[i];
}

void vectorPorEscalarFloat(int n, float v[], float vecProd[], int esc)
{
	int i;	
	
	for ( i=0 ; i<n ; i++)
		vecProd[i] = esc * v[i];
}

void generarFibo(int n, int v[])
{
	int i;	
	
	v[0] = v[1] = 1;
	for ( i=2 ; i<n ; i++)
		v[i] = v[i-1]+v[i-2];
}

void burbujaInt(int n, int v[])
{
	int i, j;
	register int temp;
	for ( i=0 ; i< n-1 ; i++)
		for ( j=i+1 ; j < n ; j++)
			if( v[j] < v[i])
			{
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
}

int busquedaLinealInt(int n, int v[], int cb)
{
	int i;
	for (i = 0 ; i<n ; i++)
		if ( cb == v[i]) break;
return i;
}

int busqBinariaInt (int n, int v[], int cb)
{
	int central, izq, der;
	izq = 0;
	der = n-1;
	
	while (izq <= der)
	{
		central = (izq+der)/2;
		if (cb > v[central])
			izq = central + 1;
		else
			if (cb < v[central])
				der = central - 1;
			else
				return central;
	}
return -1;
}

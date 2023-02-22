// 1- funcion para cargar y mostrar vector entero

void cargar_vector_int(int n, int vect[])
{
int i=0,k=1;
for(;i<n;i++)
{
printf(" \n Ingrese el elemento V[%d]: ",k++);
scanf("%d",&vect[i]);
}
}

void mostrar_vector_int(int n, int vect[])
{
int i=0;
for(;i<n;i++)
{
printf(" %d ", vect[i]);
}
printf("\n \n");
}


//funciones para cargar y mostrar vector CHAR

void cargar_vector_char(int n, char vect[])
{
int i=0,k=1;
for(;i<n;i++)
{
printf(" \n Ingrese el elemento V[%d]: ",k++);
scanf("%c",&vect[i]);
getchar();
}
}


void mostrar_vector_char(int n, char vect[])
{
int i=0;
for(;i<n;i++)
{
printf(" %c  ", vect[i]);
}
printf("\n \n");
}


//funciones para cargar y mostrar vector float

void cargar_vector_float(int n, float vect[50])
{
int i=0,k=1;
for(;i<n;i++)
{
printf(" \n Ingrese el elemento V[%d]: ",k++);
scanf("%f",&vect[i]);
}
}

void mostrar_vector_float(int n, float vect[50])
{
int i=0;
for(;i<n;i++)
{
printf(" %1.2f ", vect[i]);
}
printf("\n \n");
}

// 4- funciones para invertir un vector INT-CHAR-FLOAT
void invertir_vector_int(int n, int vect[])
{
int i=0,aux,r;
r=n-1;

for(;i<(n/2);)
{
aux=vect[i];
vect[i]=vect[r];
vect[r]=aux;
r--;
i++;
}
}

void invertir_vector_char(int n, char vect[])
{
int i=0,aux,r;
r=n-1;

for(;i<(n/2);)
{
aux=vect[i];
vect[i]=vect[r];
vect[r]=aux;
r--;
i++;
}
}

void invertir_vector_float(int n, float vect[])
{
int i=0,aux,r;
r=n-1;

for(;i<(n/2);)
{
aux=vect[i];
vect[i]=vect[r];
vect[r]=aux;
r--;
i++;
}
}

//5- insertar un valor en un vector INT-FLOAT-CHAR

void insertar_elemento_int(int n,int vect[],int vectm[])
{
int i=0,x,p,e=0,aux=0;

printf("\n ingrese un valor: ");
scanf("%d",&x);

do
{
printf("\n ingrese la posicion en la q lo desea insertar:");
scanf("%d",&p);
}while(x>n&&x<0);
--p;

for(;i<=n;i++)
{
        if(i<p)
        {vectm[e]=vect[i];}
        else
        { if(i==p)
                {
                aux=vect[i];
                vectm[e]=x;}
              else
                {
                vectm[e]=aux;
                aux=vect[i];}
        }
        e++;
}}

void insertar_elemento_float(int n,float vect[],float vectm[])
{
int i=0,p,e=0,aux=0;
float x;

printf("\n ingrese un valor: ");
scanf("%f",&x);

do
{
printf("\n ingrese la posicion en la q lo desea insertar:");
scanf("%d",&p);
}while(x>n&&x<0);
--p;

for(;i<=n;i++)
{
        if(i<p)
        {vectm[e]=vect[i];}
        else
        { if(i==p)
                {
                aux=vect[i];
                vectm[e]=x;}
              else
                {
                vectm[e]=aux;
                aux=vect[i];}
        }
        e++;
}}

void insertar_elemento_char(int n,char vect[],char vectm[])
{
int i=0,p,e=0,aux=0;
char x;

printf("\n ingrese un valor: ");
scanf("%c",&x);

do
{
printf("\n ingrese la posicion en la q lo desea insertar:");
scanf("%d",&p);
}while(x>n&&x<0);
--p;

for(;i<=n;i++)
{
        if(i<p)
        {vectm[e]=vect[i];}
        else
        { if(i==p)
                {
                aux=vect[i];
                vectm[e]=x;}
              else
                {
                vectm[e]=aux;
                aux=vect[i];}
        }
        e++;
}}

//6- Reeplazar un elemento por otro ingresado INT-FLOAT-CHAR

void reemplazar_valor_int(int n, int vect[])
{

int e,x,i;
printf("\n Ingrese un valor a reeplazar:  ");
scanf("%d",&e);

do{
printf("\n ingrese la posicion del elemento a reeplazar:  ");
scanf("%d",&x);
}while(0>x && x>=n);
--x;
for(i=0;i<n;i++)
 {if(x==i)
      {vect[i]=e;}}}

void reemplazar_valor_float(int n, float vect[])
{
int x,i;
float e;
printf("\n Ingrese un valor a reeplazar:  ");
scanf("%f",&e);
do{
printf("\n ingrese la posicion del elemento a reeplazar:  ");
scanf("%d",&x);
}while(0>x && x>=n);
--x;
for(i=0;i<n;i++)
 {if(x==i)
     {vect[i]=e;}}}
 
void reemplazar_valor_char(int n, char vect[])
{
int x,i;
char e;
printf("\n Ingrese un valor a reeplazar:  ");
scanf("%c",&e);
getchar();
do
{printf("\n ingrese la posicion del elemento a reeplazar:  ");
scanf("%d",&x);
getchar();
}while(0>x && x>=n);
--x;
for(i=0;i<n;i++)
 { if(x==i)      
        {vect[i]=e;}}}

void cargar_vect_primo2dig(int *n, int vect[])
{

int i=0,x,ban=0;

for(x=10;x<100;x++)
{
   ban=ies_primo(x); //llamar en la funcion "control_roh.h"

   if(ban==1)
   {
   vect[i]=x;
   i++;
   }}
*n=i;}
// es primo
int ies_primo(int x)
{
int d=2,cont=0;

while(x>d)
{
if(x%d==0)
cont++;
d++;
}
if(cont==0)
          return 1; // es primo 
else
          return 0;} // no es primo

//8- eliminar un elemento de un vector

void eliminar_elemento(int n,int x,int vect[],int vectm[])
{
int i,e=0;
x=x-1;
//int x;
//int vecmod[100];
/*do{
printf("\n ingrese la posicion del elemento a eliminar:  ");
scanf("%d",&x);
}while(0>x && x>=n);
--x;*/
for(i=0;i<n;i++)
 {   if(x==i)
        {vectm[e]=vect[++i];}
        else
        vectm[e]=vect[i];
        e++;}}
//9 - ver si todos los elementos son iguales son iguales - devuelve 1 si son iguales y 0 si no
int son_iguales(int n,int vec[])
{
	int i=0,j,c=1;
	for(j=i+1;j<n;j++)
		{
			if(vec[i]==vec[j])
			{
				c=c+1;
			}
			}
			
		if(c==n)
		    return 1;
		else
			return 0;
}


// me devuelve la posicion del mayor elemento par
int pos_mayor_par(int *pmp,int n,int vec[])
{
	int i=0,b=0,d=0,aux;   // *pmp posicion del mayor par
	
	for(;i<n;i++)
	{
		if(vec[i]%2==0)
		{
			if(b==0)
			{	aux=vec[i];
				b=1;           // devuelve 1 si hay mayor par 
				*pmp=i;         // devuelve 0 si no hay
			}            
			else
			{if(vec[i]>aux)
				{
					aux=vec[i];
					*pmp=i;
				}}}}
	(*pmp)=(*pmp)+1;
	return b;}


//11- me da la posicion del menor impar 
int pos_menor_impar(int *pmei,int n,int vec[])
{
	int i,b=0,d=0,y;  // *pmei posicion del menor impar
for(i=0;i<n;i++)
	{			
		if(vec[i]%2!=0)
		{if(b==0)
			{
				y=vec[i];         // devuelve 0 si no hay impar
				b=1;              // devuelve 1 si hay impar
				*pmei=i;
			}
			else
			{
				if(vec[i]<y)
				{
					y=vec[i];
					*pmei=i;
				
				}
			}}(*pmei)=(*pmei)+1;
			}return b;}

//me devuelve el valor del mayor elemento en un vector

int mayor_elemento(int n,int vec[])
{
	int i,b=0,mayor;
	for(i=0;i<n;i++)
	{
		if(b==0)
		{
			mayor=vec[i];
			b=1;
			
		}
		else
		{
			if(vec[i]>mayor)
			{
				mayor=vec[i];
				
			}
		}
	}return mayor;
}

// me devuelve el valor del menor elemento en un vector

int menor_elemento(int n,int vec[])
{
	int i,b=0,menor;
	
	for(i=0;i<n;i++)
	{
		if(b==0)
		{
			menor=vec[i];
			b=1;
		}
		else
		{
			if(vec[i]<menor)
			{
				menor=vec[i];
			}
		}
	}
return menor;
}
// intercambia el mayor elemento de un vector con el menor 


void intercambiar_may_con_menor(int may,int men,int n,int vec[])
{
	int i=0;
	while(i<n)
	{
	
		if(vec[i]==may)
		{
			vec[i]=men;
		}
	     else
	     {
	     	if(vec[i]==men)
	     	{
	     		vec[i]=may;
			 }
		 }
		 i++;
	}
}

// busca un caracter en un vector de caracter ,retorna 1 si esta y 0 si no esta
int buscar_elemento_car(char a,int n,char vec[])
{
	int i=0;
	for(;i<n;i++)
	{
		if(vec[i]==a)
		{		return 1;
		}
	}
	return 0;}

// reemplaza un caracter que yo busque por otro que quiero que lo reemplaze,reemplaza a "a" por "b"

void reemplazar_caracter_en_vector(char a,char b,int n,char vec[])
{
	int i=0;
	for(;i<n;i++)
	{
		if(vec[i]==a)
		{
			vec[i]=b;
		}
	}
}
/*ordenar vector en forma ascendente*/

void ordenar_asc_vect(int n, int v[])
{
int i, j;
int aux;
for ( i=0 ; i< n-1 ; i++)
for ( j=i+1 ; j < n ; j++)
if( v[j] < v[i])
 {
aux = v[i];
v[i] = v[j];
v[j] = aux;
 }
}

/*ordenar vector en forma descedente*/

void ordenar_desc_vec(int n, int v[])
{
int i, j;
int aux;
for ( i=0 ; i< n-1 ; i++)
for ( j=i+1 ; j < n ; j++)
if( v[j] > v[i])
 {
aux = v[i];
v[i] = v[j];
v[j] = aux;
 }
}


// controla si en un vector hay elementos repetidos-devuelve 1 si hay repetidos y 0 si no
// INT- FLOAT-CHAR
int control_repetidos_int(int x,int vec[])
{
	int i=0,j,c=0;
	while(i<x-1)
	{
		j=i+1;
		while(j<x)
		{
			if(vec[i]==vec[j])
			{
			return 1;
		    }
			j++;
		}
		i++;
	}
	return 0;
	
}

int control_repetidos_float(int x,float vec[])
{
	int i=0,j,c=0;
	while(i<x-1)
	{
		j=i+1;
		while(j<x)
		{
			if(vec[i]==vec[j])
			{
			return 1;
		    }
			j++;
		}
		i++;
	}
	return 0;
	
}
int control_repetidos_char(int x,char vec[])
{
	int i=0,j,c=0;
	while(i<x-1)
	{
		j=i+1;
		while(j<x)
		{
			if(vec[i]==vec[j])
			{
			return 1;
		    }
			j++;
		}
		i++;
	}
	return 0;
	
}

// elimina los elementos que se repitan en un vector  INT-FLOAT-CHAR
void eliminar_repetidos_int(int *n,int vec[])
{
	int i=0,j,t,x;
	x=*n;
	while(i<x-1)
	{
		j=i+1;
		while(j<x)
		{
			if(vec[i]==vec[j])
			{
				t=j;
								
				while(t<x)
				{
					vec[t]=vec[t+1];
					t=t+1;
				}
				x=x-1;
				j--;
		     	
			}
			j=j+1;
		}
		i=i+1;
	}
	*n=x;
}

void eliminar_repetidos_float(int *n,float vec[])
{
	int i=0,j,t,x;
	x=*n;
	while(i<x-1)
	{
		j=i+1;
		while(j<x)
		{
			if(vec[i]==vec[j])
			{
				t=j;
								
				while(t<x)
				{
					vec[t]=vec[t+1];
					t=t+1;
				}
				x=x-1;
				j--;
		     	
			}
			j=j+1;
		}
		i=i+1;
	}
	*n=x;
}

void eliminar_repetidos_char(int *n,char vec[])
{
	int i=0,j,t,x;
	x=*n;
	while(i<x-1)
	{
		j=i+1;
		while(j<x)
		{
			if(vec[i]==vec[j])
			{
				t=j;
								
				while(t<x)
				{
					vec[t]=vec[t+1];
					t=t+1;
				}
				x=x-1;
				j--;
		     	
			}
			j=j+1;
		}
		i=i+1;
	}
	*n=x;
}












/*********************************************************************************
****** FUNCIONES DE TEORIA ************************************************/

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
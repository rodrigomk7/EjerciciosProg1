//funciones para cargar y mostrar matriz INT-FLOAT-CHAR
//#include <math.h>
//#include "control_roh.h"

void cargar_matriz_int(int m,int n,int A[][50])
{
	int i,j,h=1,k=1;
for(i=0;i<m;i++)
	{k=1;
	for(j=0;j<n;j++)
	    {printf("\nIngrese el elemento Mat[%d][%d]: ",h,k++);
	     scanf("%d",&A[i][j]);
	    }h++;}}

void mostrar_matriz_int(int m,int n,int A[][50])
{
	int i,j;
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
	{printf("\t%d",A[i][j]);
         }
printf("\n\n");}}
//funciones para cargar y mostrar matriz FLOAT
void cargar_matriz_float(int m,int n,float A[][50])
{
	int i,j,h=1,k=1;
for(i=0;i<m;i++)
	{k=1;
	for(j=0;j<n;j++)
		{printf("\nIngrese el elemento Mat[%d][%d]: ",h,k++);
		scanf("%f",&A[i][j]);}
		h++;}
}

void mostrar_matriz_float(int m,int n,float A[][50])
{int i,j;
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{printf("\t%1.2f",A[i][j]);}
printf("\n\n");
	}}
//funciones para cargar y mostrar matriz CHAR
void cargar_matriz_char(int m,int n,char A[][50])
{int i,j,h=1,k=1;
for(i=0;i<m;i++)
	{k=1;
	for(j=0;j<n;j++)
		{printf("\nIngrese el elemento Mat[%d][%d]: ",h,k++);
		scanf("%c",&A[i][j]);
		getchar();}
		h++;}}

void mostrar_matriz_char(int m,int n,char A[][50])
{int i,j;
for(i=0;i<m;i++)
	{for(j=0;j<n;j++)
		{printf("\t%c",A[i][j]);}
printf("\n\n");}}

// generar la matriz trampuesta INT 

void trampuesta_int(int m,int n,int A[][50],int T[][50])
{
int i=0,j=0;
    for(;i<m;i++)
    {
		for(j=0;j<n;j++)
        T[j][i] = A[i][j];
    }}
	
// generar la matriz trampuesta float

void trampuesta_float(int m,int n,float A[][50],float T[][50])
{
int i=0,j=0;
    for(;i<m;i++)
    {
		for(j=0;j<n;j++)
        T[j][i] = A[i][j];
    }}
// generar la matriz trampuesta CHAR

void trampuesta_char(int m,int n,char A[][50],char T[][50])
{
int i=0,j=0;
    for(;i<m;i++)
    {
		for(j=0;j<n;j++)
        T[j][i] = A[i][j];
    }}
//  suma los elementos que se encuentran debajo de la diagonal secundaria

int suma_eled_diag_secu(int m,int A[][50])
{
	int i,j,s=0;
	m=m-1;	
	i=m;
for(;i>0;i=i-1)
	{
		j=m-i+1;
		for(;j<=m;j++)
		{
		s=s+A[i][j];
		}
	}
	return s;
}
int suma_eled_diag_secu_float(int m,float A[][50])
{
  int i,j;
  float s=0;
   m=m-1;
   i=m;
   for(;i>0;i=i-1)
	{j=m-i+1;
		for(;j<=m;j++)
		{s=s+A[i][j];
		}}return s;}
// intercambiar dos columnas seleccionadas sin arraglo auxiliar

void intercambiar_columnas_int(int m,int n,int A[][50],int a,int b)
{
int i,j,aux;
/*do{
printf("\n ingrese el un num. de columna:");
scanf("%d",&a);
}while(a<=0 &&  a>n);
do{
printf("\n ingrese nuevamente el un num. de columna:");
scanf("%d",&b);
}while(b<=0 && b>n);*/
--a;
--b;
for(i=0;i<m;i++)
{          aux=A[i][a];
           A[i][a]=A[i][b];
           A[i][b]=aux;
}}
void intercambiar_columnas_char(int m,int n,char A[][50],int a,int b)
{
int i,j;
char aux;
/*do{
printf("\n ingrese el un num. de columna:");
scanf("%d",&a);
}while(a<=0 &&  a>n);
do{
printf("\n ingrese nuevamente el un num. de columna:");
scanf("%d",&b);
}while(b<=0 && b>n);*/
--a;
--b;
for(i=0;i<m;i++)
{          aux=A[i][a];
           A[i][a]=A[i][b];
           A[i][b]=aux;
}}

void intercambiar_columnas_float(int m,int n,float A[][50],int a,int b)
{
int i,j;
float aux;
/*do{
printf("\n ingrese el un num. de columna:");
scanf("%d",&a);
}while(a<=0 &&  a>n);
do{
printf("\n ingrese nuevamente el un num. de columna:");
scanf("%d",&b);
}while(b<=0 && b>n);*/
--a;
--b;
for(i=0;i<m;i++)
{          aux=A[i][a];
           A[i][a]=A[i][b];
           A[i][b]=aux;
}}

// intercambiar la diag. principal con la secu

void intercambiar_prin_x_sec_int(int m,int A[][50])
{
int i,aux=0;
m=m-1;
for(i=0;i<=m;i++)
  {  aux = A[i][i];
     A[i][i] = A[i][m-i];
     A[i][m-i] = aux;}}
//FLOAT	 
void intercambiar_prin_x_sec_float(int m,float A[][50])
{
int i;
float aux=0;
m=m-1;
for(i=0;i<=m;i++)
  {  aux = A[i][i];
     A[i][i] = A[i][m-i];
     A[i][m-i] = aux;}}
	 //CHAR
void intercambiar_prin_x_sec_char(int m,char A[][50])
{
int i;
char aux=0;
m=m-1;
for(i=0;i<=m;i++)
  {  aux = A[i][i];
     A[i][i] = A[i][m-i];
     A[i][m-i] = aux;}}  
//ordenar en forma ascendente dia principal
void ord_asce_dia_princi_int(int m,int A[][50])
{
int i,j,aux,men;
for(i=0;i<m;i++)
     {
          for(j=i+1;j<m;j++)
          {
          if(A[i][i] > A[j][j])
				{
				aux=A[i][i];
				A[i][i]=A[j][j];
				A[j][j]=aux;
				}
          }
}}
void ord_asce_dia_princi_float(int m,float A[][50])
{
	int i,j;
float aux;
for(i=0;i<m;i++){
          for(j=i+1;j<m;j++)
          {if(A[i][i] > A[j][j])
				{aux=A[i][i];
				A[i][i]=A[j][j];
				A[j][j]=aux;
		}}}}
void ord_asce_dia_princi_char(int m,char A[][50])
{
	int i,j;
char aux;
for(i=0;i<m;i++){
          for(j=i+1;j<m;j++)
          {if(A[i][i] > A[j][j])
				{aux=A[i][i];
				A[i][i]=A[j][j];
				A[j][j]=aux;
		}}}}


// ordenar en forma descendente dia principal
void ord_des_dia_princi_int(int m,int A[][50])
{
int i,j,aux,men;
for(i=0;i<m;i++)
     {
          for(j=i+1;j<m;j++)
          {
          if(A[i][i] < A[j][j])
				{
				aux=A[i][i];
				A[i][i]=A[j][j];
				A[j][j]=aux;
				}
          }
       }}
void ord_des_dia_princi_float(int m,float A[][50])
{
	int i,j;
float aux;
for(i=0;i<m;i++){
          for(j=i+1;j<m;j++)
          {if(A[i][i] < A[j][j])
				{aux=A[i][i];
				A[i][i]=A[j][j];
				A[j][j]=aux;
		}}}}
void ord_des_dia_princi_char(int m,char A[][50])
{
	int i,j;
char aux;
for(i=0;i<m;i++){
          for(j=i+1;j<m;j++)
          {if(A[i][i] < A[j][j])
				{aux=A[i][i];
				A[i][i]=A[j][j];
				A[j][j]=aux;
		}}}}

// ordenar en forma ascendente dia secundaria
void ord_asce_dia_secundaria_int(int m,int A[][50])
{
int i,j,aux,k,r,x,y;
m=m-1;
	for(i=0;i<=m;i++)
	{
    	j=m-i;
		r=i;
		k=j;
       while(k>0)
		{ x=r+1;
	          y=k-1;
				if(A[i][j]<A[x][y])
			      {
				aux=A[i][j];
				A[i][j]=A[x][y];
				A[x][y]=aux;
			      }			
		   r++;
		   k--;
		}}}
void ord_asce_dia_secundaria_float(int m,float A[][50])
{
int i,j,k,r,x,y;
float aux;
m=m-1;
	for(i=0;i<=m;i++)
	{
    	j=m-i;
		r=i;
		k=j;
       while(k>0)
		{ x=r+1;
	          y=k-1;
				if(A[i][j]<A[x][y])
			      {
				aux=A[i][j];
				A[i][j]=A[x][y];
				A[x][y]=aux;
			      }			
		   r++;
		   k--;
		}}}
void ord_asce_dia_secundaria_char(int m,char A[][50])
{
int i,j,k,r,x,y;
char aux;
m=m-1;
	for(i=0;i<=m;i++)
	{
    	j=m-i;
		r=i;
		k=j;
       while(k>0)
		{ x=r+1;
	          y=k-1;
				if(A[i][j]<A[x][y])
			      {
				aux=A[i][j];
				A[i][j]=A[x][y];
				A[x][y]=aux;
			      }			
		   r++;
		   k--;
		}}}

// ordenar en forma descendente dia secundaria
void ord_des_dia_secundaria_int(int m,int A[][50])
{
int i,j,aux,k,r,x,y;
m=m-1;
	for(i=0;i<=m;i++)
	{
    	j=m-i;
		r=i;
		k=j;
       while(k>0)
		{ x=r+1;
	          y=k-1;
				if(A[i][j]>A[x][y])
			      {
				aux=A[i][j];
				A[i][j]=A[x][y];
				A[x][y]=aux;
			      }			
		   r++;
		   k--;
		}}}
void ord_des_dia_secundaria_float(int m,float A[][50])
{
int i,j,k,r,x,y;
float aux;
m=m-1;
	for(i=0;i<=m;i++)
	{
    	j=m-i;
		r=i;
		k=j;
       while(k>0)
		{ x=r+1;
	          y=k-1;
				if(A[i][j]>A[x][y])
			      {
				aux=A[i][j];
				A[i][j]=A[x][y];
				A[x][y]=aux;
			      }			
		   r++;
		   k--;
		}}}
void ord_des_dia_secundaria_char(int m,char A[][50])
{
int i,j,k,r,x,y;
char aux;
m=m-1;
	for(i=0;i<=m;i++)
	{
    	j=m-i;
		r=i;
		k=j;
       while(k>0)
		{ x=r+1;
	          y=k-1;
				if(A[i][j]>A[x][y])
			      {
				aux=A[i][j];
				A[i][j]=A[x][y];
				A[x][y]=aux;
			      }			
		   r++;
		   k--;
		}}}
		
// generar un vector con elementos distintos q "0" de una matriz MxN

	int generar_vect_dis_d_cero(int m,int n,int A[][50],int v[])
{
	int i,j,e=0,cont=0,h=0;
	for(i=0;i<m;i++)
	{
	
		for(j=0;j<n;j++)
		{
		h++;
			if(A[i][j]!=0)
			{
				v[e]=A[i][j];
				e++;
			}
			else
			cont++;
		}
	}
    if(cont==h)
	return 0; // devuelve 0 si no hay elementos "ceros" (no hay ceros)
    else
	return e; // devuelve el orden del vector generado 
}
	
// insertar un vector en el medio de una matriz (de M par) 

void insertar_vect_en_mat(int *m,int n ,int A[][50],int v[])
{

  int i,j;
 for(i=*m;i>*m/2;i--)
 {
        for(j=0;j<n;j++)
         {A[i][j]=A[i-1][j];
         }
 }
 for(j=0;j<n;j++)
 { 
 A[i][j]=v[j];
 }
 *m=*m+1; 
}         

// generar vector con los elemento debajo de la dia secundaria
void gene_vect_elem_x_debajo_diasec(int m,int A[][50],int v[],int *p)
{
 int i,j,e=0;
m=m-1;
 for(j=m;j>0;j--)
  {
        i=m-j+1;
        for(;i<=m;i++)
              {
              v[e]=A[i][j];
              e++;
              }
  }
  *p=e;
}

/* intercambiar los elementos de un vector con los elementos de la dia principal
de una matriz*/
void inter_vec_x_dia_princ(int n,int v[], int A[][50])
{
int i,aux;
for(i=0;i<n;i++)
        {
         aux=v[i];
         v[i]=A[i][i];
         A[i][i]=aux;
         }
}
//generar un vector con los num TRIANGULARES de una matriz
int generar_vec_tringular(int m,int n,int A[][50],int v[])
{
int i,j,ban,e=0,c=0,h=0;

for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
        {
        h++;
        ban=es_triangular(A[i][j]); //llamar fun es triangular
           if(ban==1)
                 {
                    v[e]=A[i][j];
                    e++;
                 }
                 else
                 c++;
         }        
 }
 if(c!=h)
   return e;  //devuelve el orden del vector generado
 else
   return 0;}  // devuelve "0" si ni hay triangulares
//es triangular
int es_triangular(int x)
{
int po=2,tri=1;

while(tri<x)
{
tri=po+tri;
po++;
}
if(tri==x)
          return 1; // si es triangular
else
          return 0;} //  no es triangular

	 // es primo 
int es_primo(int x)
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


// si es fibonacci

int es_fibo(int x)
{
int fib=0,b=1,c;
while(fib<x)
{
c=fib;
fib=b;
b=fib+c;
}
if(fib==x)
return 1; // si es fibo
else
return 0; // no es fibo
}  

// generar un vector con los num PRIMOS de una matriz
int generar_vec_primo(int m,int n,int A[][50],int v[])
{
int i,j,ban,e=0,c=0,h=0;

for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
        {
        h++;
        ban=es_primo(A[i][j]);  //llama a la fn es_primo 

              if(ban==1)
                 {
                    v[e]=A[i][j];
                    e++;
                 }
                 else
                 c++;
         }        
 }
 if(c!=h)
 return e; //devuelve el orden del vector
 else
 return 0; // devuelve "0" si no hay primos
}

// generar un vector con los FIBO de una matriz
int generar_vec_fibo(int m,int n,int A[][50],int v[])
{
int i,j,ban,e=0,c=0,h=0;

for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
        {
        h++;
        ban=es_fibo(A[i][j]);    //llama ala fn es_fibo

              if(ban==1)
                 {
                    v[e]=A[i][j];
                    e++;
                 }
                 else
                 c++;
         }        
 }
 if(c!=h)
 return e;  //devuelve el orden del vector 
 else
 return 0; // devuelve "0" si no hay fibo
}
//generar un vector con los elementos q no esten repetidos en una matriz

int generar_vec_no_repe(int m,int n,int A[][50],int v[])
{
  int i,j,ban=0,e=0,c=0,h=0;
  for(i=0;i<m;i++)
  {
        for(j=0;j<n;j++)
            {
            h++;
                ban=tiene_repetido(A[i][j],m,n,A);//preg si tine repe si tiene es 1
                if(ban==0)  // me devuelve 0 xq es falso
                {
                v[e]=A[i][j];
                e++;
                }
                else
                c++;
            }
  }
if(c!=h)
  return e;  //devuelve el orden del vector
  else
  return 0; // "0" si no hay num
}
// fun q busca los reperidos de un num "x" y devuelve "1" si tiene repetidos
int tiene_repetido(int x,int m,int n,int A[][50])
{
int i,j,cr=0;
for(i=0;i<m;i++)
{
        for(j=0;j<n;j++)
                {
                if(x==A[i][j])
                cr++;
                }
}
if(cr==1)
return 0;
else
return 1;
}

// generar vector con promedio de filas (FLOAT) de una matriz
void generar_vec_prom_filas(int m,int n,int A[][50], float vf[])
{
int i,j,e=0;
float sum;
for(i=0;i<m;i++)
        {
        sum=0;
        for(j=0;j<n;j++)
           {
           sum=sum+A[i][j];
           }
           vf[i]=sum*1.0/n*1.0;
        }
}
// genera vector con promedio de las columnas (FLOAT) de una matriz

void generar_vec_prom_columnas(int m,int n,int A[][50],float vc[])
{
float sum;
int i,j;
for(j=0;j<n;j++)
        {
        sum=0;
        for(i=0;i<m;i++)
           {
           sum=sum+A[i][j];
           }
           vc[j]=sum/m;
           
        }
}


/*Producto de matrices (mat1 orden m n y mat2 orden p q 
-condicion en main que p=n la matriz resultante es pro de orden m q )*/

void  produ_de_mat(int x,int y,int q,int mat1[][50],int mat2[][50],int pro[][50])
{

int i,j,k;

for(i=0;i<x;i++)

for(j=0;j<q;j++)

{

pro[i][j]=0;

for(k=0;k<y;k++)

pro[i][j]=pro[i][j]+mat1[i][k]*mat2[k][j];

}

}







/*****************************************************/

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

/*
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
































































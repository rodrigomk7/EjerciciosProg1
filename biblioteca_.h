// ARREGLOS*********************************************************************************************************************************************
//**********************************************************************************************************








//funciones para cargar y mostrar vectores 

void mostrar_vectorf(int n,float vec[])
 {
 int i;
 
 for(i=0;i<n;i++)
 {
  printf("%.2f\t",vec[i]);
 
  }
  
 } 

void cargar_vectorf(int n,float vec[])
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("ingrese el elemento vec[%d]=",i);
		scanf("%f",&vec[i]);
	}
}

void mostrar_vector(int n,int vec[])
 {
 int i;
 
 for(i=0;i<n;i++)
 {
  printf("%d\t",vec[i]);
 
  }
  
 } 



void cargar_vector(int n,int vec[])
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("ingrese el elemento vec[%d]=",i);
		scanf("%d",&vec[i]);
	}
}

void cargar_vectorc(int n,char vec[])
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("ingrese el elemento vec[%d]=",i);
		scanf("%c",&vec[i]);
		getchar();
		printf("\n\n");
	}
}


void mostrar_vectorc(int n,char vec[])
 {
 int i;
 
 for(i=0;i<n;i++)
 {
  printf("%c\t",vec[i]);
 
  }
  
 } 

// generar vector fibo

void generar_vector_fibo(int n,int vec[])
{
	int a=1,b=0,f=0,i;
	
	for(i=0;i<n;i++)
	{
		vec[i]=f;
		f=a+b;
	    a=b;
	    b=f;
	}
 }
 
 // generar vector primo
 
 void generar_vector_primo(int n,int vec[])
{
	int i=0,b,p=1;
	
	while(i<n)
	{

		b=esprimo(p);
		
		if(b==0)
		{
			vec[i]=p;	
			i=i+1;		
		}
		
		p=p+1;		
	}
 }
 
 

//generar vector triangular que muestre los n-1  numeros triangulares

void generar_vector_triangular(int n,int vec[])
{
	int i=0,b,z=1;
	
	while(i<n-1)
	{
	
	b=estriangular(z);
	
	if(b==0)
	{
		vec[i]=z;
		i=i+1;
	}
	z=z+1;
    }	
}




// generar un vector triangular que ingresan n te muentre los numeros triangulares hasta n-1

void generar_vector_triangular1(int *n,int vec[])
{
	int i=0,b,z=1;
	
	while(z<*n-1)
	{
	
	b=estriangular(z);
	
	if(b==0)
	{
		vec[i]=z;
		i=i+1;
	}
	z=z+1;
    }	
    *n=i;
    
}

// ingresar vector y obtener el invertido

void generar_vector_invertido(int n,int vec[])
 {
 int i=0,j=n-1,aux;
 
 while(i<n/2)
 {
  aux=vec[i];
  vec[i]=vec[j];
  vec[j]=aux;
  j=j-1;
  i=i+1;
  }
   
 }
 
 // genera un arreglo que contenga prims de dos digitos
 
 int generar_vector_primosdosdigitos(int *n,int vec[])
{
  int i=0,b=11,a;
  
  while(b<100)
  {
   a=esprimo(b);
   if(a==0)
   { 
     vec[i]=b;
     i=i+1;
   }
   b=b+1;
   
  }
  *n=i;
}

//generar vector que inserte un numero en cierta posicion
 
void generar_vector_insertarnum(int x,float e,int *n,float vec[])
{
	int i=*n;
	
	while(i!=x)
	{
		vec[i]=vec[i-1];
		i=i-1;
	}
	vec[x]=e;
	*n=*n+1;
	
}
//generar vector que elimine un numero en cierta posicion


void generar_vector_eliminarnum(int x,int *n,float vec[])
{
	int i=0;
	
	while(i!=x)
	{
		i++;
	}
	while(i<*n)
	{
		vec[i]=vec[i+1];
		i=i+1;
	}
	*n=*n-1;	
	
}

//generar vector que reemplaze un numero en cierta posicion

void generar_vector_reemplazarnum(int x,float e,int n,float vec[])
{
	int i=0;
	
	while(i!=x)
	{
		i++;
	}
vec[x]=e;	
	
}

// controla si en un vector hay elementos repetidos-devuelve 1 si hay repetidos y 0 si no

int controlrepetidos(int x,int vec[])
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

// elimina los elementos que se repitan en un vector
void eliminar_repetidos(int *n,int vec[])
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

// me dice si los elementos de un vector son iguales - devuelve 0 si son iguales y 1 si no
int iguales(int n,int vec[])
{
	int i,j,c=1;
				
		for(j=i+1;j<n;j++)
		{
			if(vec[i]==vec[j])
			{
				c=c+1;
			}
		}
		if(c==n)
		{
			return 0;			
		}
		else{
			return 1;
		}
	
}


// me devuelve la posicion del mayor elemento par en un vector y devuelve 0 si no hay elementos pares
int posmayorpar(int *pp,int n,int vec[])
{
	int i=0,b=0,d=0,aux;
	
	for(;i<n;i++)
	{
		if(vec[i]%2==0)
		{
			if(b==0)
			{
				aux=vec[i];
				b=1;
				*pp=i;
			}
			else
			{
				if(vec[i]>aux)
				{
					aux=vec[i];
					*pp=i;
				}
			}
		}
	}
	return b;
}

// me devuelve la posicion del menor elemento impar  en un vector y devuelve 0 si no hay elementos impares


int posmenorimpar(int *pi,int n,int vec[])
{
	int i,b=0,d=0,y;

	for(i=0;i<n;i++)
	{			
		if(vec[i]%2!=0)
		{
			
			if(b==0)
			{
				y=vec[i];
				b=1;
				*pi=i;
				
			}
			else
			{
				if(vec[i]<y)
				{
					y=vec[i];
					*pi=i;
				
				}
			}
		}
	}

	
	return b;
	
}

//me devuelve el valor del mayor elemento en un vector

int mayorelemento(int n,int vec[])
{
	int i,b=0,aux;
	
	for(i=0;i<n;i++)
	{
		if(b==0)
		{
			aux=vec[i];
			b=1;
			
		}
		else
		{
			if(vec[i]>aux)
			{
				aux=vec[i];
				
			}
		}
	}
	
	return aux;
}

// me devuelve el valor del menor elemento en un vector

int menorelemento(int n,int vec[])
{
	int i,b=0,aux;
	
	for(i=0;i<n;i++)
	{
		if(b==0)
		{
			aux=vec[i];
			b=1;
			
		}
		else
		{
			if(vec[i]<aux)
			{
				aux=vec[i];
				
			}
		}
	}
	
	return aux;
}

// intercambia el mayor elemento de un vector con el menor donde x es el mayor e y el menor


void intercambiarelementos(int x,int y,int n,int vec[])
{
	int i=0;
	
	
	while(i<n)
	{
	
		if(vec[i]==x)
		{
			vec[i]=y;
		}
	     else
	     {
	     	if(vec[i]==y)
	     	{
	     		vec[i]=x;
			 }
		 }
		 i++;
	}
}

// busca un caracter en un vector de caracter ,retorna 1 si esta y 0 si no esta
int buscar_elementocaracter(char a,int n,char vec[])
{
	int i=0;
	
	for(;i<n;i++)
	{
		if(vec[i]==a)
		{
			return 1;
		}
	}
	return 0;
}

// reemplaza un caracter que yo busque por otro que quiero que lo reemplaze,reemplaza a "a" por "b"

void reemplazar_caracterenvector(char a,char b,int n,char vec[])
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











// MATRICES *********************************************************************************************************************************************************************
//******************************************************************************************************************
//************************************************************









// cargar y mostrar matriz



void cargar_matrizf(int m,int n,float mat[][50])
{
int i,j;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("\nIngrese el elemento Mat[%d][%d] ",i,j);
		scanf("%f",&mat[i][j]);
		}
	}
return;
}

void mostrar_matrizf(int m,int n,float mat[][50])
{
int i,j;

for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("\t%.2f",mat[i][j]);
		}
		printf("\n");
	}
return;
}


void cargar_matriz(int m,int n,int mat[][50])
{
int i,j;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("\nIngrese el elemento Mat[%d][%d] ",i,j);
		scanf("%d",&mat[i][j]);
		}
	}
return;
}
 

void mostrar_matriz(int m,int n,int mat[][50])
{
int i,j;

for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("\t%d",mat[i][j]);
		}
		printf("\n\n");
	}
return;
}

void cargar_matrizc(int m,int n,char mat[][50])
{
int i,j;
for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("\nIngrese el elemento Mat[%d][%d] ",i,j);
		scanf("%c",&mat[i][j]);
		getchar();
		}
	}
return;
}

void mostrar_matric(int m,int n,char mat[][50])
{
int i,j;

for(i=0;i<m;i++)
	{
	for(j=0;j<n;j++)
		{
		printf("\t%c",mat[i][j]);
		}
		printf("\n");
	}
return;
}

//generar una matriz que su diagonal valga 123...n y los demas elementos 0

void generar_diagonal_matriz(int n,int mat[][50])
{
	int i=0,j=0,c=1;
	
	while(i<n)
	{
		while(j<n)
		{
			if(i==j)
			{
				mat[i][j]=c;
			}
			else
			{
				mat[i][j]=0;
			}
			j=j+1;
		}
		
		i=i+1;
		j=1;
		c=c+1;
	}
}

// generar por columnas matriz de nxm primos 

void generar_primo_matriz(int n,int m,int mat[][50])
{
	int  i=0,j=0,b,c=2;
	
	while(j<m)
	{
		while(i<n)
		{
		b=esprimo(c);
		if(b==0)
		{
			mat[i][j]=c;
			i=i+1;
		}
		c=c+1;
		}
			i=0;
			j=j+1;
	}
	
	}
	
// generar un matriz donde se ingrese un numero y formarla en forma creciente a ese numero por columnas	
	
	 
void generar_matriz_creciente(int x,int m,int n,int mat[50][50])
{
 int i=0,j=0;
 
 while(j<n)
 {
  while(i<m)
  {
  mat[i][j]=x;
   i=i+1;
   x=x+1;
  }
   i=0;
   j=j+1;
   
 }  
 }
 
 // generar un matriz con los n elementos impares	 por columnas
 
 void generar_matriz_impares(int m,int n,int mat[][50])
{
  int i=0,j=0,x=1;
 
 while(j<n)
 {
  while(i<m)
  {
  mat[i][j]=x;
  x=x+2;
  i=i+1;
  }
   i=0;
   j=j+1;
   
 } 
}  

// genera la transpuesta a partir de una matriz de m filas y n columas

void generar_transpuesta(int m,int n,int mat1[][50],int mat2[][50])
{
int i,j;
for(i=0;i<n;i++)
	{
	for(j=0;j<m;j++)
		{
		mat2[i][j]=mat1[j][i];
		}
	}
return;
}

//  suma los elementos que se encuentran debajo de la diagonal secundaria


int sumar_diagonalsecundaria(int m,int mat[][50])
{
	int i,j,aux=0;
	
	m=m-1;	
	i=m;
	
while(i>0)
	{
		j=m-i+1;
		
		while(j<=m)
		{
			aux=mat[i][j]+aux;
			j=j+1;
		}
		i=i-1;		
	}
	
	return aux;
	
}

// intercambiar dos columnas en una matriz 
void intercambiar_columnas(int a,int b,int m,int n,int mat[][50])
{
	int i=0,aux;
	
	while(i<n)
	{
		aux=mat[i][a];
		mat[i][a]=mat[i][b];
		mat[i][b]=aux;
		i++;
	}
	
}

// intercambiar la diagonal principal con la diagonal secundaria en una matriz


void intercambiar_diagonales(int m,int mat[][50])
{
	int i=0,j,aux;
	m=m-1;
	
	
	while(i<=m)
	{
		j=m-i;
		
		aux=mat[i][i];
		mat[i][i]=mat[i][j];
		mat[i][j]=aux;
		i++;
		
	}
	
}

//crea uun vector v,donde sus componentes es la sumas de cada fila de la matriz a

void generar_vectorporfilaz(int m,int n,int mat[][50],int v1[])
{
	int i=0,j,s;
	m=m-1;
	n=n-1;
	
	for(;i<=m;i++)
	{
		s=0;
		j=0;
		for(;j<=n;j++)
		{
			s=s+mat[i][j];
		}
		v1[i]=s;		
	}
}
//crea uun vector b,donde sus componentes es la sumas de cada columna de la matriz a


void generar_vectorporcolumnas(int m,int n,int mat[][50],int v2[])
{
	
	int j=0,i,s;
	m=m-1;
	n=n-1;
	
	for(;j<=n;j++)
	{
		i=0;
		s=0;
		for(;i<=m;i++)
		{
			s=s+mat[i][j];
		}
		v2[j]=s;		
	}

}

//busca un elemento en una matriz y devuelvee cuantas veces esta el elemento en la matriz

int buscar_elemento(int x,int m,int n,int mat[][50])
{
	int i=0,j,c=0;
	
	for(;i<m;i++)
	{
		j=0;
		for(;j<n;j++)
		{
			if(mat[i][j]==x)
			{
				c++;
			}
		}
	}
	return c;
}

// ordena la diagonal principal de una matriz en forma accendente

void ordenar_diagonalascendente(int m,int mat[][50])
{
	int i=0,j,aux;
	
	m=m-1;
	
	
	for(;i<m;i++)
	{
		j=i+1;
		for(;j<=m;j++)
		{
			if(mat[i][i]>mat[j][j])
			{
				aux=mat[i][i];
				mat[i][i]=mat[j][j];
				mat[j][j]=aux;
			}
		}
	}
}
// ordena la diagonal secundaria de una matriz en forma decendente

void ordenar_diagonalsecdecendente(int m,int mat[][50])
{
	int i=0,j,aux,k,t,x,y;
	m=m-1;
	
	for(;i<=m;i++)
	{
		j=m-i;
		t=i;
		k=j;	
		for(;k>0;k--)
		{
			x=t+1;
			y=k-1;
			
			if(mat[i][j]<mat[x][y])
			{
				aux=mat[i][j];
				mat[i][j]=mat[x][y];
				mat[x][y]=aux;
			}
			
			t=t+1;
		}
	}
	
}








// VECTORES Y MATRICES***********************************************************************************************************
//****************************************************************************************************************************************
//*********************************************************************************************************************************************
//*************************************************************************************************









//generar un vector con los elementos de una matriz que sean distintos de cero

void generarvec_elementosdistcero(int n,int m,int mat[][50],int *x,int vec[])
{

	int i,d=0,j;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(mat[i][j]!=0)
			{
				vec[d]=mat[i][j];
				d=d+1;
			}
		}
	}
	*x=d;
	}
	
//insertar vector en medio de una matriz de filaz par

void insertarvec_mat(int *m,int n,int mat[][50],int vec[])
{
	int i,j;
	
	for(i=*m;i>*m/2;i--)
	{
		for(j=0;j<n;j++)
		{
			mat[i][j]=mat[i-1][j];
		}
	}
	for(j=0;j<n;j++)
	{
	mat[i][j]=vec[j];
	}
	
	*m=*m+1;
}	

//generar un vector b a partir de una matriz a,tal que sus elementos sean el promedio de cada fila 

void generar_vectorpromedio_porfilaz(int m,int n,int mat[][50],float v1[])
{
	int i=0,j;
	float s;
		
	for(;i<m;i++)
	{
		s=0;
		j=0;
		for(;j<n;j++)
		{
			s=s+mat[i][j];
		}
		v1[i]=s*1.0/n*1.0;		
	}
}

//reemplazar la diagonal principal de una matriz por un vector ingresado

	void reemplazar_diagonalporvector(int n,int vec[],int mat[][50])
	{
		int i=0;
		
		for(;i<n;i++)
		{
			mat[i][i]=vec[i];
		}
	}
		

//generar un vector b a partir de una matriz a,tal que sus elementos sean el promedio de cada columna de la matriz

void generar_vectorpromedio_porcolumnas(int m,int n,int mat[][50],float v2[])
{
	
	int j=0,i;
	float s;
	
	
	for(;j<n;j++)
	{
		i=0;
		s=0;
		for(;i<m;i++)
		{
			s=s+mat[i][j];
		}
		v2[j]=s*1.0/m;
				
	}
}
	
// generar un vector b a partiir de una matriz a tal que sus elementos sean ls elements  que estan debajo de la diagonal sec,
int generar_matriz_elementosdebajodiagonalec(int m,int mat[][50],int vec[])
{
	int i,j,t=0;
	
	m=m-1;
	
	j=m;
	
	for(;j>0;j--)
	{
		i=m-j+1;
		for(;i<=m;i++)
		{
			vec[t]=mat[i][j];
			t++;			
		}
	}
	return t;
}

//genera un vector formado por los numeros triangulares que hay en una matriz
 int generar_vector_contriangulares(int m,int n,int mat[][50],int vec[])
  {
  	int t=0,i=0,j,b;
  	
  	for(;i<m;i++)
  	{
  		for(j=0;j<n;j++)
  		{
  			b=estriangular(mat[i][j]);
  			
  			if(b==0)
  			{
  				vec[t]=mat[i][j];
  				t++;
			  }
		  }
	}
	return t;
  }
  
//generar un vector formado por los numeros primos que hay en una matriz


  int generar_vector_conprimos(int m,int n,int mat[][50],int vec[])
  {
  	int t=0,i=0,j,b;
  	
  	for(;i<m;i++)
  	{
  		for(j=0;j<n;j++)
  		{
  			b=esprimo(mat[i][j]);
  			
  			if(b==0)
  			{
  				vec[t]=mat[i][j];
  				t++;
			  }
		  }
	}
	return t;
  }
  
  // genera un vector b a partir de una matriz a con los elementos que nos son repetidos
 int generar_vector_norepetidos(int m,int n,int mat[][50],int vec[])
  {
  	int t=0,i=0,j,b;
  	
  	for(;i<m;i++)
  	{
  		for(j=0;j<n;j++)
  		{
  			b=esrepetido(mat[i][j],m,n,mat);
  			
  			if(b==0)
  			{
  				vec[t]=mat[i][j];
  				t++;
			  }
		  }
	}
	return t;
  }
  
  // me dice si hay algun elemento que se repita en una matriz 
    int esrepetido(int x,int m,int n,int mat[][50])
  {
  	int i,j,c=0;
  	
  	for(i=0;i<m;i++)
  	{
  		for(j=0;j<n;j++)
  		{
  			if(mat[i][j]==x)
  			{
  				c=c+1;
  				if(c>1)
  				{
  					return 1;
				  }
			  }
		  }
	  }
	  return 0;
  }
  
  //genera un vector a partir de una matriz cuyos elementos son numeros fibonacci
  
   int generar_vector_confibo(int m,int n,int mat[][50],int vec[])
  {
  	int t=0,i=0,j,b;
  	
  	for(;i<m;i++)
  	{
  		for(j=0;j<n;j++)
  		{
  			b=esfibo(mat[i][j]);
  			
  			if(b==1)
  			{
  				vec[t]=mat[i][j];
  				t++;
			  }
		  }
	}
	return t;
  }
  
  
  
  
  
  
  
  
  
  
// funciones ********************************************************************************************************************************
//****************************************************************************************************************************************************
//***************************************************************************************************************************************











// ver si un numero es primo
 
 int esprimo(int x)
 {
 	int d;
 	
 	for(d=2;d<x;d++)
 	{
 		if(x%d==0)
 		{
 		return 1;
		 }		 
	 }
	 if(x<=0)
         {
         	return 1;
			 }	
	return 0;		 
 }
 
 // ver si un numero es triangular

int estriangular(int x)
{
	int c=1,cont=2;
	
	while(c<x)
	{
		c=c+cont;
		cont=cont+1;
	}
	if(c==x)
	{
		return 0;
	}
	
	return 1;
}    

// ver si un numero es par 

int espar(int x)
{
	if(x%2==0)
	{
		return 1;
	}
	return 0;
}

// me dice si un numero es fibonacci

 int esfibo(int x)
  {
  	int a,b,f;
  	f=0;
  	b=0;
  	a=1;
  	while(f<x)
  	{
  		f=a+b;
  		a=b;
  		b=f;
	  }
	  if(f==x)
	  {
	  	return 1;
	  }
	  return 0;  	
  }
  
  
  
  
  
  
  // cadena de caracteres****************************************************************************************************************************************************************
  //**************************************************************************************************************************************************************
  //******************************************************************************************************************************************************************************
  //********************************************************************************************************************************************************
  //********************************************************************************************************************************************************
  
  
  
  
  
  
  
  // cuenta cuantas numeros , letras en mayuscula,letras en minusculas,signos de puntuacion, espacios, y otros
  
  
  void contar_caracteres(int *a,int *b,int *c,int *d,int *e,int *f,char cad)
{
	
	if(isdigit(cad))
	{
		*a=*a+1;
	}
	    else{
		         if(isupper(cad))
		                         {
		                         	*b=*b+1;
			                     }
			                 else
			                     {
			                   	        if(islower(cad))
			                   	           {
			                   	        	 *c=*c+1;
										   }
										   else{
										   	                if(ispunct(cad))
										   	                {
										   	                	*d=*d+1;
															   }
															   
															   else
															   {
															   	    if(cad==' ')
															   	    {
															   	    	*e=*e+1;
																	   }
																	   else
																	   {
																	   	  *f=*f+1;
																	   }
															   }
										       }
							     }
	        }
}


// genera un vector B con los caracteres de otro vector que pertenescan alfabeto del  vector A


void generar_vectorelementosalfabeto(int n,char vec[],int *x,char v1[])
{
	int i;
	
	for(i=0;i<n;i++)
	{
		if(isalpha(vec[i]))
		{
			v1[*x]=vec[i];
			(*x)++;
		}
	}

}

// GENERA UNA CADENA DE CARACTERES ,CON CARACTERES QUE PERTENESCAN AL ALFABETO,A PARTIR DE UN VECTOR DE CARACTERES

void generar_cadenacaracteresalfabeto(int n,char vec[],int *y,char ca[])
{
	int i,j=0;
	
	for(i=0;i<n;i++)
	{
		if(isalpha(vec[i]))
		{
			ca[*y]=vec[i];
			(*y)++;
		}
	}
      ca[*y]='\0';

}

// // GENERA UNA CADENA DE CARACTERES ,CON CARACTERES QUE SEAN NUMERICOS ,A PARTIR DE UN VECTOR DE CARACTERES



void generar_cadenacaracteresnumerico(int n,char vec[],int *z,char cb[])
{
	int i;
	
	for(i=0;i<n;i++)
	{
		if(isdigit(vec[i]))
		{
			cb[*z]=vec[i];
			(*z)++;
			
		}
	}
      cb[*z]='\0';
      

}

// // GENERA UNA CADENA DE CARACTERES ,CON CARACTERES QUE DEL ALFABETO QUE ESTEN EN MAYUSCULA ,A PARTIR DE UN VECTOR DE CARACTERES

 void generar_cadenaconmayusculas(char cad[],int *n,char cad1[])
 {
  int i;
  
  for(i=0;i<strlen(cad);i++)
  {
   if(isupper(cad[i]))
   {
     cad1[*n]=cad[i];
     (*n)++;
   }
  }
  cad1[*n]='\0';
  } 
 
 
 // suma los numeros ingresados en una cadena de caracteres : 12 + 2=14  
 
 int operacion_cadena(char cad[])
 {
 	int i,t=0,j,k,p=0,x,y,z1,z2;
 	char cad1[50],cad2[50];
 	
 	for(i=0;i<strlen(cad);i++)
 	{
 		if(isdigit(cad[i]))
 		{
 			cad1[t]=cad[i];
 			t++;
		 }
		 else
		 {
		 	if(!isdigit(cad[i]) && !isspace(cad[i]) && cad[i]!='+' && cad[i]!='-' )
		   	{
		 		return 0;
			 }
			 else
			 {
			 	if(cad[i]==' ')
		 	    {
	         j=i;
		 i=strlen(cad);			 
			    }		
		     } 
	     }
	 }
	 cad1[t]='\0';
	  
	 
	  
	  k=j+3;
	 
	 for(;k<strlen(cad);k++)
	 {
	    	if(isdigit(cad[k]))
 		{
 			cad2[p]=cad[k];
 			p++;
		 }
		 else
		 {
		 	if(isalpha(cad[i]) || ispunct(cad[i]) )
		   	{
		 		return 0;
			 }
			
	     }
	 } 
	 cad2[k]='\0';  
	 
	
	 
	 x=atoi(cad1);
	 y=atoi(cad2);
	 z1=x+y;
	 z2=x-y;
	 if(cad[j+1]=='+')
	 {
	 	return z1;
	 }
	if(cad[j+1]=='-')
	{
		return z2;
	}
 }
 
 

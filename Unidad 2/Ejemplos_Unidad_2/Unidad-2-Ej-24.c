/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 24
	Función recursiva: Fibonacci
*/

#include <stdio.h>
 
int fibo(int n ); 
 
int main(int argc, char *argv[])
{
   int fib; 
   int nTermin; 
   
   printf( "Introduzca el termino de Fibonacci que necesite: " );
   scanf( "%d", &nTermin);

   fib = fibo( nTermin ); 
   printf( "\nTermino Nro. %d de Fibonacci = %d\n", nTermin, fib );

printf("\n\n");
return 0; 
} 
 
int fibo( int n )
{
   if ( n == 0 || n == 1 ) 
    	   return n;
   else  
      return fibo( n - 1 ) + fibo( n - 2 );
}

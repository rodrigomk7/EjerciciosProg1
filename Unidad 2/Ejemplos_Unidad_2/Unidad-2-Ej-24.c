/*
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 24
	Funci�n recursiva: Fibonacci
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

/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 38
	Datos tipo char: Funciones de caracteres (ctype.h)
*/

#include <stdio.h>
#include <ctype.h>

int main (int argc, char *argv[])
{
	char 	car = '0';
	char 	car1 = 'a', car2 = 'A';
	char 	car3 = ' ';
	char	car4 = '\n'; 	
	char 	car5 = 'ñ';   //ver Linux
	char	car6 = ';';
	char	aux;
	
	printf("\n car: %-5c ", car );
	printf(" car1: %-5c ", car1);
	printf(" car2: %-5c ", car2);
	printf("\n car3: %-5c ", car3);
	printf(" car4: %-5c ", car4); 
	printf(" car5: %-5c  car6: %-5c", car5, car6);
	
	printf( "\n El caracter %c es digito?: %d", car, isdigit(car));
	printf( "\n El caracter %c es un caracter alfabetico?: %d", car, isalpha(car));
	printf( "\n El caracter %c es un caracter alfanumerico?: %d", car, isalnum(car));
	printf( "\n El caracter %c es una minuscula?: %d", car, islower(car));
	printf( "\n El caracter %c es una mayuscula?: %d", car, isupper(car));
	aux = tolower(car);
	printf( "\n La minuscula del caracter %c es : %c", car, aux);
	aux = toupper(car);
	printf( "\n La mayuscula del caracter %c es : %c", car, aux);
	
	printf( "\n\n El caracter %c es digito?: %d", car1, isdigit(car1));
	printf( "\n El caracter %c es un caracter alfabetico?: %d", car1, isalpha(car1));
	printf( "\n El caracter %c es un caracter alfanumerico?: %d", car1, isalnum(car1));
	printf( "\n El caracter %c es una minuscula?: %d", car1, islower(car1));
	printf( "\n El caracter %c es una mayuscula?: %d", car1, isupper(car1));
	aux = tolower(car1);
	printf( "\n La minuscula del caracter %c es : %c", car1, aux);
	aux = toupper(car1);
	printf( "\n La mayuscula del caracter %c es : %c", car1, aux);

printf("\n\n");	
return 0;	
}

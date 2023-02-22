/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 1
	Funciones estándar void y que devuelven valor
*/

#include <stdio.h>
#include <math.h>   // en linux indicar que se usa la libreria math (-lm)

int main(int argc, char* argv[])
{
	float 	x = 9, y = 7, z;
	
	// ******************FUNCIONES QUE NO DEVUELVEN VALOR *****************
	printf("\n Mensaje");
	//system("cls"); //para windows
	// system("clear"); //para linux
	
	
	//****************************************
	// *****************FUNCIONES QUE DEVUELVEN VALOR *********************
	// 1) EN SENTENCIA DE ASIGNACIÓN
	z = sqrt(x) + y;
	printf(" \n Resultado: %6.3f", z);
		
	// 2) EN SENTENCIA DE SALIDA DE DATOS
	printf(" \n\n Raiz cuadrada de %6.3f = %6.3f", (x+y), sqrt(x+y)); 
			
	// 3) EN SENTENCIA SIMPLE
	printf("\n\n Raiz cuadrada de 16: ");
	sqrt(x + y); 
	printf("\n Ingrese un caracter: ");
	fgetc(stdin); 
	
printf("\n\n");
return 0;
}


/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 11
	Ingresar un número entero y con una sola función 
	determinar si es múltiplo de 3 y de 4 simultáneamente. 
*/

#include <stdio.h> 

int multTresCuatro(int num, int *multCua);

int main(int argc, char *argv[])
{
	
	int numero, multTres, multCuatro = 1;		
	printf("\nIngresar en valor entero: ");
	scanf("%d", &numero);
		
	multTres = multTresCuatro(numero, & multCuatro);	

	if (multTres == 0)
		printf("\n\t El valor: %d es multiplo de 3", numero);
	else
		printf("\n\t El valor: %d NO es multiplo de 3", numero);

	if (multCuatro == 0)
		printf("\n\t El valor: %d es multiplo de 4", numero);
	else
		printf("\n\t El valor: %d NO es multiplo de 4", numero);

		
printf("\n\n");	
return 0;
}





int multTresCuatro(int num, int *multCua)
{
	int mult3 = 1;
	
	if (num % 3 == 0)
		mult3 = 0;
		
	if (num % 4 == 0)
	        *multCua = 0;

return mult3;

}



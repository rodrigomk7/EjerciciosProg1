/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 11
	Ingresar un n�mero entero y con una sola funci�n 
	determinar si es m�ltiplo de 3 y de 4 simult�neamente. 
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



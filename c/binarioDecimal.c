/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 1
		
	Problema 7: Ingresar un número expresado en base 2 y convertirlo a decimal.
*/

#include <stdio.h> 

int main(int argc, char *argv[])          
{
	
	int 	binario, bandera;
	int 	aux, pot;
	int 	decimal; 
	
	do
	{
		binario = 0;
		do
		{
			printf("\nIngresar un valor expresado en base 2: ");
			scanf("%d", &binario);
		} while(binario<=0);
		
		aux = binario;
		
		while (aux >0)
		{
			if ((aux % 10 == 0) || (aux % 10 == 1))
				bandera = 0;
			else 
			{
				bandera = 1;
				break;
			}
			aux = aux /10;
		}
		
	} while (bandera == 1);
	
	pot = 1;
	decimal = 0;
	aux = binario;
	
	while ( aux > 0)
	{
		decimal = decimal + (aux % 10) * pot;
		pot = pot * 2;
		aux /= 10;
	}
	
	printf(" \n\t El binario %d se expresa en decimal: %d", binario, decimal);
	
printf("\n\n");	
return 0;
}

/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 1
		
	Problema 7: Ingresar un n�mero expresado en base 2 y convertirlo a decimal.
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

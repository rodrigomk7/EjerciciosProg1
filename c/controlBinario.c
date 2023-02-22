/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 1
		
	Problema 6: Ingresar un n�mero expresado en base 2 y 
		    controlar que todos los d�gitos sean binarios.
*/

#include <stdio.h> 

int main(int argc, char *argv[])
{
	
	int numero, bandera;
	int aux, ban = 1;
		
	do
	{
		printf("\nIngresar un valor expresado en base 2: ");
		scanf("%d", &numero);
	} while(numero<=0);
	
	aux = numero;
	
	for( ; aux > 0 ; )   //while (aux >0)
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
	
	if (bandera == 0)
		printf("\n\t El numero %d esta expresado en base 2", numero);
	else
		printf("\n\t El numero %d NO esta expresado en base 2", numero);
	
printf("\n\n");	
return 0;
}

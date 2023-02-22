/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 12
	Ingresar un n�mero expresado en base 2. 
	Usar una funci�n para controlar que todos los d�gitos sean binarios.
*/

#include <stdio.h> 

int controlBinario(int num);

int main(int argc, char *argv[])
{
	
	int numero, bandera;
		
	do
	{
		printf("\nIngresar un valor expresado en base 2: ");
		scanf("%d", &numero);
	} while(numero<=0);
	
	bandera = controlBinario(numero);
	
	if (bandera == 0)
		printf("\n\t El numero %d esta expresado en base 2", numero);
	else
		printf("\n\t El numero %d NO esta expresado en base 2", numero);
	
printf("\n\n");	
return 0;
}

int controlBinario(int num)
{
	int ban = 1;
	
	while (num >0)
	{
		if ((num % 10 == 0) || (num % 10 == 1))
			ban = 0;
		else 
		{
			ban = 1;
			break;
		}
		num = num /10;
	}
return ban;
}



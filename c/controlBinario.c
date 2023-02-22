/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 1
		
	Problema 6: Ingresar un número expresado en base 2 y 
		    controlar que todos los dígitos sean binarios.
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

/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 14
	Calcular diferencia de potencial, intensidad de corriente
	o resistencia en un circuito. 
	Utilizar función con menú.
*/

#include <stdio.h> 

int menu();
float difPot();
float intens();
float resist();

int main(int argc, char *argv[])
{
	
	int opcion;
		
	do
	{
		opcion = menu();
		switch(opcion)
		{
		case 1: 
			printf("\n La diferencia de potencial: %7.3f Volts", difPot());
			break;
		case 2:
			printf("\n La intensidad de corriente es :%7.3f Amperes", intens());
			break;
		case 3:
			printf("\n El valor de la resistencia es :%7.3f Ohms", resist());
			break;
		case 4:
			break;
		default:
			printf("\n Opcion NO valida ");
			break;
		}
		
	} while (opcion != 4);
	
printf("\n\n");	
return 0;
}

int menu()
{
	int opcion;
	
		printf("\n\n\n\n\t\t\t 1.- Calcular Diferencia de potencial");
		printf("\n\n\t\t\t 2.- Calcular Intensidad de corriente");
		printf("\n\n\t\t\t 3.- Calcular Resistencia");
		printf("\n\n\t\t\t 4.- Salir");
		printf("\n\n\n\n\t\t\t\t Ingrese una opcion: ");
		scanf("%d", &opcion);	
return opcion;	
}

float difPot()
{
	float potencial, resist, intens;
	
	printf("\n Ingresar valor de resistencia (Ohms): ");
	scanf("%f", &resist);
	printf("\n Ingresar intensidad de corriente (Amperes): ");
	scanf("%f", &intens);
	potencial = resist * intens;
	
return potencial;	
}

float intens()
{
	float intensidad, difPot, resist;
	
	printf("\n Ingresar valor de resistencia (Ohms): ");
	scanf("%f", &resist);
	printf("\n Ingresar diferencia de potencial (Volts): ");
	scanf("%f", &difPot);
	intensidad = difPot / resist;	
	
return intensidad;	
}

float resist()
{
	float resistencia, intens, difPot;
	
	printf("\n Ingresar intensidad de corriente (Amperes): ");
	scanf("%f", &intens);
	printf("\n Ingresar diferencia de potencial (Volts): ");
	scanf("%f", &difPot);
	
return (difPot/intens);	
}

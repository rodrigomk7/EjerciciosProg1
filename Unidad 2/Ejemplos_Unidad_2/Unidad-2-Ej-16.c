/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 16
	Función Suma de binarios. Controlar el ingreso de datos
*/


#include <stdio.h>

int controlBinario(int num);
int sumaBinarios(int , int);

int main(int argc, char *argv[])
{
	int b1, b2;
	
	do {
		printf("\n Ingresar 1er. binario: ");
		scanf("%d", &b1);
	}while (controlBinario(b1) == 1);
	
	do{
		printf(" Ingresar 2do. binario: ");
		scanf("%d", &b2);
	}while (controlBinario(b2) == 1);
	
	printf("La suma binaria de %5d + %5d",b1, b2);
	printf(" es: %d", sumaBinarios(b1,b2));
printf("\n\n");
return 0;
}

int controlBinario(int num)
{
	int ban = 1;
	
	if (num ==0) 
		ban =0;
	
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

int sumaBinarios(int bin1, int bin2)
{
	int suma = 0, ac = 0;
	int p = 1, sp;
	
	while ((bin1!=0)||(bin2 != 0))
	{
		sp = bin1 % 10 + bin2 % 10 + ac;
		suma = suma + (sp % 2) * p;
		ac = sp / 2;
		p = p *10;
		bin1 = bin1 / 10;
		bin2 = bin2 / 10;
	}
	suma = suma + ac * p;
	
return suma;	
}

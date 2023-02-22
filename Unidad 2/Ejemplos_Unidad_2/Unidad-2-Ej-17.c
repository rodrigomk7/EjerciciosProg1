/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 17
	Efectuar la suma de dos números en base b. 
	Controlar el ingreso de datos
*/


#include <stdio.h>

int controlDigitos(int, int);
int sumaBaseB(int, int, int);

int main(int argc, char *argv[])
{
	int x1, x2, base;
	
	do {
		printf("\n Ingresar base de numeracion (<=10): ");
		scanf("%d", &base);
	}while ( (base > 10) || (base < 2) );
	
	do {
		printf("\n Ingresar 1er. valor: ");
		scanf("%d", &x1);
	}while (controlDigitos(x1, base) == 1);
	
	do{
		printf(" Ingresar 2do. valor: ");
		scanf("%d", &x2);
	}while (controlDigitos(x2, base) == 1);
	
	printf("La suma en base %3d de %5d + %5d",base, x1, x2);
	printf(" es: %d", sumaBaseB(x1, x2, base));
	
printf("\n\n");
return 0;
}

int controlDigitos(int num, int base)
{
	int ban = 1;
	
	while (num >0)
	{
		if ((num % 10 < base))
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

int sumaBaseB(int num1, int num2, int base)
{
	int suma = 0, ac = 0;
	int p = 1, sp;
	
	while ((num1!=0)||(num2 != 0))
	{
		sp = num1 % 10 + num2 % 10 + ac;
		suma = suma + (sp % base) * p;
		ac = sp / base;
		p = p *10;
		num1 = num1 / 10;
		num2 = num2 / 10;
	}
	suma = suma + ac * p;
	
return suma;	
}

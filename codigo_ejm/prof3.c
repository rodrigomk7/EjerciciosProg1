//ejercicio 3b

#include<stdio.h>

int sumar(int a, int b);

int main (int argc, char *argv[])
{
int r, valor1, valor2;
printf(" ingrese un valor:");
scanf("%d",&valor1);
printf(" ingrese otro valor:");
scanf("%d",&valor2);
r=sumar(valor1, valor2);
printf("\n el resultado de la suma es:%d \n",r);
return 0; 
}


int sumar (int a, int b)
{

return(a+b);
}

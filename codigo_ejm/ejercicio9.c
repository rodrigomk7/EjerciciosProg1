#include <stdio.h>
int main (int argc, char *argv[])
{
int n,inv=0,aux;
do
{
printf("\n ingresar un numero al que se invertira:");
scanf("%d",&n);
}
while(n<9); 
aux=n;
while(aux>0)
{
inv=inv*10+aux%10;
aux=aux/10;
}
printf("\n\n el invertido es:%d",inv);
return 0;
}


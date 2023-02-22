

#include <stdio.h> 

int contrlpos(int e,int f);

int pot (int bas,int exp);

int main(int argc, char *argv[])
{
  int a,b,ban,mul;
  do{
  ban=0
   printf("\n Ingresar el valor de la base: ");
   scanf("%d",&a);
   printf("\n Ingresar el valor del exponente: ");
   scanf("%d",&b);

    ban=contrlpos(a,b);
    }while(ban=0);
    
    mul=pot(a,b);
    printf("\n El resultado de la potencia es:%d",&mul);
    return 0;
}


// control positivo

  int contrlpos(e,f)
{
if(e>0&&f>0)
        ban=7;
 return (ban);
 }

// calculo la pot

  
int pot (x,y);
{
int x,y,cont=0,s=0;
while(cont<x)
{
s=s+y;
cont++;
}
return (s);
}


 
